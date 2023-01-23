/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents test settings. This data structure is passed in as the test
   * parameter to ScheduleRun. For an example of the JSON request syntax, see
   * <a>ScheduleRun</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ScheduleRunTest">AWS
   * API Reference</a></p>
   */
  class ScheduleRunTest
  {
  public:
    AWS_DEVICEFARM_API ScheduleRunTest();
    AWS_DEVICEFARM_API ScheduleRunTest(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API ScheduleRunTest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>BUILTIN_EXPLORER. For Android, an app explorer
     * that traverses an Android app, interacting with it and capturing screenshots at
     * the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
     * <p>APPIUM_NODE</p> </li> <li> <p>APPIUM_RUBY</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON</p> </li> <li> <p>APPIUM_WEB_NODE</p> </li> <li>
     * <p>APPIUM_WEB_RUBY</p> </li> <li> <p>CALABASH</p> </li> <li>
     * <p>INSTRUMENTATION</p> </li> <li> <p>UIAUTOMATION</p> </li> <li>
     * <p>UIAUTOMATOR</p> </li> <li> <p>XCTEST</p> </li> <li> <p>XCTEST_UI</p> </li>
     * </ul>
     */
    inline const TestType& GetType() const{ return m_type; }

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>BUILTIN_EXPLORER. For Android, an app explorer
     * that traverses an Android app, interacting with it and capturing screenshots at
     * the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
     * <p>APPIUM_NODE</p> </li> <li> <p>APPIUM_RUBY</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON</p> </li> <li> <p>APPIUM_WEB_NODE</p> </li> <li>
     * <p>APPIUM_WEB_RUBY</p> </li> <li> <p>CALABASH</p> </li> <li>
     * <p>INSTRUMENTATION</p> </li> <li> <p>UIAUTOMATION</p> </li> <li>
     * <p>UIAUTOMATOR</p> </li> <li> <p>XCTEST</p> </li> <li> <p>XCTEST_UI</p> </li>
     * </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>BUILTIN_EXPLORER. For Android, an app explorer
     * that traverses an Android app, interacting with it and capturing screenshots at
     * the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
     * <p>APPIUM_NODE</p> </li> <li> <p>APPIUM_RUBY</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON</p> </li> <li> <p>APPIUM_WEB_NODE</p> </li> <li>
     * <p>APPIUM_WEB_RUBY</p> </li> <li> <p>CALABASH</p> </li> <li>
     * <p>INSTRUMENTATION</p> </li> <li> <p>UIAUTOMATION</p> </li> <li>
     * <p>UIAUTOMATOR</p> </li> <li> <p>XCTEST</p> </li> <li> <p>XCTEST_UI</p> </li>
     * </ul>
     */
    inline void SetType(const TestType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>BUILTIN_EXPLORER. For Android, an app explorer
     * that traverses an Android app, interacting with it and capturing screenshots at
     * the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
     * <p>APPIUM_NODE</p> </li> <li> <p>APPIUM_RUBY</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON</p> </li> <li> <p>APPIUM_WEB_NODE</p> </li> <li>
     * <p>APPIUM_WEB_RUBY</p> </li> <li> <p>CALABASH</p> </li> <li>
     * <p>INSTRUMENTATION</p> </li> <li> <p>UIAUTOMATION</p> </li> <li>
     * <p>UIAUTOMATOR</p> </li> <li> <p>XCTEST</p> </li> <li> <p>XCTEST_UI</p> </li>
     * </ul>
     */
    inline void SetType(TestType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>BUILTIN_EXPLORER. For Android, an app explorer
     * that traverses an Android app, interacting with it and capturing screenshots at
     * the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
     * <p>APPIUM_NODE</p> </li> <li> <p>APPIUM_RUBY</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON</p> </li> <li> <p>APPIUM_WEB_NODE</p> </li> <li>
     * <p>APPIUM_WEB_RUBY</p> </li> <li> <p>CALABASH</p> </li> <li>
     * <p>INSTRUMENTATION</p> </li> <li> <p>UIAUTOMATION</p> </li> <li>
     * <p>UIAUTOMATOR</p> </li> <li> <p>XCTEST</p> </li> <li> <p>XCTEST_UI</p> </li>
     * </ul>
     */
    inline ScheduleRunTest& WithType(const TestType& value) { SetType(value); return *this;}

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>BUILTIN_EXPLORER. For Android, an app explorer
     * that traverses an Android app, interacting with it and capturing screenshots at
     * the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
     * <p>APPIUM_NODE</p> </li> <li> <p>APPIUM_RUBY</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON</p> </li> <li> <p>APPIUM_WEB_NODE</p> </li> <li>
     * <p>APPIUM_WEB_RUBY</p> </li> <li> <p>CALABASH</p> </li> <li>
     * <p>INSTRUMENTATION</p> </li> <li> <p>UIAUTOMATION</p> </li> <li>
     * <p>UIAUTOMATOR</p> </li> <li> <p>XCTEST</p> </li> <li> <p>XCTEST_UI</p> </li>
     * </ul>
     */
    inline ScheduleRunTest& WithType(TestType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the uploaded test to be run.</p>
     */
    inline const Aws::String& GetTestPackageArn() const{ return m_testPackageArn; }

    /**
     * <p>The ARN of the uploaded test to be run.</p>
     */
    inline bool TestPackageArnHasBeenSet() const { return m_testPackageArnHasBeenSet; }

    /**
     * <p>The ARN of the uploaded test to be run.</p>
     */
    inline void SetTestPackageArn(const Aws::String& value) { m_testPackageArnHasBeenSet = true; m_testPackageArn = value; }

    /**
     * <p>The ARN of the uploaded test to be run.</p>
     */
    inline void SetTestPackageArn(Aws::String&& value) { m_testPackageArnHasBeenSet = true; m_testPackageArn = std::move(value); }

    /**
     * <p>The ARN of the uploaded test to be run.</p>
     */
    inline void SetTestPackageArn(const char* value) { m_testPackageArnHasBeenSet = true; m_testPackageArn.assign(value); }

    /**
     * <p>The ARN of the uploaded test to be run.</p>
     */
    inline ScheduleRunTest& WithTestPackageArn(const Aws::String& value) { SetTestPackageArn(value); return *this;}

    /**
     * <p>The ARN of the uploaded test to be run.</p>
     */
    inline ScheduleRunTest& WithTestPackageArn(Aws::String&& value) { SetTestPackageArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the uploaded test to be run.</p>
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
     * all tests:</p> <ul> <li> <p> <code>app_performance_monitoring</code>:
     * Performance monitoring is enabled by default. Set this parameter to false to
     * disable it.</p> </li> </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A
     * cucumber profile (for example, <code>my_profile_name</code>).</p> </li> <li>
     * <p>tags: You can limit execution to features or scenarios that have (or don't
     * have) certain tags (for example, @smoke or @smoke,~@wip).</p> </li> </ul> <p>For
     * Appium tests (all types):</p> <ul> <li> <p>appium_version: The Appium version.
     * Currently supported values are 1.6.5 (and later), latest, and default.</p> <ul>
     * <li> <p>latest runs the latest Appium version supported by Device Farm
     * (1.9.1).</p> </li> <li> <p>For default, Device Farm selects a compatible version
     * of Appium for the device. The current behavior is to run 1.7.2 on Android
     * devices and iOS 9 and earlier and 1.7.2 for iOS 10 and later.</p> </li> <li>
     * <p>This behavior is subject to change.</p> </li> </ul> </li> </ul> <p>For fuzz
     * tests (Android only):</p> <ul> <li> <p>event_count: The number of events,
     * between 1 and 10000, that the UI fuzz test should perform.</p> </li> <li>
     * <p>throttle: The time, in ms, between 0 and 1000, that the UI fuzz test should
     * wait between events.</p> </li> <li> <p>seed: A seed to use for randomizing the
     * UI fuzz test. Using the same seed value between tests ensures identical event
     * sequences.</p> </li> </ul> <p>For Explorer tests:</p> <ul> <li> <p>username: A
     * user name to use if the Explorer encounters a login form. If not supplied, no
     * user name is inserted.</p> </li> <li> <p>password: A password to use if the
     * Explorer encounters a login form. If not supplied, no password is inserted.</p>
     * </li> </ul> <p>For Instrumentation:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test class:
     * <code>LoginTests</code> </p> </li> <li> <p>Running a multiple test classes:
     * <code>LoginTests,SmokeTests</code> </p> </li> <li> <p>Running a single test:
     * <code>LoginTests/testValid</code> </p> </li> <li> <p>Running multiple tests:
     * <code>LoginTests/testValid,LoginTests/testInvalid</code> </p> </li> </ul> </li>
     * </ul> <p>For UIAutomator:</p> <ul> <li> <p>filter: A test filter string.
     * Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p> <code>app_performance_monitoring</code>:
     * Performance monitoring is enabled by default. Set this parameter to false to
     * disable it.</p> </li> </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A
     * cucumber profile (for example, <code>my_profile_name</code>).</p> </li> <li>
     * <p>tags: You can limit execution to features or scenarios that have (or don't
     * have) certain tags (for example, @smoke or @smoke,~@wip).</p> </li> </ul> <p>For
     * Appium tests (all types):</p> <ul> <li> <p>appium_version: The Appium version.
     * Currently supported values are 1.6.5 (and later), latest, and default.</p> <ul>
     * <li> <p>latest runs the latest Appium version supported by Device Farm
     * (1.9.1).</p> </li> <li> <p>For default, Device Farm selects a compatible version
     * of Appium for the device. The current behavior is to run 1.7.2 on Android
     * devices and iOS 9 and earlier and 1.7.2 for iOS 10 and later.</p> </li> <li>
     * <p>This behavior is subject to change.</p> </li> </ul> </li> </ul> <p>For fuzz
     * tests (Android only):</p> <ul> <li> <p>event_count: The number of events,
     * between 1 and 10000, that the UI fuzz test should perform.</p> </li> <li>
     * <p>throttle: The time, in ms, between 0 and 1000, that the UI fuzz test should
     * wait between events.</p> </li> <li> <p>seed: A seed to use for randomizing the
     * UI fuzz test. Using the same seed value between tests ensures identical event
     * sequences.</p> </li> </ul> <p>For Explorer tests:</p> <ul> <li> <p>username: A
     * user name to use if the Explorer encounters a login form. If not supplied, no
     * user name is inserted.</p> </li> <li> <p>password: A password to use if the
     * Explorer encounters a login form. If not supplied, no password is inserted.</p>
     * </li> </ul> <p>For Instrumentation:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test class:
     * <code>LoginTests</code> </p> </li> <li> <p>Running a multiple test classes:
     * <code>LoginTests,SmokeTests</code> </p> </li> <li> <p>Running a single test:
     * <code>LoginTests/testValid</code> </p> </li> <li> <p>Running multiple tests:
     * <code>LoginTests/testValid,LoginTests/testInvalid</code> </p> </li> </ul> </li>
     * </ul> <p>For UIAutomator:</p> <ul> <li> <p>filter: A test filter string.
     * Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p> <code>app_performance_monitoring</code>:
     * Performance monitoring is enabled by default. Set this parameter to false to
     * disable it.</p> </li> </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A
     * cucumber profile (for example, <code>my_profile_name</code>).</p> </li> <li>
     * <p>tags: You can limit execution to features or scenarios that have (or don't
     * have) certain tags (for example, @smoke or @smoke,~@wip).</p> </li> </ul> <p>For
     * Appium tests (all types):</p> <ul> <li> <p>appium_version: The Appium version.
     * Currently supported values are 1.6.5 (and later), latest, and default.</p> <ul>
     * <li> <p>latest runs the latest Appium version supported by Device Farm
     * (1.9.1).</p> </li> <li> <p>For default, Device Farm selects a compatible version
     * of Appium for the device. The current behavior is to run 1.7.2 on Android
     * devices and iOS 9 and earlier and 1.7.2 for iOS 10 and later.</p> </li> <li>
     * <p>This behavior is subject to change.</p> </li> </ul> </li> </ul> <p>For fuzz
     * tests (Android only):</p> <ul> <li> <p>event_count: The number of events,
     * between 1 and 10000, that the UI fuzz test should perform.</p> </li> <li>
     * <p>throttle: The time, in ms, between 0 and 1000, that the UI fuzz test should
     * wait between events.</p> </li> <li> <p>seed: A seed to use for randomizing the
     * UI fuzz test. Using the same seed value between tests ensures identical event
     * sequences.</p> </li> </ul> <p>For Explorer tests:</p> <ul> <li> <p>username: A
     * user name to use if the Explorer encounters a login form. If not supplied, no
     * user name is inserted.</p> </li> <li> <p>password: A password to use if the
     * Explorer encounters a login form. If not supplied, no password is inserted.</p>
     * </li> </ul> <p>For Instrumentation:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test class:
     * <code>LoginTests</code> </p> </li> <li> <p>Running a multiple test classes:
     * <code>LoginTests,SmokeTests</code> </p> </li> <li> <p>Running a single test:
     * <code>LoginTests/testValid</code> </p> </li> <li> <p>Running multiple tests:
     * <code>LoginTests/testValid,LoginTests/testInvalid</code> </p> </li> </ul> </li>
     * </ul> <p>For UIAutomator:</p> <ul> <li> <p>filter: A test filter string.
     * Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p> <code>app_performance_monitoring</code>:
     * Performance monitoring is enabled by default. Set this parameter to false to
     * disable it.</p> </li> </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A
     * cucumber profile (for example, <code>my_profile_name</code>).</p> </li> <li>
     * <p>tags: You can limit execution to features or scenarios that have (or don't
     * have) certain tags (for example, @smoke or @smoke,~@wip).</p> </li> </ul> <p>For
     * Appium tests (all types):</p> <ul> <li> <p>appium_version: The Appium version.
     * Currently supported values are 1.6.5 (and later), latest, and default.</p> <ul>
     * <li> <p>latest runs the latest Appium version supported by Device Farm
     * (1.9.1).</p> </li> <li> <p>For default, Device Farm selects a compatible version
     * of Appium for the device. The current behavior is to run 1.7.2 on Android
     * devices and iOS 9 and earlier and 1.7.2 for iOS 10 and later.</p> </li> <li>
     * <p>This behavior is subject to change.</p> </li> </ul> </li> </ul> <p>For fuzz
     * tests (Android only):</p> <ul> <li> <p>event_count: The number of events,
     * between 1 and 10000, that the UI fuzz test should perform.</p> </li> <li>
     * <p>throttle: The time, in ms, between 0 and 1000, that the UI fuzz test should
     * wait between events.</p> </li> <li> <p>seed: A seed to use for randomizing the
     * UI fuzz test. Using the same seed value between tests ensures identical event
     * sequences.</p> </li> </ul> <p>For Explorer tests:</p> <ul> <li> <p>username: A
     * user name to use if the Explorer encounters a login form. If not supplied, no
     * user name is inserted.</p> </li> <li> <p>password: A password to use if the
     * Explorer encounters a login form. If not supplied, no password is inserted.</p>
     * </li> </ul> <p>For Instrumentation:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test class:
     * <code>LoginTests</code> </p> </li> <li> <p>Running a multiple test classes:
     * <code>LoginTests,SmokeTests</code> </p> </li> <li> <p>Running a single test:
     * <code>LoginTests/testValid</code> </p> </li> <li> <p>Running multiple tests:
     * <code>LoginTests/testValid,LoginTests/testInvalid</code> </p> </li> </ul> </li>
     * </ul> <p>For UIAutomator:</p> <ul> <li> <p>filter: A test filter string.
     * Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p> <code>app_performance_monitoring</code>:
     * Performance monitoring is enabled by default. Set this parameter to false to
     * disable it.</p> </li> </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A
     * cucumber profile (for example, <code>my_profile_name</code>).</p> </li> <li>
     * <p>tags: You can limit execution to features or scenarios that have (or don't
     * have) certain tags (for example, @smoke or @smoke,~@wip).</p> </li> </ul> <p>For
     * Appium tests (all types):</p> <ul> <li> <p>appium_version: The Appium version.
     * Currently supported values are 1.6.5 (and later), latest, and default.</p> <ul>
     * <li> <p>latest runs the latest Appium version supported by Device Farm
     * (1.9.1).</p> </li> <li> <p>For default, Device Farm selects a compatible version
     * of Appium for the device. The current behavior is to run 1.7.2 on Android
     * devices and iOS 9 and earlier and 1.7.2 for iOS 10 and later.</p> </li> <li>
     * <p>This behavior is subject to change.</p> </li> </ul> </li> </ul> <p>For fuzz
     * tests (Android only):</p> <ul> <li> <p>event_count: The number of events,
     * between 1 and 10000, that the UI fuzz test should perform.</p> </li> <li>
     * <p>throttle: The time, in ms, between 0 and 1000, that the UI fuzz test should
     * wait between events.</p> </li> <li> <p>seed: A seed to use for randomizing the
     * UI fuzz test. Using the same seed value between tests ensures identical event
     * sequences.</p> </li> </ul> <p>For Explorer tests:</p> <ul> <li> <p>username: A
     * user name to use if the Explorer encounters a login form. If not supplied, no
     * user name is inserted.</p> </li> <li> <p>password: A password to use if the
     * Explorer encounters a login form. If not supplied, no password is inserted.</p>
     * </li> </ul> <p>For Instrumentation:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test class:
     * <code>LoginTests</code> </p> </li> <li> <p>Running a multiple test classes:
     * <code>LoginTests,SmokeTests</code> </p> </li> <li> <p>Running a single test:
     * <code>LoginTests/testValid</code> </p> </li> <li> <p>Running multiple tests:
     * <code>LoginTests/testValid,LoginTests/testInvalid</code> </p> </li> </ul> </li>
     * </ul> <p>For UIAutomator:</p> <ul> <li> <p>filter: A test filter string.
     * Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul>
     */
    inline ScheduleRunTest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p> <code>app_performance_monitoring</code>:
     * Performance monitoring is enabled by default. Set this parameter to false to
     * disable it.</p> </li> </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A
     * cucumber profile (for example, <code>my_profile_name</code>).</p> </li> <li>
     * <p>tags: You can limit execution to features or scenarios that have (or don't
     * have) certain tags (for example, @smoke or @smoke,~@wip).</p> </li> </ul> <p>For
     * Appium tests (all types):</p> <ul> <li> <p>appium_version: The Appium version.
     * Currently supported values are 1.6.5 (and later), latest, and default.</p> <ul>
     * <li> <p>latest runs the latest Appium version supported by Device Farm
     * (1.9.1).</p> </li> <li> <p>For default, Device Farm selects a compatible version
     * of Appium for the device. The current behavior is to run 1.7.2 on Android
     * devices and iOS 9 and earlier and 1.7.2 for iOS 10 and later.</p> </li> <li>
     * <p>This behavior is subject to change.</p> </li> </ul> </li> </ul> <p>For fuzz
     * tests (Android only):</p> <ul> <li> <p>event_count: The number of events,
     * between 1 and 10000, that the UI fuzz test should perform.</p> </li> <li>
     * <p>throttle: The time, in ms, between 0 and 1000, that the UI fuzz test should
     * wait between events.</p> </li> <li> <p>seed: A seed to use for randomizing the
     * UI fuzz test. Using the same seed value between tests ensures identical event
     * sequences.</p> </li> </ul> <p>For Explorer tests:</p> <ul> <li> <p>username: A
     * user name to use if the Explorer encounters a login form. If not supplied, no
     * user name is inserted.</p> </li> <li> <p>password: A password to use if the
     * Explorer encounters a login form. If not supplied, no password is inserted.</p>
     * </li> </ul> <p>For Instrumentation:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test class:
     * <code>LoginTests</code> </p> </li> <li> <p>Running a multiple test classes:
     * <code>LoginTests,SmokeTests</code> </p> </li> <li> <p>Running a single test:
     * <code>LoginTests/testValid</code> </p> </li> <li> <p>Running multiple tests:
     * <code>LoginTests/testValid,LoginTests/testInvalid</code> </p> </li> </ul> </li>
     * </ul> <p>For UIAutomator:</p> <ul> <li> <p>filter: A test filter string.
     * Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul>
     */
    inline ScheduleRunTest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p> <code>app_performance_monitoring</code>:
     * Performance monitoring is enabled by default. Set this parameter to false to
     * disable it.</p> </li> </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A
     * cucumber profile (for example, <code>my_profile_name</code>).</p> </li> <li>
     * <p>tags: You can limit execution to features or scenarios that have (or don't
     * have) certain tags (for example, @smoke or @smoke,~@wip).</p> </li> </ul> <p>For
     * Appium tests (all types):</p> <ul> <li> <p>appium_version: The Appium version.
     * Currently supported values are 1.6.5 (and later), latest, and default.</p> <ul>
     * <li> <p>latest runs the latest Appium version supported by Device Farm
     * (1.9.1).</p> </li> <li> <p>For default, Device Farm selects a compatible version
     * of Appium for the device. The current behavior is to run 1.7.2 on Android
     * devices and iOS 9 and earlier and 1.7.2 for iOS 10 and later.</p> </li> <li>
     * <p>This behavior is subject to change.</p> </li> </ul> </li> </ul> <p>For fuzz
     * tests (Android only):</p> <ul> <li> <p>event_count: The number of events,
     * between 1 and 10000, that the UI fuzz test should perform.</p> </li> <li>
     * <p>throttle: The time, in ms, between 0 and 1000, that the UI fuzz test should
     * wait between events.</p> </li> <li> <p>seed: A seed to use for randomizing the
     * UI fuzz test. Using the same seed value between tests ensures identical event
     * sequences.</p> </li> </ul> <p>For Explorer tests:</p> <ul> <li> <p>username: A
     * user name to use if the Explorer encounters a login form. If not supplied, no
     * user name is inserted.</p> </li> <li> <p>password: A password to use if the
     * Explorer encounters a login form. If not supplied, no password is inserted.</p>
     * </li> </ul> <p>For Instrumentation:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test class:
     * <code>LoginTests</code> </p> </li> <li> <p>Running a multiple test classes:
     * <code>LoginTests,SmokeTests</code> </p> </li> <li> <p>Running a single test:
     * <code>LoginTests/testValid</code> </p> </li> <li> <p>Running multiple tests:
     * <code>LoginTests/testValid,LoginTests/testInvalid</code> </p> </li> </ul> </li>
     * </ul> <p>For UIAutomator:</p> <ul> <li> <p>filter: A test filter string.
     * Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p> <code>app_performance_monitoring</code>:
     * Performance monitoring is enabled by default. Set this parameter to false to
     * disable it.</p> </li> </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A
     * cucumber profile (for example, <code>my_profile_name</code>).</p> </li> <li>
     * <p>tags: You can limit execution to features or scenarios that have (or don't
     * have) certain tags (for example, @smoke or @smoke,~@wip).</p> </li> </ul> <p>For
     * Appium tests (all types):</p> <ul> <li> <p>appium_version: The Appium version.
     * Currently supported values are 1.6.5 (and later), latest, and default.</p> <ul>
     * <li> <p>latest runs the latest Appium version supported by Device Farm
     * (1.9.1).</p> </li> <li> <p>For default, Device Farm selects a compatible version
     * of Appium for the device. The current behavior is to run 1.7.2 on Android
     * devices and iOS 9 and earlier and 1.7.2 for iOS 10 and later.</p> </li> <li>
     * <p>This behavior is subject to change.</p> </li> </ul> </li> </ul> <p>For fuzz
     * tests (Android only):</p> <ul> <li> <p>event_count: The number of events,
     * between 1 and 10000, that the UI fuzz test should perform.</p> </li> <li>
     * <p>throttle: The time, in ms, between 0 and 1000, that the UI fuzz test should
     * wait between events.</p> </li> <li> <p>seed: A seed to use for randomizing the
     * UI fuzz test. Using the same seed value between tests ensures identical event
     * sequences.</p> </li> </ul> <p>For Explorer tests:</p> <ul> <li> <p>username: A
     * user name to use if the Explorer encounters a login form. If not supplied, no
     * user name is inserted.</p> </li> <li> <p>password: A password to use if the
     * Explorer encounters a login form. If not supplied, no password is inserted.</p>
     * </li> </ul> <p>For Instrumentation:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test class:
     * <code>LoginTests</code> </p> </li> <li> <p>Running a multiple test classes:
     * <code>LoginTests,SmokeTests</code> </p> </li> <li> <p>Running a single test:
     * <code>LoginTests/testValid</code> </p> </li> <li> <p>Running multiple tests:
     * <code>LoginTests/testValid,LoginTests/testInvalid</code> </p> </li> </ul> </li>
     * </ul> <p>For UIAutomator:</p> <ul> <li> <p>filter: A test filter string.
     * Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p> <code>app_performance_monitoring</code>:
     * Performance monitoring is enabled by default. Set this parameter to false to
     * disable it.</p> </li> </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A
     * cucumber profile (for example, <code>my_profile_name</code>).</p> </li> <li>
     * <p>tags: You can limit execution to features or scenarios that have (or don't
     * have) certain tags (for example, @smoke or @smoke,~@wip).</p> </li> </ul> <p>For
     * Appium tests (all types):</p> <ul> <li> <p>appium_version: The Appium version.
     * Currently supported values are 1.6.5 (and later), latest, and default.</p> <ul>
     * <li> <p>latest runs the latest Appium version supported by Device Farm
     * (1.9.1).</p> </li> <li> <p>For default, Device Farm selects a compatible version
     * of Appium for the device. The current behavior is to run 1.7.2 on Android
     * devices and iOS 9 and earlier and 1.7.2 for iOS 10 and later.</p> </li> <li>
     * <p>This behavior is subject to change.</p> </li> </ul> </li> </ul> <p>For fuzz
     * tests (Android only):</p> <ul> <li> <p>event_count: The number of events,
     * between 1 and 10000, that the UI fuzz test should perform.</p> </li> <li>
     * <p>throttle: The time, in ms, between 0 and 1000, that the UI fuzz test should
     * wait between events.</p> </li> <li> <p>seed: A seed to use for randomizing the
     * UI fuzz test. Using the same seed value between tests ensures identical event
     * sequences.</p> </li> </ul> <p>For Explorer tests:</p> <ul> <li> <p>username: A
     * user name to use if the Explorer encounters a login form. If not supplied, no
     * user name is inserted.</p> </li> <li> <p>password: A password to use if the
     * Explorer encounters a login form. If not supplied, no password is inserted.</p>
     * </li> </ul> <p>For Instrumentation:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test class:
     * <code>LoginTests</code> </p> </li> <li> <p>Running a multiple test classes:
     * <code>LoginTests,SmokeTests</code> </p> </li> <li> <p>Running a single test:
     * <code>LoginTests/testValid</code> </p> </li> <li> <p>Running multiple tests:
     * <code>LoginTests/testValid,LoginTests/testInvalid</code> </p> </li> </ul> </li>
     * </ul> <p>For UIAutomator:</p> <ul> <li> <p>filter: A test filter string.
     * Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p> <code>app_performance_monitoring</code>:
     * Performance monitoring is enabled by default. Set this parameter to false to
     * disable it.</p> </li> </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A
     * cucumber profile (for example, <code>my_profile_name</code>).</p> </li> <li>
     * <p>tags: You can limit execution to features or scenarios that have (or don't
     * have) certain tags (for example, @smoke or @smoke,~@wip).</p> </li> </ul> <p>For
     * Appium tests (all types):</p> <ul> <li> <p>appium_version: The Appium version.
     * Currently supported values are 1.6.5 (and later), latest, and default.</p> <ul>
     * <li> <p>latest runs the latest Appium version supported by Device Farm
     * (1.9.1).</p> </li> <li> <p>For default, Device Farm selects a compatible version
     * of Appium for the device. The current behavior is to run 1.7.2 on Android
     * devices and iOS 9 and earlier and 1.7.2 for iOS 10 and later.</p> </li> <li>
     * <p>This behavior is subject to change.</p> </li> </ul> </li> </ul> <p>For fuzz
     * tests (Android only):</p> <ul> <li> <p>event_count: The number of events,
     * between 1 and 10000, that the UI fuzz test should perform.</p> </li> <li>
     * <p>throttle: The time, in ms, between 0 and 1000, that the UI fuzz test should
     * wait between events.</p> </li> <li> <p>seed: A seed to use for randomizing the
     * UI fuzz test. Using the same seed value between tests ensures identical event
     * sequences.</p> </li> </ul> <p>For Explorer tests:</p> <ul> <li> <p>username: A
     * user name to use if the Explorer encounters a login form. If not supplied, no
     * user name is inserted.</p> </li> <li> <p>password: A password to use if the
     * Explorer encounters a login form. If not supplied, no password is inserted.</p>
     * </li> </ul> <p>For Instrumentation:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test class:
     * <code>LoginTests</code> </p> </li> <li> <p>Running a multiple test classes:
     * <code>LoginTests,SmokeTests</code> </p> </li> <li> <p>Running a single test:
     * <code>LoginTests/testValid</code> </p> </li> <li> <p>Running multiple tests:
     * <code>LoginTests/testValid,LoginTests/testInvalid</code> </p> </li> </ul> </li>
     * </ul> <p>For UIAutomator:</p> <ul> <li> <p>filter: A test filter string.
     * Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p> <code>app_performance_monitoring</code>:
     * Performance monitoring is enabled by default. Set this parameter to false to
     * disable it.</p> </li> </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A
     * cucumber profile (for example, <code>my_profile_name</code>).</p> </li> <li>
     * <p>tags: You can limit execution to features or scenarios that have (or don't
     * have) certain tags (for example, @smoke or @smoke,~@wip).</p> </li> </ul> <p>For
     * Appium tests (all types):</p> <ul> <li> <p>appium_version: The Appium version.
     * Currently supported values are 1.6.5 (and later), latest, and default.</p> <ul>
     * <li> <p>latest runs the latest Appium version supported by Device Farm
     * (1.9.1).</p> </li> <li> <p>For default, Device Farm selects a compatible version
     * of Appium for the device. The current behavior is to run 1.7.2 on Android
     * devices and iOS 9 and earlier and 1.7.2 for iOS 10 and later.</p> </li> <li>
     * <p>This behavior is subject to change.</p> </li> </ul> </li> </ul> <p>For fuzz
     * tests (Android only):</p> <ul> <li> <p>event_count: The number of events,
     * between 1 and 10000, that the UI fuzz test should perform.</p> </li> <li>
     * <p>throttle: The time, in ms, between 0 and 1000, that the UI fuzz test should
     * wait between events.</p> </li> <li> <p>seed: A seed to use for randomizing the
     * UI fuzz test. Using the same seed value between tests ensures identical event
     * sequences.</p> </li> </ul> <p>For Explorer tests:</p> <ul> <li> <p>username: A
     * user name to use if the Explorer encounters a login form. If not supplied, no
     * user name is inserted.</p> </li> <li> <p>password: A password to use if the
     * Explorer encounters a login form. If not supplied, no password is inserted.</p>
     * </li> </ul> <p>For Instrumentation:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test class:
     * <code>LoginTests</code> </p> </li> <li> <p>Running a multiple test classes:
     * <code>LoginTests,SmokeTests</code> </p> </li> <li> <p>Running a single test:
     * <code>LoginTests/testValid</code> </p> </li> <li> <p>Running multiple tests:
     * <code>LoginTests/testValid,LoginTests/testInvalid</code> </p> </li> </ul> </li>
     * </ul> <p>For UIAutomator:</p> <ul> <li> <p>filter: A test filter string.
     * Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p> <code>app_performance_monitoring</code>:
     * Performance monitoring is enabled by default. Set this parameter to false to
     * disable it.</p> </li> </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A
     * cucumber profile (for example, <code>my_profile_name</code>).</p> </li> <li>
     * <p>tags: You can limit execution to features or scenarios that have (or don't
     * have) certain tags (for example, @smoke or @smoke,~@wip).</p> </li> </ul> <p>For
     * Appium tests (all types):</p> <ul> <li> <p>appium_version: The Appium version.
     * Currently supported values are 1.6.5 (and later), latest, and default.</p> <ul>
     * <li> <p>latest runs the latest Appium version supported by Device Farm
     * (1.9.1).</p> </li> <li> <p>For default, Device Farm selects a compatible version
     * of Appium for the device. The current behavior is to run 1.7.2 on Android
     * devices and iOS 9 and earlier and 1.7.2 for iOS 10 and later.</p> </li> <li>
     * <p>This behavior is subject to change.</p> </li> </ul> </li> </ul> <p>For fuzz
     * tests (Android only):</p> <ul> <li> <p>event_count: The number of events,
     * between 1 and 10000, that the UI fuzz test should perform.</p> </li> <li>
     * <p>throttle: The time, in ms, between 0 and 1000, that the UI fuzz test should
     * wait between events.</p> </li> <li> <p>seed: A seed to use for randomizing the
     * UI fuzz test. Using the same seed value between tests ensures identical event
     * sequences.</p> </li> </ul> <p>For Explorer tests:</p> <ul> <li> <p>username: A
     * user name to use if the Explorer encounters a login form. If not supplied, no
     * user name is inserted.</p> </li> <li> <p>password: A password to use if the
     * Explorer encounters a login form. If not supplied, no password is inserted.</p>
     * </li> </ul> <p>For Instrumentation:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test class:
     * <code>LoginTests</code> </p> </li> <li> <p>Running a multiple test classes:
     * <code>LoginTests,SmokeTests</code> </p> </li> <li> <p>Running a single test:
     * <code>LoginTests/testValid</code> </p> </li> <li> <p>Running multiple tests:
     * <code>LoginTests/testValid,LoginTests/testInvalid</code> </p> </li> </ul> </li>
     * </ul> <p>For UIAutomator:</p> <ul> <li> <p>filter: A test filter string.
     * Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings. Parameters are represented by name-value pairs of strings.</p> <p>For
     * all tests:</p> <ul> <li> <p> <code>app_performance_monitoring</code>:
     * Performance monitoring is enabled by default. Set this parameter to false to
     * disable it.</p> </li> </ul> <p>For Calabash tests:</p> <ul> <li> <p>profile: A
     * cucumber profile (for example, <code>my_profile_name</code>).</p> </li> <li>
     * <p>tags: You can limit execution to features or scenarios that have (or don't
     * have) certain tags (for example, @smoke or @smoke,~@wip).</p> </li> </ul> <p>For
     * Appium tests (all types):</p> <ul> <li> <p>appium_version: The Appium version.
     * Currently supported values are 1.6.5 (and later), latest, and default.</p> <ul>
     * <li> <p>latest runs the latest Appium version supported by Device Farm
     * (1.9.1).</p> </li> <li> <p>For default, Device Farm selects a compatible version
     * of Appium for the device. The current behavior is to run 1.7.2 on Android
     * devices and iOS 9 and earlier and 1.7.2 for iOS 10 and later.</p> </li> <li>
     * <p>This behavior is subject to change.</p> </li> </ul> </li> </ul> <p>For fuzz
     * tests (Android only):</p> <ul> <li> <p>event_count: The number of events,
     * between 1 and 10000, that the UI fuzz test should perform.</p> </li> <li>
     * <p>throttle: The time, in ms, between 0 and 1000, that the UI fuzz test should
     * wait between events.</p> </li> <li> <p>seed: A seed to use for randomizing the
     * UI fuzz test. Using the same seed value between tests ensures identical event
     * sequences.</p> </li> </ul> <p>For Explorer tests:</p> <ul> <li> <p>username: A
     * user name to use if the Explorer encounters a login form. If not supplied, no
     * user name is inserted.</p> </li> <li> <p>password: A password to use if the
     * Explorer encounters a login form. If not supplied, no password is inserted.</p>
     * </li> </ul> <p>For Instrumentation:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul> <p>For XCTest and XCTestUI:</p> <ul> <li> <p>filter: A test filter
     * string. Examples:</p> <ul> <li> <p>Running a single test class:
     * <code>LoginTests</code> </p> </li> <li> <p>Running a multiple test classes:
     * <code>LoginTests,SmokeTests</code> </p> </li> <li> <p>Running a single test:
     * <code>LoginTests/testValid</code> </p> </li> <li> <p>Running multiple tests:
     * <code>LoginTests/testValid,LoginTests/testInvalid</code> </p> </li> </ul> </li>
     * </ul> <p>For UIAutomator:</p> <ul> <li> <p>filter: A test filter string.
     * Examples:</p> <ul> <li> <p>Running a single test case:
     * <code>com.android.abc.Test1</code> </p> </li> <li> <p>Running a single test:
     * <code>com.android.abc.Test1#smoke</code> </p> </li> <li> <p>Running multiple
     * tests: <code>com.android.abc.Test1,com.android.abc.Test2</code> </p> </li> </ul>
     * </li> </ul>
     */
    inline ScheduleRunTest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    TestType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_testPackageArn;
    bool m_testPackageArnHasBeenSet = false;

    Aws::String m_testSpecArn;
    bool m_testSpecArnHasBeenSet = false;

    Aws::String m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
