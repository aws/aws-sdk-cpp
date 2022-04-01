﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents a condition that is evaluated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Test">AWS API
   * Reference</a></p>
   */
  class AWS_DEVICEFARM_API Test
  {
  public:
    Test();
    Test(Aws::Utils::Json::JsonView jsonValue);
    Test& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The test's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The test's ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The test's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The test's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The test's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The test's ARN.</p>
     */
    inline Test& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The test's ARN.</p>
     */
    inline Test& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The test's ARN.</p>
     */
    inline Test& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The test's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The test's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The test's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The test's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The test's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The test's name.</p>
     */
    inline Test& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The test's name.</p>
     */
    inline Test& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The test's name.</p>
     */
    inline Test& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>BUILTIN_EXPLORER</p>  <p>For Android, an
     * app explorer that traverses an Android app, interacting with it and capturing
     * screenshots at the same time.</p>  </li> <li> <p>APPIUM_JAVA_JUNIT</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
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
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>BUILTIN_EXPLORER</p>  <p>For Android, an
     * app explorer that traverses an Android app, interacting with it and capturing
     * screenshots at the same time.</p>  </li> <li> <p>APPIUM_JAVA_JUNIT</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
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
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>BUILTIN_EXPLORER</p>  <p>For Android, an
     * app explorer that traverses an Android app, interacting with it and capturing
     * screenshots at the same time.</p>  </li> <li> <p>APPIUM_JAVA_JUNIT</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
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
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>BUILTIN_EXPLORER</p>  <p>For Android, an
     * app explorer that traverses an Android app, interacting with it and capturing
     * screenshots at the same time.</p>  </li> <li> <p>APPIUM_JAVA_JUNIT</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
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
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>BUILTIN_EXPLORER</p>  <p>For Android, an
     * app explorer that traverses an Android app, interacting with it and capturing
     * screenshots at the same time.</p>  </li> <li> <p>APPIUM_JAVA_JUNIT</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
     * <p>APPIUM_NODE</p> </li> <li> <p>APPIUM_RUBY</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON</p> </li> <li> <p>APPIUM_WEB_NODE</p> </li> <li>
     * <p>APPIUM_WEB_RUBY</p> </li> <li> <p>CALABASH</p> </li> <li>
     * <p>INSTRUMENTATION</p> </li> <li> <p>UIAUTOMATION</p> </li> <li>
     * <p>UIAUTOMATOR</p> </li> <li> <p>XCTEST</p> </li> <li> <p>XCTEST_UI</p> </li>
     * </ul>
     */
    inline Test& WithType(const TestType& value) { SetType(value); return *this;}

    /**
     * <p>The test's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>BUILTIN_EXPLORER</p>  <p>For Android, an
     * app explorer that traverses an Android app, interacting with it and capturing
     * screenshots at the same time.</p>  </li> <li> <p>APPIUM_JAVA_JUNIT</p>
     * </li> <li> <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
     * <p>APPIUM_NODE</p> </li> <li> <p>APPIUM_RUBY</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON</p> </li> <li> <p>APPIUM_WEB_NODE</p> </li> <li>
     * <p>APPIUM_WEB_RUBY</p> </li> <li> <p>CALABASH</p> </li> <li>
     * <p>INSTRUMENTATION</p> </li> <li> <p>UIAUTOMATION</p> </li> <li>
     * <p>UIAUTOMATOR</p> </li> <li> <p>XCTEST</p> </li> <li> <p>XCTEST_UI</p> </li>
     * </ul>
     */
    inline Test& WithType(TestType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>When the test was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>When the test was created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>When the test was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>When the test was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>When the test was created.</p>
     */
    inline Test& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>When the test was created.</p>
     */
    inline Test& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The test's status.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li>
     * <p>PENDING_DEVICE</p> </li> <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p>
     * </li> <li> <p>PREPARING</p> </li> <li> <p>RUNNING</p> </li> <li>
     * <p>COMPLETED</p> </li> <li> <p>STOPPING</p> </li> </ul>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The test's status.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li>
     * <p>PENDING_DEVICE</p> </li> <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p>
     * </li> <li> <p>PREPARING</p> </li> <li> <p>RUNNING</p> </li> <li>
     * <p>COMPLETED</p> </li> <li> <p>STOPPING</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The test's status.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li>
     * <p>PENDING_DEVICE</p> </li> <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p>
     * </li> <li> <p>PREPARING</p> </li> <li> <p>RUNNING</p> </li> <li>
     * <p>COMPLETED</p> </li> <li> <p>STOPPING</p> </li> </ul>
     */
    inline void SetStatus(const ExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The test's status.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li>
     * <p>PENDING_DEVICE</p> </li> <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p>
     * </li> <li> <p>PREPARING</p> </li> <li> <p>RUNNING</p> </li> <li>
     * <p>COMPLETED</p> </li> <li> <p>STOPPING</p> </li> </ul>
     */
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The test's status.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li>
     * <p>PENDING_DEVICE</p> </li> <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p>
     * </li> <li> <p>PREPARING</p> </li> <li> <p>RUNNING</p> </li> <li>
     * <p>COMPLETED</p> </li> <li> <p>STOPPING</p> </li> </ul>
     */
    inline Test& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The test's status.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li>
     * <p>PENDING_DEVICE</p> </li> <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p>
     * </li> <li> <p>PREPARING</p> </li> <li> <p>RUNNING</p> </li> <li>
     * <p>COMPLETED</p> </li> <li> <p>STOPPING</p> </li> </ul>
     */
    inline Test& WithStatus(ExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The test's result.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li>
     * <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li>
     * <p>STOPPED</p> </li> </ul>
     */
    inline const ExecutionResult& GetResult() const{ return m_result; }

    /**
     * <p>The test's result.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li>
     * <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li>
     * <p>STOPPED</p> </li> </ul>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>The test's result.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li>
     * <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li>
     * <p>STOPPED</p> </li> </ul>
     */
    inline void SetResult(const ExecutionResult& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The test's result.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li>
     * <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li>
     * <p>STOPPED</p> </li> </ul>
     */
    inline void SetResult(ExecutionResult&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>The test's result.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li>
     * <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li>
     * <p>STOPPED</p> </li> </ul>
     */
    inline Test& WithResult(const ExecutionResult& value) { SetResult(value); return *this;}

    /**
     * <p>The test's result.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>PENDING</p> </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li>
     * <p>FAILED</p> </li> <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li>
     * <p>STOPPED</p> </li> </ul>
     */
    inline Test& WithResult(ExecutionResult&& value) { SetResult(std::move(value)); return *this;}


    /**
     * <p>The test's start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const{ return m_started; }

    /**
     * <p>The test's start time.</p>
     */
    inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }

    /**
     * <p>The test's start time.</p>
     */
    inline void SetStarted(const Aws::Utils::DateTime& value) { m_startedHasBeenSet = true; m_started = value; }

    /**
     * <p>The test's start time.</p>
     */
    inline void SetStarted(Aws::Utils::DateTime&& value) { m_startedHasBeenSet = true; m_started = std::move(value); }

    /**
     * <p>The test's start time.</p>
     */
    inline Test& WithStarted(const Aws::Utils::DateTime& value) { SetStarted(value); return *this;}

    /**
     * <p>The test's start time.</p>
     */
    inline Test& WithStarted(Aws::Utils::DateTime&& value) { SetStarted(std::move(value)); return *this;}


    /**
     * <p>The test's stop time.</p>
     */
    inline const Aws::Utils::DateTime& GetStopped() const{ return m_stopped; }

    /**
     * <p>The test's stop time.</p>
     */
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }

    /**
     * <p>The test's stop time.</p>
     */
    inline void SetStopped(const Aws::Utils::DateTime& value) { m_stoppedHasBeenSet = true; m_stopped = value; }

    /**
     * <p>The test's stop time.</p>
     */
    inline void SetStopped(Aws::Utils::DateTime&& value) { m_stoppedHasBeenSet = true; m_stopped = std::move(value); }

    /**
     * <p>The test's stop time.</p>
     */
    inline Test& WithStopped(const Aws::Utils::DateTime& value) { SetStopped(value); return *this;}

    /**
     * <p>The test's stop time.</p>
     */
    inline Test& WithStopped(Aws::Utils::DateTime&& value) { SetStopped(std::move(value)); return *this;}


    /**
     * <p>The test's result counters.</p>
     */
    inline const Counters& GetCounters() const{ return m_counters; }

    /**
     * <p>The test's result counters.</p>
     */
    inline bool CountersHasBeenSet() const { return m_countersHasBeenSet; }

    /**
     * <p>The test's result counters.</p>
     */
    inline void SetCounters(const Counters& value) { m_countersHasBeenSet = true; m_counters = value; }

    /**
     * <p>The test's result counters.</p>
     */
    inline void SetCounters(Counters&& value) { m_countersHasBeenSet = true; m_counters = std::move(value); }

    /**
     * <p>The test's result counters.</p>
     */
    inline Test& WithCounters(const Counters& value) { SetCounters(value); return *this;}

    /**
     * <p>The test's result counters.</p>
     */
    inline Test& WithCounters(Counters&& value) { SetCounters(std::move(value)); return *this;}


    /**
     * <p>A message about the test's result.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the test's result.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message about the test's result.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the test's result.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message about the test's result.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message about the test's result.</p>
     */
    inline Test& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the test's result.</p>
     */
    inline Test& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message about the test's result.</p>
     */
    inline Test& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test.</p>
     */
    inline const DeviceMinutes& GetDeviceMinutes() const{ return m_deviceMinutes; }

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test.</p>
     */
    inline bool DeviceMinutesHasBeenSet() const { return m_deviceMinutesHasBeenSet; }

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test.</p>
     */
    inline void SetDeviceMinutes(const DeviceMinutes& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = value; }

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test.</p>
     */
    inline void SetDeviceMinutes(DeviceMinutes&& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = std::move(value); }

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test.</p>
     */
    inline Test& WithDeviceMinutes(const DeviceMinutes& value) { SetDeviceMinutes(value); return *this;}

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test.</p>
     */
    inline Test& WithDeviceMinutes(DeviceMinutes&& value) { SetDeviceMinutes(std::move(value)); return *this;}

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
