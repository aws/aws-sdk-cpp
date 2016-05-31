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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/devicefarm/model/ExecutionStatus.h>
#include <aws/devicefarm/model/ExecutionResult.h>
#include <aws/devicefarm/model/Counters.h>
#include <aws/devicefarm/model/DeviceMinutes.h>

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
   * <p>Represents a collection of one or more tests.</p>
   */
  class AWS_DEVICEFARM_API Suite
  {
  public:
    Suite();
    Suite(const Aws::Utils::Json::JsonValue& jsonValue);
    Suite& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The suite's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The suite's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The suite's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The suite's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The suite's ARN.</p>
     */
    inline Suite& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The suite's ARN.</p>
     */
    inline Suite& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The suite's ARN.</p>
     */
    inline Suite& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The suite's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The suite's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The suite's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The suite's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The suite's name.</p>
     */
    inline Suite& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The suite's name.</p>
     */
    inline Suite& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The suite's name.</p>
     */
    inline Suite& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The suite's type.</p> <p>Must be one of the following values:</p> <ul>
     * <li><p>BUILTIN_FUZZ: The built-in fuzz type.</p></li> <li><p>BUILTIN_EXPLORER:
     * For Android, an app explorer that will traverse an Android app, interacting with
     * it and capturing screenshots at the same time.</p></li>
     * <li><p>APPIUM_JAVA_JUNIT: The Appium Java JUnit type.</p></li>
     * <li><p>APPIUM_JAVA_TESTNG: The Appium Java TestNG type.</p></li>
     * <li><p>APPIUM_PYTHON: The Appium Python type.</p></li>
     * <li><p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for Web apps.</p></li>
     * <li><p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for Web
     * apps.</p></li> <li><p>APPIUM_WEB_PYTHON: The Appium Python type for Web
     * apps.</p></li> <li><p>CALABASH: The Calabash type.</p></li>
     * <li><p>INSTRUMENTATION: The Instrumentation type.</p></li> <li><p>UIAUTOMATION:
     * The uiautomation type.</p></li> <li><p>UIAUTOMATOR: The uiautomator
     * type.</p></li> <li><p>XCTEST: The XCode test type.</p></li> <li><p>XCTEST_UI:
     * The XCode UI test type.</p></li> </ul>
     */
    inline const TestType& GetType() const{ return m_type; }

    /**
     * <p>The suite's type.</p> <p>Must be one of the following values:</p> <ul>
     * <li><p>BUILTIN_FUZZ: The built-in fuzz type.</p></li> <li><p>BUILTIN_EXPLORER:
     * For Android, an app explorer that will traverse an Android app, interacting with
     * it and capturing screenshots at the same time.</p></li>
     * <li><p>APPIUM_JAVA_JUNIT: The Appium Java JUnit type.</p></li>
     * <li><p>APPIUM_JAVA_TESTNG: The Appium Java TestNG type.</p></li>
     * <li><p>APPIUM_PYTHON: The Appium Python type.</p></li>
     * <li><p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for Web apps.</p></li>
     * <li><p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for Web
     * apps.</p></li> <li><p>APPIUM_WEB_PYTHON: The Appium Python type for Web
     * apps.</p></li> <li><p>CALABASH: The Calabash type.</p></li>
     * <li><p>INSTRUMENTATION: The Instrumentation type.</p></li> <li><p>UIAUTOMATION:
     * The uiautomation type.</p></li> <li><p>UIAUTOMATOR: The uiautomator
     * type.</p></li> <li><p>XCTEST: The XCode test type.</p></li> <li><p>XCTEST_UI:
     * The XCode UI test type.</p></li> </ul>
     */
    inline void SetType(const TestType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The suite's type.</p> <p>Must be one of the following values:</p> <ul>
     * <li><p>BUILTIN_FUZZ: The built-in fuzz type.</p></li> <li><p>BUILTIN_EXPLORER:
     * For Android, an app explorer that will traverse an Android app, interacting with
     * it and capturing screenshots at the same time.</p></li>
     * <li><p>APPIUM_JAVA_JUNIT: The Appium Java JUnit type.</p></li>
     * <li><p>APPIUM_JAVA_TESTNG: The Appium Java TestNG type.</p></li>
     * <li><p>APPIUM_PYTHON: The Appium Python type.</p></li>
     * <li><p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for Web apps.</p></li>
     * <li><p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for Web
     * apps.</p></li> <li><p>APPIUM_WEB_PYTHON: The Appium Python type for Web
     * apps.</p></li> <li><p>CALABASH: The Calabash type.</p></li>
     * <li><p>INSTRUMENTATION: The Instrumentation type.</p></li> <li><p>UIAUTOMATION:
     * The uiautomation type.</p></li> <li><p>UIAUTOMATOR: The uiautomator
     * type.</p></li> <li><p>XCTEST: The XCode test type.</p></li> <li><p>XCTEST_UI:
     * The XCode UI test type.</p></li> </ul>
     */
    inline void SetType(TestType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The suite's type.</p> <p>Must be one of the following values:</p> <ul>
     * <li><p>BUILTIN_FUZZ: The built-in fuzz type.</p></li> <li><p>BUILTIN_EXPLORER:
     * For Android, an app explorer that will traverse an Android app, interacting with
     * it and capturing screenshots at the same time.</p></li>
     * <li><p>APPIUM_JAVA_JUNIT: The Appium Java JUnit type.</p></li>
     * <li><p>APPIUM_JAVA_TESTNG: The Appium Java TestNG type.</p></li>
     * <li><p>APPIUM_PYTHON: The Appium Python type.</p></li>
     * <li><p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for Web apps.</p></li>
     * <li><p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for Web
     * apps.</p></li> <li><p>APPIUM_WEB_PYTHON: The Appium Python type for Web
     * apps.</p></li> <li><p>CALABASH: The Calabash type.</p></li>
     * <li><p>INSTRUMENTATION: The Instrumentation type.</p></li> <li><p>UIAUTOMATION:
     * The uiautomation type.</p></li> <li><p>UIAUTOMATOR: The uiautomator
     * type.</p></li> <li><p>XCTEST: The XCode test type.</p></li> <li><p>XCTEST_UI:
     * The XCode UI test type.</p></li> </ul>
     */
    inline Suite& WithType(const TestType& value) { SetType(value); return *this;}

    /**
     * <p>The suite's type.</p> <p>Must be one of the following values:</p> <ul>
     * <li><p>BUILTIN_FUZZ: The built-in fuzz type.</p></li> <li><p>BUILTIN_EXPLORER:
     * For Android, an app explorer that will traverse an Android app, interacting with
     * it and capturing screenshots at the same time.</p></li>
     * <li><p>APPIUM_JAVA_JUNIT: The Appium Java JUnit type.</p></li>
     * <li><p>APPIUM_JAVA_TESTNG: The Appium Java TestNG type.</p></li>
     * <li><p>APPIUM_PYTHON: The Appium Python type.</p></li>
     * <li><p>APPIUM_WEB_JAVA_JUNIT: The Appium Java JUnit type for Web apps.</p></li>
     * <li><p>APPIUM_WEB_JAVA_TESTNG: The Appium Java TestNG type for Web
     * apps.</p></li> <li><p>APPIUM_WEB_PYTHON: The Appium Python type for Web
     * apps.</p></li> <li><p>CALABASH: The Calabash type.</p></li>
     * <li><p>INSTRUMENTATION: The Instrumentation type.</p></li> <li><p>UIAUTOMATION:
     * The uiautomation type.</p></li> <li><p>UIAUTOMATOR: The uiautomator
     * type.</p></li> <li><p>XCTEST: The XCode test type.</p></li> <li><p>XCTEST_UI:
     * The XCode UI test type.</p></li> </ul>
     */
    inline Suite& WithType(TestType&& value) { SetType(value); return *this;}

    /**
     * <p>When the suite was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>When the suite was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>When the suite was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>When the suite was created.</p>
     */
    inline Suite& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>When the suite was created.</p>
     */
    inline Suite& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(value); return *this;}

    /**
     * <p>The suite's status.</p> <p>Allowed values include:</p> <ul> <li><p>PENDING: A
     * pending status.</p></li> <li><p>PENDING_CONCURRENCY: A pending concurrency
     * status.</p></li> <li><p>PENDING_DEVICE: A pending device status.</p></li>
     * <li><p>PROCESSING: A processing status.</p></li> <li><p>SCHEDULING: A scheduling
     * status.</p></li> <li><p>PREPARING: A preparing status.</p></li> <li><p>RUNNING:
     * A running status.</p></li> <li><p>COMPLETED: A completed status.</p></li>
     * <li><p>STOPPING: A stopping status.</p></li> </ul>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The suite's status.</p> <p>Allowed values include:</p> <ul> <li><p>PENDING: A
     * pending status.</p></li> <li><p>PENDING_CONCURRENCY: A pending concurrency
     * status.</p></li> <li><p>PENDING_DEVICE: A pending device status.</p></li>
     * <li><p>PROCESSING: A processing status.</p></li> <li><p>SCHEDULING: A scheduling
     * status.</p></li> <li><p>PREPARING: A preparing status.</p></li> <li><p>RUNNING:
     * A running status.</p></li> <li><p>COMPLETED: A completed status.</p></li>
     * <li><p>STOPPING: A stopping status.</p></li> </ul>
     */
    inline void SetStatus(const ExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The suite's status.</p> <p>Allowed values include:</p> <ul> <li><p>PENDING: A
     * pending status.</p></li> <li><p>PENDING_CONCURRENCY: A pending concurrency
     * status.</p></li> <li><p>PENDING_DEVICE: A pending device status.</p></li>
     * <li><p>PROCESSING: A processing status.</p></li> <li><p>SCHEDULING: A scheduling
     * status.</p></li> <li><p>PREPARING: A preparing status.</p></li> <li><p>RUNNING:
     * A running status.</p></li> <li><p>COMPLETED: A completed status.</p></li>
     * <li><p>STOPPING: A stopping status.</p></li> </ul>
     */
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The suite's status.</p> <p>Allowed values include:</p> <ul> <li><p>PENDING: A
     * pending status.</p></li> <li><p>PENDING_CONCURRENCY: A pending concurrency
     * status.</p></li> <li><p>PENDING_DEVICE: A pending device status.</p></li>
     * <li><p>PROCESSING: A processing status.</p></li> <li><p>SCHEDULING: A scheduling
     * status.</p></li> <li><p>PREPARING: A preparing status.</p></li> <li><p>RUNNING:
     * A running status.</p></li> <li><p>COMPLETED: A completed status.</p></li>
     * <li><p>STOPPING: A stopping status.</p></li> </ul>
     */
    inline Suite& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The suite's status.</p> <p>Allowed values include:</p> <ul> <li><p>PENDING: A
     * pending status.</p></li> <li><p>PENDING_CONCURRENCY: A pending concurrency
     * status.</p></li> <li><p>PENDING_DEVICE: A pending device status.</p></li>
     * <li><p>PROCESSING: A processing status.</p></li> <li><p>SCHEDULING: A scheduling
     * status.</p></li> <li><p>PREPARING: A preparing status.</p></li> <li><p>RUNNING:
     * A running status.</p></li> <li><p>COMPLETED: A completed status.</p></li>
     * <li><p>STOPPING: A stopping status.</p></li> </ul>
     */
    inline Suite& WithStatus(ExecutionStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The suite's result.</p> <p>Allowed values include:</p> <ul> <li><p>PENDING: A
     * pending condition.</p></li> <li><p>PASSED: A passing condition.</p></li>
     * <li><p>WARNED: A warning condition.</p></li> <li><p>FAILED: A failed
     * condition.</p></li> <li><p>SKIPPED: A skipped condition.</p></li>
     * <li><p>ERRORED: An error condition.</p></li> <li><p>STOPPED: A stopped
     * condition.</p></li> </ul>
     */
    inline const ExecutionResult& GetResult() const{ return m_result; }

    /**
     * <p>The suite's result.</p> <p>Allowed values include:</p> <ul> <li><p>PENDING: A
     * pending condition.</p></li> <li><p>PASSED: A passing condition.</p></li>
     * <li><p>WARNED: A warning condition.</p></li> <li><p>FAILED: A failed
     * condition.</p></li> <li><p>SKIPPED: A skipped condition.</p></li>
     * <li><p>ERRORED: An error condition.</p></li> <li><p>STOPPED: A stopped
     * condition.</p></li> </ul>
     */
    inline void SetResult(const ExecutionResult& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The suite's result.</p> <p>Allowed values include:</p> <ul> <li><p>PENDING: A
     * pending condition.</p></li> <li><p>PASSED: A passing condition.</p></li>
     * <li><p>WARNED: A warning condition.</p></li> <li><p>FAILED: A failed
     * condition.</p></li> <li><p>SKIPPED: A skipped condition.</p></li>
     * <li><p>ERRORED: An error condition.</p></li> <li><p>STOPPED: A stopped
     * condition.</p></li> </ul>
     */
    inline void SetResult(ExecutionResult&& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The suite's result.</p> <p>Allowed values include:</p> <ul> <li><p>PENDING: A
     * pending condition.</p></li> <li><p>PASSED: A passing condition.</p></li>
     * <li><p>WARNED: A warning condition.</p></li> <li><p>FAILED: A failed
     * condition.</p></li> <li><p>SKIPPED: A skipped condition.</p></li>
     * <li><p>ERRORED: An error condition.</p></li> <li><p>STOPPED: A stopped
     * condition.</p></li> </ul>
     */
    inline Suite& WithResult(const ExecutionResult& value) { SetResult(value); return *this;}

    /**
     * <p>The suite's result.</p> <p>Allowed values include:</p> <ul> <li><p>PENDING: A
     * pending condition.</p></li> <li><p>PASSED: A passing condition.</p></li>
     * <li><p>WARNED: A warning condition.</p></li> <li><p>FAILED: A failed
     * condition.</p></li> <li><p>SKIPPED: A skipped condition.</p></li>
     * <li><p>ERRORED: An error condition.</p></li> <li><p>STOPPED: A stopped
     * condition.</p></li> </ul>
     */
    inline Suite& WithResult(ExecutionResult&& value) { SetResult(value); return *this;}

    /**
     * <p>The suite's start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const{ return m_started; }

    /**
     * <p>The suite's start time.</p>
     */
    inline void SetStarted(const Aws::Utils::DateTime& value) { m_startedHasBeenSet = true; m_started = value; }

    /**
     * <p>The suite's start time.</p>
     */
    inline void SetStarted(Aws::Utils::DateTime&& value) { m_startedHasBeenSet = true; m_started = value; }

    /**
     * <p>The suite's start time.</p>
     */
    inline Suite& WithStarted(const Aws::Utils::DateTime& value) { SetStarted(value); return *this;}

    /**
     * <p>The suite's start time.</p>
     */
    inline Suite& WithStarted(Aws::Utils::DateTime&& value) { SetStarted(value); return *this;}

    /**
     * <p>The suite's stop time.</p>
     */
    inline const Aws::Utils::DateTime& GetStopped() const{ return m_stopped; }

    /**
     * <p>The suite's stop time.</p>
     */
    inline void SetStopped(const Aws::Utils::DateTime& value) { m_stoppedHasBeenSet = true; m_stopped = value; }

    /**
     * <p>The suite's stop time.</p>
     */
    inline void SetStopped(Aws::Utils::DateTime&& value) { m_stoppedHasBeenSet = true; m_stopped = value; }

    /**
     * <p>The suite's stop time.</p>
     */
    inline Suite& WithStopped(const Aws::Utils::DateTime& value) { SetStopped(value); return *this;}

    /**
     * <p>The suite's stop time.</p>
     */
    inline Suite& WithStopped(Aws::Utils::DateTime&& value) { SetStopped(value); return *this;}

    /**
     * <p>The suite's result counters.</p>
     */
    inline const Counters& GetCounters() const{ return m_counters; }

    /**
     * <p>The suite's result counters.</p>
     */
    inline void SetCounters(const Counters& value) { m_countersHasBeenSet = true; m_counters = value; }

    /**
     * <p>The suite's result counters.</p>
     */
    inline void SetCounters(Counters&& value) { m_countersHasBeenSet = true; m_counters = value; }

    /**
     * <p>The suite's result counters.</p>
     */
    inline Suite& WithCounters(const Counters& value) { SetCounters(value); return *this;}

    /**
     * <p>The suite's result counters.</p>
     */
    inline Suite& WithCounters(Counters&& value) { SetCounters(value); return *this;}

    /**
     * <p>A message about the suite's result.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the suite's result.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the suite's result.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the suite's result.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message about the suite's result.</p>
     */
    inline Suite& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the suite's result.</p>
     */
    inline Suite& WithMessage(Aws::String&& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the suite's result.</p>
     */
    inline Suite& WithMessage(const char* value) { SetMessage(value); return *this;}

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test
     * suite.</p>
     */
    inline const DeviceMinutes& GetDeviceMinutes() const{ return m_deviceMinutes; }

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test
     * suite.</p>
     */
    inline void SetDeviceMinutes(const DeviceMinutes& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = value; }

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test
     * suite.</p>
     */
    inline void SetDeviceMinutes(DeviceMinutes&& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = value; }

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test
     * suite.</p>
     */
    inline Suite& WithDeviceMinutes(const DeviceMinutes& value) { SetDeviceMinutes(value); return *this;}

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test
     * suite.</p>
     */
    inline Suite& WithDeviceMinutes(DeviceMinutes&& value) { SetDeviceMinutes(value); return *this;}

  private:
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    TestType m_type;
    bool m_typeHasBeenSet;
    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet;
    ExecutionStatus m_status;
    bool m_statusHasBeenSet;
    ExecutionResult m_result;
    bool m_resultHasBeenSet;
    Aws::Utils::DateTime m_started;
    bool m_startedHasBeenSet;
    Aws::Utils::DateTime m_stopped;
    bool m_stoppedHasBeenSet;
    Counters m_counters;
    bool m_countersHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
    DeviceMinutes m_deviceMinutes;
    bool m_deviceMinutesHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
