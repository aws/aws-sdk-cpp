/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/TestType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents test settings. This data structure is passed in as the "test"
   * parameter to ScheduleRun. For an example of the JSON request syntax, see
   * <a>ScheduleRun</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ScheduleRunTest">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API ScheduleRunTest
  {
  public:
    ScheduleRunTest();
    ScheduleRunTest(Aws::Utils::Json::JsonView jsonValue);
    ScheduleRunTest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li> <li> <p>BUILTIN_EXPLORER: For
     * Android, an app explorer that will traverse an Android app, interacting with it
     * and capturing screenshots at the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT:
     * The Appium Java JUnit type.</p> </li> <li> <p>APPIUM_JAVA_TESTNG: The Appium
     * Java TestNG type.</p> </li> <li> <p>APPIUM_PYTHON: The Appium Python type.</p>
     * </li> <li> <p>APPIUM_NODE: The Appium Node.js type.</p> </li> <li>
     * <p>APPIUM_RUBY: The Appium Ruby type.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT:
     * The Appium Java JUnit type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for web apps.</p> </li>
     * <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_NODE: The Appium Node.js type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_RUBY: The Appium Ruby type for web apps.</p> </li> <li>
     * <p>CALABASH: The Calabash type.</p> </li> <li> <p>INSTRUMENTATION: The
     * Instrumentation type.</p> </li> <li> <p>UIAUTOMATION: The uiautomation type.</p>
     * </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p> </li> <li> <p>XCTEST: The
     * Xcode test type.</p> </li> <li> <p>XCTEST_UI: The Xcode UI test type.</p> </li>
     * </ul>
     */
    inline const TestType& GetType() const{ return m_type; }

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li> <li> <p>BUILTIN_EXPLORER: For
     * Android, an app explorer that will traverse an Android app, interacting with it
     * and capturing screenshots at the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT:
     * The Appium Java JUnit type.</p> </li> <li> <p>APPIUM_JAVA_TESTNG: The Appium
     * Java TestNG type.</p> </li> <li> <p>APPIUM_PYTHON: The Appium Python type.</p>
     * </li> <li> <p>APPIUM_NODE: The Appium Node.js type.</p> </li> <li>
     * <p>APPIUM_RUBY: The Appium Ruby type.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT:
     * The Appium Java JUnit type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for web apps.</p> </li>
     * <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_NODE: The Appium Node.js type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_RUBY: The Appium Ruby type for web apps.</p> </li> <li>
     * <p>CALABASH: The Calabash type.</p> </li> <li> <p>INSTRUMENTATION: The
     * Instrumentation type.</p> </li> <li> <p>UIAUTOMATION: The uiautomation type.</p>
     * </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p> </li> <li> <p>XCTEST: The
     * Xcode test type.</p> </li> <li> <p>XCTEST_UI: The Xcode UI test type.</p> </li>
     * </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li> <li> <p>BUILTIN_EXPLORER: For
     * Android, an app explorer that will traverse an Android app, interacting with it
     * and capturing screenshots at the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT:
     * The Appium Java JUnit type.</p> </li> <li> <p>APPIUM_JAVA_TESTNG: The Appium
     * Java TestNG type.</p> </li> <li> <p>APPIUM_PYTHON: The Appium Python type.</p>
     * </li> <li> <p>APPIUM_NODE: The Appium Node.js type.</p> </li> <li>
     * <p>APPIUM_RUBY: The Appium Ruby type.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT:
     * The Appium Java JUnit type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for web apps.</p> </li>
     * <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_NODE: The Appium Node.js type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_RUBY: The Appium Ruby type for web apps.</p> </li> <li>
     * <p>CALABASH: The Calabash type.</p> </li> <li> <p>INSTRUMENTATION: The
     * Instrumentation type.</p> </li> <li> <p>UIAUTOMATION: The uiautomation type.</p>
     * </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p> </li> <li> <p>XCTEST: The
     * Xcode test type.</p> </li> <li> <p>XCTEST_UI: The Xcode UI test type.</p> </li>
     * </ul>
     */
    inline void SetType(const TestType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li> <li> <p>BUILTIN_EXPLORER: For
     * Android, an app explorer that will traverse an Android app, interacting with it
     * and capturing screenshots at the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT:
     * The Appium Java JUnit type.</p> </li> <li> <p>APPIUM_JAVA_TESTNG: The Appium
     * Java TestNG type.</p> </li> <li> <p>APPIUM_PYTHON: The Appium Python type.</p>
     * </li> <li> <p>APPIUM_NODE: The Appium Node.js type.</p> </li> <li>
     * <p>APPIUM_RUBY: The Appium Ruby type.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT:
     * The Appium Java JUnit type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for web apps.</p> </li>
     * <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_NODE: The Appium Node.js type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_RUBY: The Appium Ruby type for web apps.</p> </li> <li>
     * <p>CALABASH: The Calabash type.</p> </li> <li> <p>INSTRUMENTATION: The
     * Instrumentation type.</p> </li> <li> <p>UIAUTOMATION: The uiautomation type.</p>
     * </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p> </li> <li> <p>XCTEST: The
     * Xcode test type.</p> </li> <li> <p>XCTEST_UI: The Xcode UI test type.</p> </li>
     * </ul>
     */
    inline void SetType(TestType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li> <li> <p>BUILTIN_EXPLORER: For
     * Android, an app explorer that will traverse an Android app, interacting with it
     * and capturing screenshots at the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT:
     * The Appium Java JUnit type.</p> </li> <li> <p>APPIUM_JAVA_TESTNG: The Appium
     * Java TestNG type.</p> </li> <li> <p>APPIUM_PYTHON: The Appium Python type.</p>
     * </li> <li> <p>APPIUM_NODE: The Appium Node.js type.</p> </li> <li>
     * <p>APPIUM_RUBY: The Appium Ruby type.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT:
     * The Appium Java JUnit type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for web apps.</p> </li>
     * <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_NODE: The Appium Node.js type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_RUBY: The Appium Ruby type for web apps.</p> </li> <li>
     * <p>CALABASH: The Calabash type.</p> </li> <li> <p>INSTRUMENTATION: The
     * Instrumentation type.</p> </li> <li> <p>UIAUTOMATION: The uiautomation type.</p>
     * </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p> </li> <li> <p>XCTEST: The
     * Xcode test type.</p> </li> <li> <p>XCTEST_UI: The Xcode UI test type.</p> </li>
     * </ul>
     */
    inline ScheduleRunTest& WithType(const TestType& value) { SetType(value); return *this;}

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li> <li> <p>BUILTIN_EXPLORER: For
     * Android, an app explorer that will traverse an Android app, interacting with it
     * and capturing screenshots at the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT:
     * The Appium Java JUnit type.</p> </li> <li> <p>APPIUM_JAVA_TESTNG: The Appium
     * Java TestNG type.</p> </li> <li> <p>APPIUM_PYTHON: The Appium Python type.</p>
     * </li> <li> <p>APPIUM_NODE: The Appium Node.js type.</p> </li> <li>
     * <p>APPIUM_RUBY: The Appium Ruby type.</p> </li> <li> <p>APPIUM_WEB_JAVA_JUNIT:
     * The Appium Java JUnit type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for web apps.</p> </li>
     * <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_NODE: The Appium Node.js type for web apps.</p> </li> <li>
     * <p>APPIUM_WEB_RUBY: The Appium Ruby type for web apps.</p> </li> <li>
     * <p>CALABASH: The Calabash type.</p> </li> <li> <p>INSTRUMENTATION: The
     * Instrumentation type.</p> </li> <li> <p>UIAUTOMATION: The uiautomation type.</p>
     * </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p> </li> <li> <p>XCTEST: The
     * Xcode test type.</p> </li> <li> <p>XCTEST_UI: The Xcode UI test type.</p> </li>
     * </ul>
     */
    inline ScheduleRunTest& WithType(TestType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the uploaded test that will be run.</p>
     */
    inline const Aws::String& GetTestPackageArn() const{ return m_testPackageArn; }

    /**
     * <p>The ARN of the uploaded test that will be run.</p>
     */
    inline bool TestPackageArnHasBeenSet() const { return m_testPackageArnHasBeenSet; }

    /**
     * <p>The ARN of the uploaded test that will be run.</p>
     */
    inline void SetTestPackageArn(const Aws::String& value) { m_testPackageArnHasBeenSet = true; m_testPackageArn = value; }

    /**
     * <p>The ARN of the uploaded test that will be run.</p>
     */
    inline void SetTestPackageArn(Aws::String&& value) { m_testPackageArnHasBeenSet = true; m_testPackageArn = std::move(value); }

    /**
     * <p>The ARN of the uploaded test that will be run.</p>
     */
    inline void SetTestPackageArn(const char* value) { m_testPackageArnHasBeenSet = true; m_testPackageArn.assign(value); }

    /**
     * <p>The ARN of the uploaded test that will be run.</p>
     */
    inline ScheduleRunTest& WithTestPackageArn(const Aws::String& value) { SetTestPackageArn(value); return *this;}

    /**
     * <p>The ARN of the uploaded test that will be run.</p>
     */
    inline ScheduleRunTest& WithTestPackageArn(Aws::String&& value) { SetTestPackageArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the uploaded test that will be run.</p>
     */
    inline ScheduleRunTest& WithTestPackageArn(const char* value) { SetTestPackageArn(value); return *this;}


    /**
     * <p>The ARN of the YAML-formatted test specification.</p>
     */
    inline const Aws::String& GetTestSpecArn() const{ return m_testSpecArn; }

    /**
     * <p>The ARN of the YAML-formatted test specification.</p>
     */
    inline bool TestSpecArnHasBeenSet() const { return m_testSpecArnHasBeenSet; }

    /**
     * <p>The ARN of the YAML-formatted test specification.</p>
     */
    inline void SetTestSpecArn(const Aws::String& value) { m_testSpecArnHasBeenSet = true; m_testSpecArn = value; }

    /**
     * <p>The ARN of the YAML-formatted test specification.</p>
     */
    inline void SetTestSpecArn(Aws::String&& value) { m_testSpecArnHasBeenSet = true; m_testSpecArn = std::move(value); }

    /**
     * <p>The ARN of the YAML-formatted test specification.</p>
     */
    inline void SetTestSpecArn(const char* value) { m_testSpecArnHasBeenSet = true; m_testSpecArn.assign(value); }

    /**
     * <p>The ARN of the YAML-formatted test specification.</p>
     */
    inline ScheduleRunTest& WithTestSpecArn(const Aws::String& value) { SetTestSpecArn(value); return *this;}

    /**
     * <p>The ARN of the YAML-formatted test specification.</p>
     */
    inline ScheduleRunTest& WithTestSpecArn(Aws::String&& value) { SetTestSpecArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the YAML-formatted test specification.</p>
     */
    inline ScheduleRunTest& WithTestSpecArn(const char* value) { SetTestSpecArn(value); return *this;}


    /**
     * <p>The test's filter.</p>
     */
    inline const Aws::String& GetFilter() const{ return m_filter; }

    /**
     * <p>The test's filter.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The test's filter.</p>
     */
    inline void SetFilter(const Aws::String& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The test's filter.</p>
     */
    inline void SetFilter(Aws::String&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The test's filter.</p>
     */
    inline void SetFilter(const char* value) { m_filterHasBeenSet = true; m_filter.assign(value); }

    /**
     * <p>The test's filter.</p>
     */
    inline ScheduleRunTest& WithFilter(const Aws::String& value) { SetFilter(value); return *this;}

    /**
     * <p>The test's filter.</p>
     */
    inline ScheduleRunTest& WithFilter(Aws::String&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>The test's filter.</p>
     */
    inline ScheduleRunTest& WithFilter(const char* value) { SetFilter(value); return *this;}


    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p>app_performance_monitoring: Performance monitoring
     * is enabled by default. Set this parameter to "false" to disable it.</p> </li>
     * </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A cucumber profile, for
     * example, "my_profile_name".</p> </li> <li> <p>tags: You can limit execution to
     * features or scenarios that have (or don't have) certain tags, for example,
     * "@smoke" or "@smoke,~@wip".</p> </li> </ul> <p>For Appium tests (all types):</p>
     * <ul> <li> <p>appium_version: The Appium version. Currently supported values are
     * "1.6.5" (and higher), "latest", and "default".</p> <ul> <li> <p>“latest” will
     * run the latest Appium version supported by Device Farm (1.9.1).</p> </li> <li>
     * <p>For “default”, Device Farm will choose a compatible version of Appium for the
     * device. The current behavior is to run 1.7.2 on Android devices and iOS 9 and
     * earlier, 1.7.2 for iOS 10 and later.</p> </li> <li> <p>This behavior is subject
     * to change.</p> </li> </ul> </li> </ul> <p>For Fuzz tests (Android only):</p>
     * <ul> <li> <p>event_count: The number of events, between 1 and 10000, that the UI
     * fuzz test should perform.</p> </li> <li> <p>throttle: The time, in ms, between 0
     * and 1000, that the UI fuzz test should wait between events.</p> </li> <li>
     * <p>seed: A seed to use for randomizing the UI fuzz test. Using the same seed
     * value between tests ensures identical event sequences.</p> </li> </ul> <p>For
     * Explorer tests:</p> <ul> <li> <p>username: A username to use if the Explorer
     * encounters a login form. If not supplied, no username will be inserted.</p>
     * </li> <li> <p>password: A password to use if the Explorer encounters a login
     * form. If not supplied, no password will be inserted.</p> </li> </ul> <p>For
     * Instrumentation:</p> <ul> <li> <p>filter: A test filter string. Examples:</p>
     * <ul> <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A
     * test filter string. Examples:</p> <ul> <li> <p>Running a single test class:
     * "LoginTests"</p> </li> <li> <p>Running a multiple test classes:
     * "LoginTests,SmokeTests"</p> </li> <li> <p>Running a single test:
     * "LoginTests/testValid"</p> </li> <li> <p>Running multiple tests:
     * "LoginTests/testValid,LoginTests/testInvalid"</p> </li> </ul> </li> </ul> <p>For
     * UIAutomator:</p> <ul> <li> <p>filter: A test filter string. Examples:</p> <ul>
     * <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p>app_performance_monitoring: Performance monitoring
     * is enabled by default. Set this parameter to "false" to disable it.</p> </li>
     * </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A cucumber profile, for
     * example, "my_profile_name".</p> </li> <li> <p>tags: You can limit execution to
     * features or scenarios that have (or don't have) certain tags, for example,
     * "@smoke" or "@smoke,~@wip".</p> </li> </ul> <p>For Appium tests (all types):</p>
     * <ul> <li> <p>appium_version: The Appium version. Currently supported values are
     * "1.6.5" (and higher), "latest", and "default".</p> <ul> <li> <p>“latest” will
     * run the latest Appium version supported by Device Farm (1.9.1).</p> </li> <li>
     * <p>For “default”, Device Farm will choose a compatible version of Appium for the
     * device. The current behavior is to run 1.7.2 on Android devices and iOS 9 and
     * earlier, 1.7.2 for iOS 10 and later.</p> </li> <li> <p>This behavior is subject
     * to change.</p> </li> </ul> </li> </ul> <p>For Fuzz tests (Android only):</p>
     * <ul> <li> <p>event_count: The number of events, between 1 and 10000, that the UI
     * fuzz test should perform.</p> </li> <li> <p>throttle: The time, in ms, between 0
     * and 1000, that the UI fuzz test should wait between events.</p> </li> <li>
     * <p>seed: A seed to use for randomizing the UI fuzz test. Using the same seed
     * value between tests ensures identical event sequences.</p> </li> </ul> <p>For
     * Explorer tests:</p> <ul> <li> <p>username: A username to use if the Explorer
     * encounters a login form. If not supplied, no username will be inserted.</p>
     * </li> <li> <p>password: A password to use if the Explorer encounters a login
     * form. If not supplied, no password will be inserted.</p> </li> </ul> <p>For
     * Instrumentation:</p> <ul> <li> <p>filter: A test filter string. Examples:</p>
     * <ul> <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A
     * test filter string. Examples:</p> <ul> <li> <p>Running a single test class:
     * "LoginTests"</p> </li> <li> <p>Running a multiple test classes:
     * "LoginTests,SmokeTests"</p> </li> <li> <p>Running a single test:
     * "LoginTests/testValid"</p> </li> <li> <p>Running multiple tests:
     * "LoginTests/testValid,LoginTests/testInvalid"</p> </li> </ul> </li> </ul> <p>For
     * UIAutomator:</p> <ul> <li> <p>filter: A test filter string. Examples:</p> <ul>
     * <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p>app_performance_monitoring: Performance monitoring
     * is enabled by default. Set this parameter to "false" to disable it.</p> </li>
     * </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A cucumber profile, for
     * example, "my_profile_name".</p> </li> <li> <p>tags: You can limit execution to
     * features or scenarios that have (or don't have) certain tags, for example,
     * "@smoke" or "@smoke,~@wip".</p> </li> </ul> <p>For Appium tests (all types):</p>
     * <ul> <li> <p>appium_version: The Appium version. Currently supported values are
     * "1.6.5" (and higher), "latest", and "default".</p> <ul> <li> <p>“latest” will
     * run the latest Appium version supported by Device Farm (1.9.1).</p> </li> <li>
     * <p>For “default”, Device Farm will choose a compatible version of Appium for the
     * device. The current behavior is to run 1.7.2 on Android devices and iOS 9 and
     * earlier, 1.7.2 for iOS 10 and later.</p> </li> <li> <p>This behavior is subject
     * to change.</p> </li> </ul> </li> </ul> <p>For Fuzz tests (Android only):</p>
     * <ul> <li> <p>event_count: The number of events, between 1 and 10000, that the UI
     * fuzz test should perform.</p> </li> <li> <p>throttle: The time, in ms, between 0
     * and 1000, that the UI fuzz test should wait between events.</p> </li> <li>
     * <p>seed: A seed to use for randomizing the UI fuzz test. Using the same seed
     * value between tests ensures identical event sequences.</p> </li> </ul> <p>For
     * Explorer tests:</p> <ul> <li> <p>username: A username to use if the Explorer
     * encounters a login form. If not supplied, no username will be inserted.</p>
     * </li> <li> <p>password: A password to use if the Explorer encounters a login
     * form. If not supplied, no password will be inserted.</p> </li> </ul> <p>For
     * Instrumentation:</p> <ul> <li> <p>filter: A test filter string. Examples:</p>
     * <ul> <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A
     * test filter string. Examples:</p> <ul> <li> <p>Running a single test class:
     * "LoginTests"</p> </li> <li> <p>Running a multiple test classes:
     * "LoginTests,SmokeTests"</p> </li> <li> <p>Running a single test:
     * "LoginTests/testValid"</p> </li> <li> <p>Running multiple tests:
     * "LoginTests/testValid,LoginTests/testInvalid"</p> </li> </ul> </li> </ul> <p>For
     * UIAutomator:</p> <ul> <li> <p>filter: A test filter string. Examples:</p> <ul>
     * <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p>app_performance_monitoring: Performance monitoring
     * is enabled by default. Set this parameter to "false" to disable it.</p> </li>
     * </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A cucumber profile, for
     * example, "my_profile_name".</p> </li> <li> <p>tags: You can limit execution to
     * features or scenarios that have (or don't have) certain tags, for example,
     * "@smoke" or "@smoke,~@wip".</p> </li> </ul> <p>For Appium tests (all types):</p>
     * <ul> <li> <p>appium_version: The Appium version. Currently supported values are
     * "1.6.5" (and higher), "latest", and "default".</p> <ul> <li> <p>“latest” will
     * run the latest Appium version supported by Device Farm (1.9.1).</p> </li> <li>
     * <p>For “default”, Device Farm will choose a compatible version of Appium for the
     * device. The current behavior is to run 1.7.2 on Android devices and iOS 9 and
     * earlier, 1.7.2 for iOS 10 and later.</p> </li> <li> <p>This behavior is subject
     * to change.</p> </li> </ul> </li> </ul> <p>For Fuzz tests (Android only):</p>
     * <ul> <li> <p>event_count: The number of events, between 1 and 10000, that the UI
     * fuzz test should perform.</p> </li> <li> <p>throttle: The time, in ms, between 0
     * and 1000, that the UI fuzz test should wait between events.</p> </li> <li>
     * <p>seed: A seed to use for randomizing the UI fuzz test. Using the same seed
     * value between tests ensures identical event sequences.</p> </li> </ul> <p>For
     * Explorer tests:</p> <ul> <li> <p>username: A username to use if the Explorer
     * encounters a login form. If not supplied, no username will be inserted.</p>
     * </li> <li> <p>password: A password to use if the Explorer encounters a login
     * form. If not supplied, no password will be inserted.</p> </li> </ul> <p>For
     * Instrumentation:</p> <ul> <li> <p>filter: A test filter string. Examples:</p>
     * <ul> <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A
     * test filter string. Examples:</p> <ul> <li> <p>Running a single test class:
     * "LoginTests"</p> </li> <li> <p>Running a multiple test classes:
     * "LoginTests,SmokeTests"</p> </li> <li> <p>Running a single test:
     * "LoginTests/testValid"</p> </li> <li> <p>Running multiple tests:
     * "LoginTests/testValid,LoginTests/testInvalid"</p> </li> </ul> </li> </ul> <p>For
     * UIAutomator:</p> <ul> <li> <p>filter: A test filter string. Examples:</p> <ul>
     * <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p>app_performance_monitoring: Performance monitoring
     * is enabled by default. Set this parameter to "false" to disable it.</p> </li>
     * </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A cucumber profile, for
     * example, "my_profile_name".</p> </li> <li> <p>tags: You can limit execution to
     * features or scenarios that have (or don't have) certain tags, for example,
     * "@smoke" or "@smoke,~@wip".</p> </li> </ul> <p>For Appium tests (all types):</p>
     * <ul> <li> <p>appium_version: The Appium version. Currently supported values are
     * "1.6.5" (and higher), "latest", and "default".</p> <ul> <li> <p>“latest” will
     * run the latest Appium version supported by Device Farm (1.9.1).</p> </li> <li>
     * <p>For “default”, Device Farm will choose a compatible version of Appium for the
     * device. The current behavior is to run 1.7.2 on Android devices and iOS 9 and
     * earlier, 1.7.2 for iOS 10 and later.</p> </li> <li> <p>This behavior is subject
     * to change.</p> </li> </ul> </li> </ul> <p>For Fuzz tests (Android only):</p>
     * <ul> <li> <p>event_count: The number of events, between 1 and 10000, that the UI
     * fuzz test should perform.</p> </li> <li> <p>throttle: The time, in ms, between 0
     * and 1000, that the UI fuzz test should wait between events.</p> </li> <li>
     * <p>seed: A seed to use for randomizing the UI fuzz test. Using the same seed
     * value between tests ensures identical event sequences.</p> </li> </ul> <p>For
     * Explorer tests:</p> <ul> <li> <p>username: A username to use if the Explorer
     * encounters a login form. If not supplied, no username will be inserted.</p>
     * </li> <li> <p>password: A password to use if the Explorer encounters a login
     * form. If not supplied, no password will be inserted.</p> </li> </ul> <p>For
     * Instrumentation:</p> <ul> <li> <p>filter: A test filter string. Examples:</p>
     * <ul> <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A
     * test filter string. Examples:</p> <ul> <li> <p>Running a single test class:
     * "LoginTests"</p> </li> <li> <p>Running a multiple test classes:
     * "LoginTests,SmokeTests"</p> </li> <li> <p>Running a single test:
     * "LoginTests/testValid"</p> </li> <li> <p>Running multiple tests:
     * "LoginTests/testValid,LoginTests/testInvalid"</p> </li> </ul> </li> </ul> <p>For
     * UIAutomator:</p> <ul> <li> <p>filter: A test filter string. Examples:</p> <ul>
     * <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul>
     */
    inline ScheduleRunTest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p>app_performance_monitoring: Performance monitoring
     * is enabled by default. Set this parameter to "false" to disable it.</p> </li>
     * </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A cucumber profile, for
     * example, "my_profile_name".</p> </li> <li> <p>tags: You can limit execution to
     * features or scenarios that have (or don't have) certain tags, for example,
     * "@smoke" or "@smoke,~@wip".</p> </li> </ul> <p>For Appium tests (all types):</p>
     * <ul> <li> <p>appium_version: The Appium version. Currently supported values are
     * "1.6.5" (and higher), "latest", and "default".</p> <ul> <li> <p>“latest” will
     * run the latest Appium version supported by Device Farm (1.9.1).</p> </li> <li>
     * <p>For “default”, Device Farm will choose a compatible version of Appium for the
     * device. The current behavior is to run 1.7.2 on Android devices and iOS 9 and
     * earlier, 1.7.2 for iOS 10 and later.</p> </li> <li> <p>This behavior is subject
     * to change.</p> </li> </ul> </li> </ul> <p>For Fuzz tests (Android only):</p>
     * <ul> <li> <p>event_count: The number of events, between 1 and 10000, that the UI
     * fuzz test should perform.</p> </li> <li> <p>throttle: The time, in ms, between 0
     * and 1000, that the UI fuzz test should wait between events.</p> </li> <li>
     * <p>seed: A seed to use for randomizing the UI fuzz test. Using the same seed
     * value between tests ensures identical event sequences.</p> </li> </ul> <p>For
     * Explorer tests:</p> <ul> <li> <p>username: A username to use if the Explorer
     * encounters a login form. If not supplied, no username will be inserted.</p>
     * </li> <li> <p>password: A password to use if the Explorer encounters a login
     * form. If not supplied, no password will be inserted.</p> </li> </ul> <p>For
     * Instrumentation:</p> <ul> <li> <p>filter: A test filter string. Examples:</p>
     * <ul> <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A
     * test filter string. Examples:</p> <ul> <li> <p>Running a single test class:
     * "LoginTests"</p> </li> <li> <p>Running a multiple test classes:
     * "LoginTests,SmokeTests"</p> </li> <li> <p>Running a single test:
     * "LoginTests/testValid"</p> </li> <li> <p>Running multiple tests:
     * "LoginTests/testValid,LoginTests/testInvalid"</p> </li> </ul> </li> </ul> <p>For
     * UIAutomator:</p> <ul> <li> <p>filter: A test filter string. Examples:</p> <ul>
     * <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul>
     */
    inline ScheduleRunTest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p>app_performance_monitoring: Performance monitoring
     * is enabled by default. Set this parameter to "false" to disable it.</p> </li>
     * </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A cucumber profile, for
     * example, "my_profile_name".</p> </li> <li> <p>tags: You can limit execution to
     * features or scenarios that have (or don't have) certain tags, for example,
     * "@smoke" or "@smoke,~@wip".</p> </li> </ul> <p>For Appium tests (all types):</p>
     * <ul> <li> <p>appium_version: The Appium version. Currently supported values are
     * "1.6.5" (and higher), "latest", and "default".</p> <ul> <li> <p>“latest” will
     * run the latest Appium version supported by Device Farm (1.9.1).</p> </li> <li>
     * <p>For “default”, Device Farm will choose a compatible version of Appium for the
     * device. The current behavior is to run 1.7.2 on Android devices and iOS 9 and
     * earlier, 1.7.2 for iOS 10 and later.</p> </li> <li> <p>This behavior is subject
     * to change.</p> </li> </ul> </li> </ul> <p>For Fuzz tests (Android only):</p>
     * <ul> <li> <p>event_count: The number of events, between 1 and 10000, that the UI
     * fuzz test should perform.</p> </li> <li> <p>throttle: The time, in ms, between 0
     * and 1000, that the UI fuzz test should wait between events.</p> </li> <li>
     * <p>seed: A seed to use for randomizing the UI fuzz test. Using the same seed
     * value between tests ensures identical event sequences.</p> </li> </ul> <p>For
     * Explorer tests:</p> <ul> <li> <p>username: A username to use if the Explorer
     * encounters a login form. If not supplied, no username will be inserted.</p>
     * </li> <li> <p>password: A password to use if the Explorer encounters a login
     * form. If not supplied, no password will be inserted.</p> </li> </ul> <p>For
     * Instrumentation:</p> <ul> <li> <p>filter: A test filter string. Examples:</p>
     * <ul> <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A
     * test filter string. Examples:</p> <ul> <li> <p>Running a single test class:
     * "LoginTests"</p> </li> <li> <p>Running a multiple test classes:
     * "LoginTests,SmokeTests"</p> </li> <li> <p>Running a single test:
     * "LoginTests/testValid"</p> </li> <li> <p>Running multiple tests:
     * "LoginTests/testValid,LoginTests/testInvalid"</p> </li> </ul> </li> </ul> <p>For
     * UIAutomator:</p> <ul> <li> <p>filter: A test filter string. Examples:</p> <ul>
     * <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p>app_performance_monitoring: Performance monitoring
     * is enabled by default. Set this parameter to "false" to disable it.</p> </li>
     * </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A cucumber profile, for
     * example, "my_profile_name".</p> </li> <li> <p>tags: You can limit execution to
     * features or scenarios that have (or don't have) certain tags, for example,
     * "@smoke" or "@smoke,~@wip".</p> </li> </ul> <p>For Appium tests (all types):</p>
     * <ul> <li> <p>appium_version: The Appium version. Currently supported values are
     * "1.6.5" (and higher), "latest", and "default".</p> <ul> <li> <p>“latest” will
     * run the latest Appium version supported by Device Farm (1.9.1).</p> </li> <li>
     * <p>For “default”, Device Farm will choose a compatible version of Appium for the
     * device. The current behavior is to run 1.7.2 on Android devices and iOS 9 and
     * earlier, 1.7.2 for iOS 10 and later.</p> </li> <li> <p>This behavior is subject
     * to change.</p> </li> </ul> </li> </ul> <p>For Fuzz tests (Android only):</p>
     * <ul> <li> <p>event_count: The number of events, between 1 and 10000, that the UI
     * fuzz test should perform.</p> </li> <li> <p>throttle: The time, in ms, between 0
     * and 1000, that the UI fuzz test should wait between events.</p> </li> <li>
     * <p>seed: A seed to use for randomizing the UI fuzz test. Using the same seed
     * value between tests ensures identical event sequences.</p> </li> </ul> <p>For
     * Explorer tests:</p> <ul> <li> <p>username: A username to use if the Explorer
     * encounters a login form. If not supplied, no username will be inserted.</p>
     * </li> <li> <p>password: A password to use if the Explorer encounters a login
     * form. If not supplied, no password will be inserted.</p> </li> </ul> <p>For
     * Instrumentation:</p> <ul> <li> <p>filter: A test filter string. Examples:</p>
     * <ul> <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A
     * test filter string. Examples:</p> <ul> <li> <p>Running a single test class:
     * "LoginTests"</p> </li> <li> <p>Running a multiple test classes:
     * "LoginTests,SmokeTests"</p> </li> <li> <p>Running a single test:
     * "LoginTests/testValid"</p> </li> <li> <p>Running multiple tests:
     * "LoginTests/testValid,LoginTests/testInvalid"</p> </li> </ul> </li> </ul> <p>For
     * UIAutomator:</p> <ul> <li> <p>filter: A test filter string. Examples:</p> <ul>
     * <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p>app_performance_monitoring: Performance monitoring
     * is enabled by default. Set this parameter to "false" to disable it.</p> </li>
     * </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A cucumber profile, for
     * example, "my_profile_name".</p> </li> <li> <p>tags: You can limit execution to
     * features or scenarios that have (or don't have) certain tags, for example,
     * "@smoke" or "@smoke,~@wip".</p> </li> </ul> <p>For Appium tests (all types):</p>
     * <ul> <li> <p>appium_version: The Appium version. Currently supported values are
     * "1.6.5" (and higher), "latest", and "default".</p> <ul> <li> <p>“latest” will
     * run the latest Appium version supported by Device Farm (1.9.1).</p> </li> <li>
     * <p>For “default”, Device Farm will choose a compatible version of Appium for the
     * device. The current behavior is to run 1.7.2 on Android devices and iOS 9 and
     * earlier, 1.7.2 for iOS 10 and later.</p> </li> <li> <p>This behavior is subject
     * to change.</p> </li> </ul> </li> </ul> <p>For Fuzz tests (Android only):</p>
     * <ul> <li> <p>event_count: The number of events, between 1 and 10000, that the UI
     * fuzz test should perform.</p> </li> <li> <p>throttle: The time, in ms, between 0
     * and 1000, that the UI fuzz test should wait between events.</p> </li> <li>
     * <p>seed: A seed to use for randomizing the UI fuzz test. Using the same seed
     * value between tests ensures identical event sequences.</p> </li> </ul> <p>For
     * Explorer tests:</p> <ul> <li> <p>username: A username to use if the Explorer
     * encounters a login form. If not supplied, no username will be inserted.</p>
     * </li> <li> <p>password: A password to use if the Explorer encounters a login
     * form. If not supplied, no password will be inserted.</p> </li> </ul> <p>For
     * Instrumentation:</p> <ul> <li> <p>filter: A test filter string. Examples:</p>
     * <ul> <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A
     * test filter string. Examples:</p> <ul> <li> <p>Running a single test class:
     * "LoginTests"</p> </li> <li> <p>Running a multiple test classes:
     * "LoginTests,SmokeTests"</p> </li> <li> <p>Running a single test:
     * "LoginTests/testValid"</p> </li> <li> <p>Running multiple tests:
     * "LoginTests/testValid,LoginTests/testInvalid"</p> </li> </ul> </li> </ul> <p>For
     * UIAutomator:</p> <ul> <li> <p>filter: A test filter string. Examples:</p> <ul>
     * <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p>app_performance_monitoring: Performance monitoring
     * is enabled by default. Set this parameter to "false" to disable it.</p> </li>
     * </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A cucumber profile, for
     * example, "my_profile_name".</p> </li> <li> <p>tags: You can limit execution to
     * features or scenarios that have (or don't have) certain tags, for example,
     * "@smoke" or "@smoke,~@wip".</p> </li> </ul> <p>For Appium tests (all types):</p>
     * <ul> <li> <p>appium_version: The Appium version. Currently supported values are
     * "1.6.5" (and higher), "latest", and "default".</p> <ul> <li> <p>“latest” will
     * run the latest Appium version supported by Device Farm (1.9.1).</p> </li> <li>
     * <p>For “default”, Device Farm will choose a compatible version of Appium for the
     * device. The current behavior is to run 1.7.2 on Android devices and iOS 9 and
     * earlier, 1.7.2 for iOS 10 and later.</p> </li> <li> <p>This behavior is subject
     * to change.</p> </li> </ul> </li> </ul> <p>For Fuzz tests (Android only):</p>
     * <ul> <li> <p>event_count: The number of events, between 1 and 10000, that the UI
     * fuzz test should perform.</p> </li> <li> <p>throttle: The time, in ms, between 0
     * and 1000, that the UI fuzz test should wait between events.</p> </li> <li>
     * <p>seed: A seed to use for randomizing the UI fuzz test. Using the same seed
     * value between tests ensures identical event sequences.</p> </li> </ul> <p>For
     * Explorer tests:</p> <ul> <li> <p>username: A username to use if the Explorer
     * encounters a login form. If not supplied, no username will be inserted.</p>
     * </li> <li> <p>password: A password to use if the Explorer encounters a login
     * form. If not supplied, no password will be inserted.</p> </li> </ul> <p>For
     * Instrumentation:</p> <ul> <li> <p>filter: A test filter string. Examples:</p>
     * <ul> <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A
     * test filter string. Examples:</p> <ul> <li> <p>Running a single test class:
     * "LoginTests"</p> </li> <li> <p>Running a multiple test classes:
     * "LoginTests,SmokeTests"</p> </li> <li> <p>Running a single test:
     * "LoginTests/testValid"</p> </li> <li> <p>Running multiple tests:
     * "LoginTests/testValid,LoginTests/testInvalid"</p> </li> </ul> </li> </ul> <p>For
     * UIAutomator:</p> <ul> <li> <p>filter: A test filter string. Examples:</p> <ul>
     * <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p>app_performance_monitoring: Performance monitoring
     * is enabled by default. Set this parameter to "false" to disable it.</p> </li>
     * </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A cucumber profile, for
     * example, "my_profile_name".</p> </li> <li> <p>tags: You can limit execution to
     * features or scenarios that have (or don't have) certain tags, for example,
     * "@smoke" or "@smoke,~@wip".</p> </li> </ul> <p>For Appium tests (all types):</p>
     * <ul> <li> <p>appium_version: The Appium version. Currently supported values are
     * "1.6.5" (and higher), "latest", and "default".</p> <ul> <li> <p>“latest” will
     * run the latest Appium version supported by Device Farm (1.9.1).</p> </li> <li>
     * <p>For “default”, Device Farm will choose a compatible version of Appium for the
     * device. The current behavior is to run 1.7.2 on Android devices and iOS 9 and
     * earlier, 1.7.2 for iOS 10 and later.</p> </li> <li> <p>This behavior is subject
     * to change.</p> </li> </ul> </li> </ul> <p>For Fuzz tests (Android only):</p>
     * <ul> <li> <p>event_count: The number of events, between 1 and 10000, that the UI
     * fuzz test should perform.</p> </li> <li> <p>throttle: The time, in ms, between 0
     * and 1000, that the UI fuzz test should wait between events.</p> </li> <li>
     * <p>seed: A seed to use for randomizing the UI fuzz test. Using the same seed
     * value between tests ensures identical event sequences.</p> </li> </ul> <p>For
     * Explorer tests:</p> <ul> <li> <p>username: A username to use if the Explorer
     * encounters a login form. If not supplied, no username will be inserted.</p>
     * </li> <li> <p>password: A password to use if the Explorer encounters a login
     * form. If not supplied, no password will be inserted.</p> </li> </ul> <p>For
     * Instrumentation:</p> <ul> <li> <p>filter: A test filter string. Examples:</p>
     * <ul> <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A
     * test filter string. Examples:</p> <ul> <li> <p>Running a single test class:
     * "LoginTests"</p> </li> <li> <p>Running a multiple test classes:
     * "LoginTests,SmokeTests"</p> </li> <li> <p>Running a single test:
     * "LoginTests/testValid"</p> </li> <li> <p>Running multiple tests:
     * "LoginTests/testValid,LoginTests/testInvalid"</p> </li> </ul> </li> </ul> <p>For
     * UIAutomator:</p> <ul> <li> <p>filter: A test filter string. Examples:</p> <ul>
     * <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p>app_performance_monitoring: Performance monitoring
     * is enabled by default. Set this parameter to "false" to disable it.</p> </li>
     * </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A cucumber profile, for
     * example, "my_profile_name".</p> </li> <li> <p>tags: You can limit execution to
     * features or scenarios that have (or don't have) certain tags, for example,
     * "@smoke" or "@smoke,~@wip".</p> </li> </ul> <p>For Appium tests (all types):</p>
     * <ul> <li> <p>appium_version: The Appium version. Currently supported values are
     * "1.6.5" (and higher), "latest", and "default".</p> <ul> <li> <p>“latest” will
     * run the latest Appium version supported by Device Farm (1.9.1).</p> </li> <li>
     * <p>For “default”, Device Farm will choose a compatible version of Appium for the
     * device. The current behavior is to run 1.7.2 on Android devices and iOS 9 and
     * earlier, 1.7.2 for iOS 10 and later.</p> </li> <li> <p>This behavior is subject
     * to change.</p> </li> </ul> </li> </ul> <p>For Fuzz tests (Android only):</p>
     * <ul> <li> <p>event_count: The number of events, between 1 and 10000, that the UI
     * fuzz test should perform.</p> </li> <li> <p>throttle: The time, in ms, between 0
     * and 1000, that the UI fuzz test should wait between events.</p> </li> <li>
     * <p>seed: A seed to use for randomizing the UI fuzz test. Using the same seed
     * value between tests ensures identical event sequences.</p> </li> </ul> <p>For
     * Explorer tests:</p> <ul> <li> <p>username: A username to use if the Explorer
     * encounters a login form. If not supplied, no username will be inserted.</p>
     * </li> <li> <p>password: A password to use if the Explorer encounters a login
     * form. If not supplied, no password will be inserted.</p> </li> </ul> <p>For
     * Instrumentation:</p> <ul> <li> <p>filter: A test filter string. Examples:</p>
     * <ul> <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A
     * test filter string. Examples:</p> <ul> <li> <p>Running a single test class:
     * "LoginTests"</p> </li> <li> <p>Running a multiple test classes:
     * "LoginTests,SmokeTests"</p> </li> <li> <p>Running a single test:
     * "LoginTests/testValid"</p> </li> <li> <p>Running multiple tests:
     * "LoginTests/testValid,LoginTests/testInvalid"</p> </li> </ul> </li> </ul> <p>For
     * UIAutomator:</p> <ul> <li> <p>filter: A test filter string. Examples:</p> <ul>
     * <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p>app_performance_monitoring: Performance monitoring
     * is enabled by default. Set this parameter to "false" to disable it.</p> </li>
     * </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A cucumber profile, for
     * example, "my_profile_name".</p> </li> <li> <p>tags: You can limit execution to
     * features or scenarios that have (or don't have) certain tags, for example,
     * "@smoke" or "@smoke,~@wip".</p> </li> </ul> <p>For Appium tests (all types):</p>
     * <ul> <li> <p>appium_version: The Appium version. Currently supported values are
     * "1.6.5" (and higher), "latest", and "default".</p> <ul> <li> <p>“latest” will
     * run the latest Appium version supported by Device Farm (1.9.1).</p> </li> <li>
     * <p>For “default”, Device Farm will choose a compatible version of Appium for the
     * device. The current behavior is to run 1.7.2 on Android devices and iOS 9 and
     * earlier, 1.7.2 for iOS 10 and later.</p> </li> <li> <p>This behavior is subject
     * to change.</p> </li> </ul> </li> </ul> <p>For Fuzz tests (Android only):</p>
     * <ul> <li> <p>event_count: The number of events, between 1 and 10000, that the UI
     * fuzz test should perform.</p> </li> <li> <p>throttle: The time, in ms, between 0
     * and 1000, that the UI fuzz test should wait between events.</p> </li> <li>
     * <p>seed: A seed to use for randomizing the UI fuzz test. Using the same seed
     * value between tests ensures identical event sequences.</p> </li> </ul> <p>For
     * Explorer tests:</p> <ul> <li> <p>username: A username to use if the Explorer
     * encounters a login form. If not supplied, no username will be inserted.</p>
     * </li> <li> <p>password: A password to use if the Explorer encounters a login
     * form. If not supplied, no password will be inserted.</p> </li> </ul> <p>For
     * Instrumentation:</p> <ul> <li> <p>filter: A test filter string. Examples:</p>
     * <ul> <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A
     * test filter string. Examples:</p> <ul> <li> <p>Running a single test class:
     * "LoginTests"</p> </li> <li> <p>Running a multiple test classes:
     * "LoginTests,SmokeTests"</p> </li> <li> <p>Running a single test:
     * "LoginTests/testValid"</p> </li> <li> <p>Running multiple tests:
     * "LoginTests/testValid,LoginTests/testInvalid"</p> </li> </ul> </li> </ul> <p>For
     * UIAutomator:</p> <ul> <li> <p>filter: A test filter string. Examples:</p> <ul>
     * <li> <p>Running a single test case: "com.android.abc.Test1"</p> </li> <li>
     * <p>Running a single test: "com.android.abc.Test1#smoke"</p> </li> <li>
     * <p>Running multiple tests: "com.android.abc.Test1,com.android.abc.Test2"</p>
     * </li> </ul> </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    TestType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_testPackageArn;
    bool m_testPackageArnHasBeenSet;

    Aws::String m_testSpecArn;
    bool m_testSpecArnHasBeenSet;

    Aws::String m_filter;
    bool m_filterHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
