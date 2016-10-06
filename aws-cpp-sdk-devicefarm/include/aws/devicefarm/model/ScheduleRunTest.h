/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents additional test settings.</p>
   */
  class AWS_DEVICEFARM_API ScheduleRunTest
  {
  public:
    ScheduleRunTest();
    ScheduleRunTest(const Aws::Utils::Json::JsonValue& jsonValue);
    ScheduleRunTest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li> <li> <p>BUILTIN_EXPLORER: For
     * Android, an app explorer that will traverse an Android app, interacting with it
     * and capturing screenshots at the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT:
     * The Appium Java JUnit type.</p> </li> <li> <p>APPIUM_JAVA_TESTNG: The Appium
     * Java TestNG type.</p> </li> <li> <p>APPIUM_PYTHON: The Appium Python type.</p>
     * </li> <li> <p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for Web
     * apps.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for
     * Web apps.</p> </li> <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for Web
     * apps.</p> </li> <li> <p>CALABASH: The Calabash type.</p> </li> <li>
     * <p>INSTRUMENTATION: The Instrumentation type.</p> </li> <li> <p>UIAUTOMATION:
     * The uiautomation type.</p> </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p>
     * </li> <li> <p>XCTEST: The XCode test type.</p> </li> <li> <p>XCTEST_UI: The
     * XCode UI test type.</p> </li> </ul>
     */
    inline const TestType& GetType() const{ return m_type; }

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li> <li> <p>BUILTIN_EXPLORER: For
     * Android, an app explorer that will traverse an Android app, interacting with it
     * and capturing screenshots at the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT:
     * The Appium Java JUnit type.</p> </li> <li> <p>APPIUM_JAVA_TESTNG: The Appium
     * Java TestNG type.</p> </li> <li> <p>APPIUM_PYTHON: The Appium Python type.</p>
     * </li> <li> <p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for Web
     * apps.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for
     * Web apps.</p> </li> <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for Web
     * apps.</p> </li> <li> <p>CALABASH: The Calabash type.</p> </li> <li>
     * <p>INSTRUMENTATION: The Instrumentation type.</p> </li> <li> <p>UIAUTOMATION:
     * The uiautomation type.</p> </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p>
     * </li> <li> <p>XCTEST: The XCode test type.</p> </li> <li> <p>XCTEST_UI: The
     * XCode UI test type.</p> </li> </ul>
     */
    inline void SetType(const TestType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li> <li> <p>BUILTIN_EXPLORER: For
     * Android, an app explorer that will traverse an Android app, interacting with it
     * and capturing screenshots at the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT:
     * The Appium Java JUnit type.</p> </li> <li> <p>APPIUM_JAVA_TESTNG: The Appium
     * Java TestNG type.</p> </li> <li> <p>APPIUM_PYTHON: The Appium Python type.</p>
     * </li> <li> <p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for Web
     * apps.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for
     * Web apps.</p> </li> <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for Web
     * apps.</p> </li> <li> <p>CALABASH: The Calabash type.</p> </li> <li>
     * <p>INSTRUMENTATION: The Instrumentation type.</p> </li> <li> <p>UIAUTOMATION:
     * The uiautomation type.</p> </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p>
     * </li> <li> <p>XCTEST: The XCode test type.</p> </li> <li> <p>XCTEST_UI: The
     * XCode UI test type.</p> </li> </ul>
     */
    inline void SetType(TestType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li> <li> <p>BUILTIN_EXPLORER: For
     * Android, an app explorer that will traverse an Android app, interacting with it
     * and capturing screenshots at the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT:
     * The Appium Java JUnit type.</p> </li> <li> <p>APPIUM_JAVA_TESTNG: The Appium
     * Java TestNG type.</p> </li> <li> <p>APPIUM_PYTHON: The Appium Python type.</p>
     * </li> <li> <p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for Web
     * apps.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for
     * Web apps.</p> </li> <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for Web
     * apps.</p> </li> <li> <p>CALABASH: The Calabash type.</p> </li> <li>
     * <p>INSTRUMENTATION: The Instrumentation type.</p> </li> <li> <p>UIAUTOMATION:
     * The uiautomation type.</p> </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p>
     * </li> <li> <p>XCTEST: The XCode test type.</p> </li> <li> <p>XCTEST_UI: The
     * XCode UI test type.</p> </li> </ul>
     */
    inline ScheduleRunTest& WithType(const TestType& value) { SetType(value); return *this;}

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ: The built-in fuzz type.</p> </li> <li> <p>BUILTIN_EXPLORER: For
     * Android, an app explorer that will traverse an Android app, interacting with it
     * and capturing screenshots at the same time.</p> </li> <li> <p>APPIUM_JAVA_JUNIT:
     * The Appium Java JUnit type.</p> </li> <li> <p>APPIUM_JAVA_TESTNG: The Appium
     * Java TestNG type.</p> </li> <li> <p>APPIUM_PYTHON: The Appium Python type.</p>
     * </li> <li> <p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for Web
     * apps.</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for
     * Web apps.</p> </li> <li> <p>APPIUM_WEB_PYTHON: The Appium Python type for Web
     * apps.</p> </li> <li> <p>CALABASH: The Calabash type.</p> </li> <li>
     * <p>INSTRUMENTATION: The Instrumentation type.</p> </li> <li> <p>UIAUTOMATION:
     * The uiautomation type.</p> </li> <li> <p>UIAUTOMATOR: The uiautomator type.</p>
     * </li> <li> <p>XCTEST: The XCode test type.</p> </li> <li> <p>XCTEST_UI: The
     * XCode UI test type.</p> </li> </ul>
     */
    inline ScheduleRunTest& WithType(TestType&& value) { SetType(value); return *this;}

    /**
     * <p>The ARN of the uploaded test that will be run.</p>
     */
    inline const Aws::String& GetTestPackageArn() const{ return m_testPackageArn; }

    /**
     * <p>The ARN of the uploaded test that will be run.</p>
     */
    inline void SetTestPackageArn(const Aws::String& value) { m_testPackageArnHasBeenSet = true; m_testPackageArn = value; }

    /**
     * <p>The ARN of the uploaded test that will be run.</p>
     */
    inline void SetTestPackageArn(Aws::String&& value) { m_testPackageArnHasBeenSet = true; m_testPackageArn = value; }

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
    inline ScheduleRunTest& WithTestPackageArn(Aws::String&& value) { SetTestPackageArn(value); return *this;}

    /**
     * <p>The ARN of the uploaded test that will be run.</p>
     */
    inline ScheduleRunTest& WithTestPackageArn(const char* value) { SetTestPackageArn(value); return *this;}

    /**
     * <p>The test's filter.</p>
     */
    inline const Aws::String& GetFilter() const{ return m_filter; }

    /**
     * <p>The test's filter.</p>
     */
    inline void SetFilter(const Aws::String& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The test's filter.</p>
     */
    inline void SetFilter(Aws::String&& value) { m_filterHasBeenSet = true; m_filter = value; }

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
    inline ScheduleRunTest& WithFilter(Aws::String&& value) { SetFilter(value); return *this;}

    /**
     * <p>The test's filter.</p>
     */
    inline ScheduleRunTest& WithFilter(const char* value) { SetFilter(value); return *this;}

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings.</p>
     */
    inline ScheduleRunTest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings.</p>
     */
    inline ScheduleRunTest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(value); return *this;}

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings.</p>
     */
    inline ScheduleRunTest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings.</p>
     */
    inline ScheduleRunTest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings.</p>
     */
    inline ScheduleRunTest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings.</p>
     */
    inline ScheduleRunTest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings.</p>
     */
    inline ScheduleRunTest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings.</p>
     */
    inline ScheduleRunTest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    /**
     * <p>The test's parameters, such as test framework parameters and fixture
     * settings.</p>
     */
    inline ScheduleRunTest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

  private:
    TestType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_testPackageArn;
    bool m_testPackageArnHasBeenSet;
    Aws::String m_filter;
    bool m_filterHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
