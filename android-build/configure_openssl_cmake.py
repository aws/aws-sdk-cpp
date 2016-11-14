#
# Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

import argparse
import os
import shutil
import platform

# openssl doesn't have any cmake files; this script copies in cmake files to appropriate directories
# The CMakeFiles.txt files are variants of what can be found at https://launchpad.net/openssl-cmake
# but have been modified to account for changes in later OpenSSL versions (the original files are frozen at version 1.0.1e)
def CopyCMakeFiles(baseDir, destDir):
    sourceDir = os.path.join(baseDir, "android-build", "cmakefiles", "openssl-cmake")
    dirLength = len(sourceDir)

    for rootDir, dirNames, fileNames in os.walk(sourceDir):
        for fileName in fileNames:
            if fileName == "CMakeLists.txt":
                sourceFile = os.path.join(rootDir, fileName)
                if rootDir == sourceDir:
                    finalDestDir = destDir
                else:
                    finalDestDir = os.path.join(destDir, rootDir[(dirLength + 1):])

                shutil.copy(sourceFile, finalDestDir)

    # another random thing needed by openssl
    specialHeaderSource = os.path.join(sourceDir, "crypto", "buildinf.h.cmake")
    specialHeaderDest = os.path.join(destDir, "crypto")

    shutil.copy(specialHeaderSource, specialHeaderDest)

    return True


def BuildIncludeFileList():
    includes = [
        "../../crypto/aes/aes.h",
        "../../crypto/asn1/asn1.h",
        "../../crypto/asn1/asn1_mac.h",
        "../../crypto/asn1/asn1t.h",
        "../../crypto/bio/bio.h",
        "../../crypto/bf/blowfish.h",
        "../../crypto/bn/bn.h",
        "../../crypto/buffer/buffer.h",
        "../../crypto/camellia/camellia.h",
        "../../crypto/cast/cast.h",
        "../../crypto/cmac/cmac.h",
        "../../crypto/cms/cms.h",
        "../../crypto/comp/comp.h",
        "../../crypto/conf/conf.h",
        "../../crypto/conf/conf_api.h",
        "../../crypto/crypto.h",
        "../../crypto/des/des.h",
        "../../crypto/des/des_old.h",
        "../../crypto/dh/dh.h",
        "../../crypto/dsa/dsa.h",
        "../../crypto/dso/dso.h",
        "../../ssl/dtls1.h",
        "../../e_os2.h",
        "../../crypto/ebcdic.h",
        "../../crypto/ec/ec.h",
        "../../crypto/ecdh/ecdh.h",
        "../../crypto/ecdsa/ecdsa.h",
        "../../crypto/engine/engine.h",
        "../../crypto/err/err.h",
        "../../crypto/evp/evp.h",
        "../../crypto/hmac/hmac.h",
        "../../crypto/idea/idea.h",
        "../../crypto/krb5/krb5_asn.h",
        "../../ssl/kssl.h",
        "../../crypto/lhash/lhash.h",
        "../../crypto/md4/md4.h",
        "../../crypto/md5/md5.h",
        "../../crypto/mdc2/mdc2.h",
        "../../crypto/modes/modes.h",
        "../../crypto/objects/obj_mac.h",
        "../../crypto/objects/objects.h",
        "../../crypto/ocsp/ocsp.h",
        "../../crypto/opensslv.h",
        "../../crypto/ossl_typ.h",
        "../../crypto/pem/pem.h",
        "../../crypto/pem/pem2.h",
        "../../crypto/pkcs12/pkcs12.h",
        "../../crypto/pkcs7/pkcs7.h",
        "../../crypto/pqueue/pqueue.h",
        "../../crypto/rand/rand.h",
        "../../crypto/rc2/rc2.h",
        "../../crypto/rc4/rc4.h",
        "../../crypto/ripemd/ripemd.h",
        "../../crypto/rsa/rsa.h",
        "../../crypto/stack/safestack.h",
        "../../crypto/seed/seed.h",
        "../../crypto/sha/sha.h",
        "../../crypto/srp/srp.h",
        "../../ssl/srtp.h",
        "../../ssl/ssl.h",
        "../../ssl/ssl2.h",
        "../../ssl/ssl23.h",
        "../../ssl/ssl3.h",
        "../../crypto/stack/stack.h",
        "../../crypto/symhacks.h",
        "../../ssl/tls1.h",
        "../../crypto/ts/ts.h",
        "../../crypto/txt_db/txt_db.h",
        "../../crypto/ui/ui.h",
        "../../crypto/ui/ui_compat.h",
        "../../crypto/whrlpool/whrlpool.h",
        "../../crypto/x509/x509.h",
        "../../crypto/x509/x509_vfy.h",
        "../../crypto/x509v3/x509v3.h"
    ]
    return includes


def CopyIncludeDirectory(baseDir):
    path = os.path.join( baseDir, "include", "openssl" )
    if os.path.exists( path ) == False:
        os.makedirs( path )

    os.chdir( path )
    for includeFile in BuildIncludeFileList():
        shutil.copy( includeFile, "." )


def Main():
    parser = argparse.ArgumentParser(description="AWSNativeSDK Android Openssl Update")
    parser.add_argument("--source", action="store")
    parser.add_argument("--dest", action="store")

    args = vars( parser.parse_args() )

    sourceDir = args[ "source" ]
    destDir = args[ "dest" ]

    print ("Copying CMakeLists.txt files")
    if not CopyCMakeFiles(sourceDir, destDir):
        print( "Failed to copy required CMake files" )
        return 1

    print("Making unified include directory")
    # normally these would be symlinks created by configure, but since we're not running configure, copy them manually
    CopyIncludeDirectory(destDir)

    return 0


Main()
