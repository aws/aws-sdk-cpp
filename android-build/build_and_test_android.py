#
# Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License").
# You may not use this file except in compliance with the License.
# A copy of the License is located at
# 
#  http://aws.amazon.com/apache2.0
# 
# or in the "license" file accompanying this file. This file is distributed
# on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
# express or implied. See the License for the specific language governing
# permissions and limitations under the License.
#

import re
import os
import argparse
import subprocess
import shutil
import time
import datetime
import sys

TestName = "AndroidSDKTesting"
TestLowerName = TestName.lower()

def ArgumentException( Exception ):
    def __init__( self, argumentName, argumentValue ):
        self.m_argumentName = argumentName
        self.m_argumentValue = argumentValue


def ParseArguments():
    parser = argparse.ArgumentParser(description="AWSNativeSDK Android Test Script")
    parser.add_argument("--clean", action="store_true")
    parser.add_argument("--emu", action="store_true")
    parser.add_argument("--abi", action="store")
    parser.add_argument("--avd", action="store")
    parser.add_argument("--nobuild", action="store_true")
    parser.add_argument("--noinstall", action="store_true")
    parser.add_argument("--runtest", action="store")
    parser.add_argument("--credentials", action="store")
    parser.add_argument("--build", action="store")
    parser.add_argument("--so", action="store_true")
    parser.add_argument("--stl", action="store")

    args = vars( parser.parse_args() )

    argMap = {}
    argMap[ "clean" ] = args[ "clean" ]
    argMap[ "abi" ] = args[ "abi" ] or "armeabi-v7a"
    argMap[ "avd" ] = args[ "avd" ]
    argMap[ "useExistingEmulator" ] = args[ "emu" ]
    argMap[ "noBuild" ] = args[ "nobuild" ]
    argMap[ "noInstall" ] = args[ "noinstall" ]
    argMap[ "credentialsFile" ] = args[ "credentials" ] or "~/.aws/credentials"
    argMap[ "buildType" ] = args[ "build" ] or "Release"
    argMap[ "runTest" ] = args[ "runtest" ]
    argMap[ "so" ] = args[ "so" ]
    argMap[ "stl" ] = args[ "stl" ] or "libc++_shared"

    return argMap


def IsValidABI(abi):
    return abi == "armeabi-v7a"


def ShouldBuildClean(abi, buildDir):
    if not os.path.exists( buildDir ):
        return True

    abiPattern = re.compile("ANDROID_ABI:STRING=\s*(?P<abi>\S+)")
    for _, line in enumerate(open(buildDir + "/CMakeCache.txt")):
        result = abiPattern.search(line)
        if result != None:
            return result.group("abi") != abi

    return False


def BuildAvdAbiSet():
    namePattern = re.compile("Name:\s*(?P<name>\S+)")
    abiPattern = re.compile("ABI: default/(?P<abi>\S+)")
    avdList = subprocess.check_output(["android", "list", "avds"])
    avdABIs = {}
    currentName = None

    for _, line in enumerate(avdList.splitlines()):
        if not currentName:
            nameResult = namePattern.search(line)
            if nameResult != None:
                currentName = nameResult.group("name")
        else:
            abiResult = abiPattern.search(line)
            if abiResult != None:
                avdABIs[currentName] = abiResult.group("abi")
                currentName = None

    return avdABIs


def DoesAVDSupportABI(avdAbi, abi):
    if avdAbi == "armeabi-v7a":
        return abi == "armeabi-v7a" or abi == "armeabi"
    else:
        return abi == avdAbi


def FindAVDForABI(abi, avdABIs):  
    for avdName in avdABIs:
        if DoesAVDSupportABI(avdABIs[avdName], abi):
            return avdName

    return None


def IsValidAVD(avd, abi, avdABIs):
    return DoesAVDSupportABI(avdABIs[avd], abi)


def GetTestList(buildSharedObjects):
    if buildSharedObjects:
        return [ 'core', 's3', 'dynamodb', 'cloudfront', 'cognitoidentity', 'identity', 'lambda', 'logging', 'redshift', 'sqs', 'transfer' ]
    else:
        return [ 'unified' ]


def ValidateArguments(buildDir, avd, abi, clean, runTest, buildSharedObjects):
 
    validTests = GetTestList( buildSharedObjects )
    if runTest not in validTests:
        print( 'Invalid value for runtest option: ' + runTest )
        print( 'Valid values are: ' )
        print( '  ' + ", ".join( validTests ) )
        raise ArgumentException('runtest', runTest)
        
    if not IsValidABI(abi):
        print('Invalid argument value for abi: ', abi)
        print('  Valid values are "armeabi-v7a"')
        raise ArgumentException('abi', abi)

    if not clean and ShouldBuildClean(abi, buildDir):
        clean = True

    avdABIs = BuildAvdAbiSet()

    if not avd:
        print('No virtual device specified (--avd), trying to find one in the existing avd set...')
        avd = FindAVDForABI(abi, avdABIs)

    if not IsValidAVD(avd, abi, avdABIs):
        print('Invalid virtual device: ', avd)
        print('  Use --avd to set the virtual device')
        print('  Use "android lists avds" to see all usable virtual devices')
        raise ArgumentException('avd', avd)

    return (avd, abi, clean)


def SetupJniDirectory(abi, clean):
    path = os.path.join( TestName, "app", "src", "main", "jniLibs", abi )
 
    if clean and os.path.exists(path):
        shutil.rmtree(path)

    if os.path.exists( path ) == False:
        os.makedirs( path )

    return path


def CopyNativeLibraries(buildSharedObjects, jniDir, buildDir, abi, stl):
    baseToolchainDir = os.path.join(buildDir, 'toolchains', 'android')
    toolchainDirList = os.listdir(baseToolchainDir) # should only be one entry
    toolchainDir = os.path.join(baseToolchainDir, toolchainDirList[0])

    platformLibDir = os.path.join(toolchainDir, "sysroot", "usr", "lib")
    shutil.copy(os.path.join(platformLibDir, "liblog.so"), jniDir)

    stdLibDir = os.path.join(toolchainDir, 'arm-linux-androideabi', 'lib')
    if stl == 'libc++_shared':
        shutil.copy(os.path.join(stdLibDir, "libc++_shared.so"), jniDir)
    elif stl == 'gnustl_shared':
        shutil.copy(os.path.join(stdLibDir, "armv7-a", "libgnustl_shared.so"), jniDir)  # TODO: remove armv7-a hardcoded path

    if buildSharedObjects:

        soPattern = re.compile(".*\.so$")

        for rootDir, dirNames, fileNames in os.walk( buildDir ):
            for fileName in fileNames:
                if soPattern.search(fileName):
                    libFileName = os.path.join(rootDir, fileName)
                    shutil.copy(libFileName, jniDir)

    else:
        unifiedTestsLibrary = os.path.join(buildDir, "android-unified-tests", "libandroid-unified-tests.so")
        shutil.copy(unifiedTestsLibrary, jniDir)

def RemoveTree(dir):
    if os.path.exists( dir ):
        shutil.rmtree( dir )


def BuildNative(abi, clean, buildDir, jniDir, installDir, buildType, buildSharedObjects, stl):
    if clean:
        RemoveTree(installDir)
        RemoveTree(buildDir)
        RemoveTree(jniDir)
        for externalProjectDir in [ "openssl", "zlib", "curl" ]:
            RemoveTree(externalProjectDir)

        os.makedirs( jniDir )
        os.makedirs( buildDir )
        os.chdir( buildDir )

        if not buildSharedObjects:
            link_type_line = "-DBUILD_SHARED_LIBS=OFF"
        else:
            link_type_line = "-DBUILD_SHARED_LIBS=ON"

        subprocess.check_call( [ "cmake", 
                                 link_type_line,
                                 "-DCUSTOM_MEMORY_MANAGEMENT=ON",
                                 "-DTARGET_ARCH=ANDROID", 
                                 "-DANDROID_ABI=" + abi, 
                                 "-DANDROID_STL=" + stl,
                                 "-DCMAKE_BUILD_TYPE=" + buildType,
                                 "-DENABLE_UNITY_BUILD=ON",
                                 '-DTEST_CERT_PATH="/data/data/aws.' + TestLowerName + '/certs"',
                                 '-DBUILD_ONLY=dynamodb;sqs;s3;lambda;kinesis;cognito-identity;transfer;iam;identity-management;access-management;s3-encryption',
                                 ".."] )
    else:
        os.chdir( buildDir )

    if buildSharedObjects:
        subprocess.check_call( [ "make", "-j12" ] )
    else:
        subprocess.check_call( [ "make", "-j12", "android-unified-tests" ] )

    os.chdir( ".." )
    CopyNativeLibraries(buildSharedObjects, jniDir, buildDir, abi, stl)


def BuildJava(clean):
    os.chdir( TestName )
    if clean:
        subprocess.check_call( [ "./gradlew", "clean" ] )
        subprocess.check_call( [ "./gradlew", "--refresh-dependencies" ] )

    subprocess.check_call( [ "./gradlew", "assembleDebug" ] )   
    os.chdir( ".." )


def IsAnEmulatorRunning():
    emulatorPattern = re.compile("(?P<emu>emulator-\d+)")
    emulatorList = subprocess.check_output(["adb", "devices"])

    for _, line in enumerate(emulatorList.splitlines()):
        result = emulatorPattern.search(line)
        if result:
            return True

    return False


def KillRunningEmulators():
    emulatorPattern = re.compile("(?P<emu>emulator-\d+)")
    emulatorList = subprocess.check_output(["adb", "devices"])

    for _, line in enumerate(emulatorList.splitlines()):
        result = emulatorPattern.search(line)
        if result:
            emulatorName = result.group( "emu" )
            subprocess.check_call( [ "adb", "-s", emulatorName, "emu", "kill" ] )


def WaitForEmulatorToBoot():
    time.sleep(5)
    subprocess.check_call( [ "adb", "-e", "wait-for-device" ] )

    print( "Device online; booting..." )

    bootCompleted = False
    bootAnimPlaying = True
    while not bootCompleted or bootAnimPlaying:
        time.sleep(1)
        bootCompleted = subprocess.check_output( [ "adb", "-e", "shell", "getprop sys.boot_completed" ] ).strip() == "1"
        bootAnimPlaying = subprocess.check_output( [ "adb", "-e", "shell", "getprop init.svc.bootanim" ] ).strip() != "stopped"

    print( "Device booted" )


def InitializeEmulator(avd, useExistingEmu):
    if not useExistingEmu:
        KillRunningEmulators()  

    if not IsAnEmulatorRunning():
        # this may not work on windows due to the shell and &
        subprocess.Popen( "emulator -avd " + avd + " -gpu off &", shell=True ).communicate()

    WaitForEmulatorToBoot()


#TEMPORARY: once we have android CI, we will adjust the emulator's CA set as a one-time step and then remove this step
def BuildAndInstallCertSet(pemSourceDir, buildDir):
    # android's default cert set does not allow verification of Amazon's cert chain, so we build, install, and use our own set that works
    certDir = os.path.join( buildDir, "certs" )
    pemSourceFile = os.path.join( pemSourceDir, "cacert.pem" )
    
    # assume that if the directory exists, then the cert set is valid and we just need to upload
    if not os.path.exists( certDir ):
        os.makedirs( certDir )
    
        # extract all the certs in curl's master cacert.pem file out into individual .pem files
        subprocess.check_call( "cat " + pemSourceFile + " | awk '{print > \"" + certDir + "/cert\" (1+n) \".pem\"} /-----END CERTIFICATE-----/ {n++}'", shell = True )

        # use openssl to transform the certs into the hashname form that curl/openssl expects
        subprocess.check_call( "c_rehash certs", shell = True, cwd = buildDir )

        # The root (VeriSign 3) cert in Amazon's chain is missing from curl's master cacert.pem file and needs to be copied manually
        shutil.copy(os.path.join( pemSourceDir, "certs", "415660c1.0" ), certDir)
        shutil.copy(os.path.join( pemSourceDir, "certs", "7651b327.0" ), certDir)

    subprocess.check_call( [ "adb", "shell", "rm -rf /data/data/aws." + TestLowerName + "/certs" ] )
    subprocess.check_call( [ "adb", "shell", "mkdir /data/data/aws." + TestLowerName + "/certs" ] )

    # upload all the hashed certs to the emulator
    certPattern = re.compile(".*\.0$")

    for rootDir, dirNames, fileNames in os.walk( certDir ):
        for fileName in fileNames:
            if certPattern.search(fileName):
                certFileName = os.path.join(rootDir, fileName)
                subprocess.check_call( [ "adb", "push", certFileName, "/data/data/aws." + TestLowerName + "/certs" ] )

def UploadTestResources(resourcesDir):
    for rootDir, dirNames, fileNames in os.walk( resourcesDir ):
        for fileName in fileNames:
            resourceFileName = os.path.join( rootDir, fileName )
            subprocess.check_call( [ "adb", "push", resourceFileName, os.path.join( "/data/data/aws." + TestLowerName + "/resources", fileName ) ] )

def UploadAwsSigV4TestSuite(resourceDir):
    for rootDir, dirNames, fileNames in os.walk( resourceDir ):
        for fileName in fileNames:
            resourceFileName = os.path.join( rootDir, fileName )
            subDir = os.path.basename( rootDir )
            subprocess.check_call( [ "adb", "push", resourceFileName, os.path.join( "/data/data/aws." + TestLowerName + "/resources", subDir, fileName ) ] )


def InstallTests(credentialsFile):
    subprocess.check_call( [ "adb", "install", "-r", TestName + "/app/build/outputs/apk/app-debug.apk" ] )
    subprocess.check_call( [ "adb", "logcat", "-c" ] ) # this doesn't seem to work
    if credentialsFile and credentialsFile != "":
        print( "uploading credentials" )
        subprocess.check_call( [ "adb", "push", credentialsFile, "/data/data/aws." + TestLowerName + "/.aws/credentials" ] )


def TestsAreRunning(timeStart):
    shutdownCalledOutput = subprocess.check_output( "adb logcat -t " + timeStart + " *:V | grep \"Shutting down TestActivity\"; exit 0 ", shell = True )
    return not shutdownCalledOutput


def RunTest(testName):
    time.sleep(5)
    print( "Attempting to unlock..." )
    subprocess.check_call( [ "adb", "-e", "shell", "input keyevent 82" ] )
    
    logTime = datetime.datetime.now() + datetime.timedelta(minutes=-1) # the emulator and the computer do not appear to be in perfect sync
    logTimeString = logTime.strftime("\"%m-%d %H:%M:%S.000\"")

    time.sleep(5)
    print( "Attempting to run tests..." )
    subprocess.check_call( [ "adb", "shell", "am start -e test " + testName + " -n aws." + TestLowerName + "/aws." + TestLowerName + ".RunSDKTests" ] )

    time.sleep(10)

    while TestsAreRunning(logTimeString):
        print( "Tests still running..." )
        time.sleep(5)

    print( "Saving logs..." )
    subprocess.Popen( "adb logcat -t " + logTimeString + " *:V | grep -a NativeSDK > AndroidTestOutput.txt", shell=True )

    print( "Cleaning up..." )
    subprocess.check_call( [ "adb", "shell", "pm clear aws." + TestLowerName ] )


def DidAllTestsSucceed():
    failures = subprocess.check_output( "grep \"FAILED\" AndroidTestOutput.txt ; exit 0", shell = True )
    return failures == ""


def Main():
    args = ParseArguments()

    avd = args[ "avd" ]
    abi = args[ "abi" ]
    clean = args[ "clean" ]
    useExistingEmu = args[ "useExistingEmulator" ]
    skipBuild = args[ "noBuild" ]
    credentialsFile = args[ "credentialsFile" ]
    buildType = args[ "buildType" ]
    noInstall = args[ "noInstall" ]
    buildSharedObjects = args[ "so" ]
    runTest = args[ "runTest" ]
    stl = args[ "stl" ]

    buildDir = "_build" + buildType
    installDir = os.path.join( "external", abi );

    if runTest:
        avd, abi, clean = ValidateArguments(buildDir, avd, abi, clean, runTest, buildSharedObjects)

    jniDir = SetupJniDirectory(abi, clean)

    if not skipBuild:
        BuildNative(abi, clean, buildDir, jniDir, installDir, buildType, buildSharedObjects, stl)
        BuildJava(clean)

    if not runTest:
        return 0

    print("Starting emulator...")
    InitializeEmulator(avd, useExistingEmu)

    if not noInstall:
        print("Installing tests...")
        InstallTests(credentialsFile)

        print("Installing certs...")
        BuildAndInstallCertSet("android-build", buildDir)

        print("Uploading test resources")
        UploadTestResources("aws-cpp-sdk-lambda-integration-tests/resources")

        print("Uploading SigV4 test files")
        UploadAwsSigV4TestSuite(os.path.join("aws-cpp-sdk-core-tests", "resources", "aws4_testsuite", "aws4_testsuite"))

    print("Running tests...")
    RunTest( runTest )

    if not useExistingEmu:
        KillRunningEmulators()

    if DidAllTestsSucceed():
        print( "All tests passed!" )
        return 0
    else:
        print( "Some tests failed.  See AndroidTestOutput.txt" )
        return 1



Main()
