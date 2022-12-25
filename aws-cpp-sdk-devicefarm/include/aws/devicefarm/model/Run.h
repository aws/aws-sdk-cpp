/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestType.h>
#include <aws/devicefarm/model/DevicePlatform.h>
#include <aws/core/utils/DateTime.h>
#include <aws/devicefarm/model/ExecutionStatus.h>
#include <aws/devicefarm/model/ExecutionResult.h>
#include <aws/devicefarm/model/Counters.h>
#include <aws/devicefarm/model/BillingMethod.h>
#include <aws/devicefarm/model/DeviceMinutes.h>
#include <aws/devicefarm/model/NetworkProfile.h>
#include <aws/devicefarm/model/ExecutionResultCode.h>
#include <aws/devicefarm/model/Radios.h>
#include <aws/devicefarm/model/Location.h>
#include <aws/devicefarm/model/CustomerArtifactPaths.h>
#include <aws/devicefarm/model/DeviceSelectionResult.h>
#include <aws/devicefarm/model/VpcConfig.h>
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
   * <p>Represents a test run on a set of devices with a given app package, test
   * parameters, and so on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/Run">AWS API
   * Reference</a></p>
   */
  class Run
  {
  public:
    AWS_DEVICEFARM_API Run();
    AWS_DEVICEFARM_API Run(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Run& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The run's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The run's ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The run's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The run's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The run's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The run's ARN.</p>
     */
    inline Run& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The run's ARN.</p>
     */
    inline Run& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The run's ARN.</p>
     */
    inline Run& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The run's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The run's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The run's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The run's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The run's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The run's name.</p>
     */
    inline Run& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The run's name.</p>
     */
    inline Run& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The run's name.</p>
     */
    inline Run& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The run's type.</p> <p>Must be one of the following values:</p> <ul> <li>
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
     * <p>The run's type.</p> <p>Must be one of the following values:</p> <ul> <li>
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
     * <p>The run's type.</p> <p>Must be one of the following values:</p> <ul> <li>
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
     * <p>The run's type.</p> <p>Must be one of the following values:</p> <ul> <li>
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
     * <p>The run's type.</p> <p>Must be one of the following values:</p> <ul> <li>
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
    inline Run& WithType(const TestType& value) { SetType(value); return *this;}

    /**
     * <p>The run's type.</p> <p>Must be one of the following values:</p> <ul> <li>
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
    inline Run& WithType(TestType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The run's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID</p> </li> <li> <p>IOS</p> </li> </ul>
     */
    inline const DevicePlatform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The run's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID</p> </li> <li> <p>IOS</p> </li> </ul>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The run's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID</p> </li> <li> <p>IOS</p> </li> </ul>
     */
    inline void SetPlatform(const DevicePlatform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The run's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID</p> </li> <li> <p>IOS</p> </li> </ul>
     */
    inline void SetPlatform(DevicePlatform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The run's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID</p> </li> <li> <p>IOS</p> </li> </ul>
     */
    inline Run& WithPlatform(const DevicePlatform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The run's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID</p> </li> <li> <p>IOS</p> </li> </ul>
     */
    inline Run& WithPlatform(DevicePlatform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>When the run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>When the run was created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>When the run was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>When the run was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>When the run was created.</p>
     */
    inline Run& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>When the run was created.</p>
     */
    inline Run& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The run's status.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li> <p>PENDING_DEVICE</p> </li>
     * <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p> </li> <li> <p>PREPARING</p>
     * </li> <li> <p>RUNNING</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>STOPPING</p>
     * </li> </ul>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The run's status.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li> <p>PENDING_DEVICE</p> </li>
     * <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p> </li> <li> <p>PREPARING</p>
     * </li> <li> <p>RUNNING</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>STOPPING</p>
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The run's status.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li> <p>PENDING_DEVICE</p> </li>
     * <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p> </li> <li> <p>PREPARING</p>
     * </li> <li> <p>RUNNING</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>STOPPING</p>
     * </li> </ul>
     */
    inline void SetStatus(const ExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The run's status.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li> <p>PENDING_DEVICE</p> </li>
     * <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p> </li> <li> <p>PREPARING</p>
     * </li> <li> <p>RUNNING</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>STOPPING</p>
     * </li> </ul>
     */
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The run's status.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li> <p>PENDING_DEVICE</p> </li>
     * <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p> </li> <li> <p>PREPARING</p>
     * </li> <li> <p>RUNNING</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>STOPPING</p>
     * </li> </ul>
     */
    inline Run& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The run's status.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li> <p>PENDING_DEVICE</p> </li>
     * <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p> </li> <li> <p>PREPARING</p>
     * </li> <li> <p>RUNNING</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>STOPPING</p>
     * </li> </ul>
     */
    inline Run& WithStatus(ExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The run's result.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li> <p>FAILED</p> </li>
     * <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li> <p>STOPPED</p> </li>
     * </ul>
     */
    inline const ExecutionResult& GetResult() const{ return m_result; }

    /**
     * <p>The run's result.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li> <p>FAILED</p> </li>
     * <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li> <p>STOPPED</p> </li>
     * </ul>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>The run's result.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li> <p>FAILED</p> </li>
     * <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li> <p>STOPPED</p> </li>
     * </ul>
     */
    inline void SetResult(const ExecutionResult& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The run's result.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li> <p>FAILED</p> </li>
     * <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li> <p>STOPPED</p> </li>
     * </ul>
     */
    inline void SetResult(ExecutionResult&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>The run's result.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li> <p>FAILED</p> </li>
     * <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li> <p>STOPPED</p> </li>
     * </ul>
     */
    inline Run& WithResult(const ExecutionResult& value) { SetResult(value); return *this;}

    /**
     * <p>The run's result.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li> <p>FAILED</p> </li>
     * <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li> <p>STOPPED</p> </li>
     * </ul>
     */
    inline Run& WithResult(ExecutionResult&& value) { SetResult(std::move(value)); return *this;}


    /**
     * <p>The run's start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const{ return m_started; }

    /**
     * <p>The run's start time.</p>
     */
    inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }

    /**
     * <p>The run's start time.</p>
     */
    inline void SetStarted(const Aws::Utils::DateTime& value) { m_startedHasBeenSet = true; m_started = value; }

    /**
     * <p>The run's start time.</p>
     */
    inline void SetStarted(Aws::Utils::DateTime&& value) { m_startedHasBeenSet = true; m_started = std::move(value); }

    /**
     * <p>The run's start time.</p>
     */
    inline Run& WithStarted(const Aws::Utils::DateTime& value) { SetStarted(value); return *this;}

    /**
     * <p>The run's start time.</p>
     */
    inline Run& WithStarted(Aws::Utils::DateTime&& value) { SetStarted(std::move(value)); return *this;}


    /**
     * <p>The run's stop time.</p>
     */
    inline const Aws::Utils::DateTime& GetStopped() const{ return m_stopped; }

    /**
     * <p>The run's stop time.</p>
     */
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }

    /**
     * <p>The run's stop time.</p>
     */
    inline void SetStopped(const Aws::Utils::DateTime& value) { m_stoppedHasBeenSet = true; m_stopped = value; }

    /**
     * <p>The run's stop time.</p>
     */
    inline void SetStopped(Aws::Utils::DateTime&& value) { m_stoppedHasBeenSet = true; m_stopped = std::move(value); }

    /**
     * <p>The run's stop time.</p>
     */
    inline Run& WithStopped(const Aws::Utils::DateTime& value) { SetStopped(value); return *this;}

    /**
     * <p>The run's stop time.</p>
     */
    inline Run& WithStopped(Aws::Utils::DateTime&& value) { SetStopped(std::move(value)); return *this;}


    /**
     * <p>The run's result counters.</p>
     */
    inline const Counters& GetCounters() const{ return m_counters; }

    /**
     * <p>The run's result counters.</p>
     */
    inline bool CountersHasBeenSet() const { return m_countersHasBeenSet; }

    /**
     * <p>The run's result counters.</p>
     */
    inline void SetCounters(const Counters& value) { m_countersHasBeenSet = true; m_counters = value; }

    /**
     * <p>The run's result counters.</p>
     */
    inline void SetCounters(Counters&& value) { m_countersHasBeenSet = true; m_counters = std::move(value); }

    /**
     * <p>The run's result counters.</p>
     */
    inline Run& WithCounters(const Counters& value) { SetCounters(value); return *this;}

    /**
     * <p>The run's result counters.</p>
     */
    inline Run& WithCounters(Counters&& value) { SetCounters(std::move(value)); return *this;}


    /**
     * <p>A message about the run's result.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message about the run's result.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message about the run's result.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message about the run's result.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message about the run's result.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message about the run's result.</p>
     */
    inline Run& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message about the run's result.</p>
     */
    inline Run& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message about the run's result.</p>
     */
    inline Run& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The total number of jobs for the run.</p>
     */
    inline int GetTotalJobs() const{ return m_totalJobs; }

    /**
     * <p>The total number of jobs for the run.</p>
     */
    inline bool TotalJobsHasBeenSet() const { return m_totalJobsHasBeenSet; }

    /**
     * <p>The total number of jobs for the run.</p>
     */
    inline void SetTotalJobs(int value) { m_totalJobsHasBeenSet = true; m_totalJobs = value; }

    /**
     * <p>The total number of jobs for the run.</p>
     */
    inline Run& WithTotalJobs(int value) { SetTotalJobs(value); return *this;}


    /**
     * <p>The total number of completed jobs.</p>
     */
    inline int GetCompletedJobs() const{ return m_completedJobs; }

    /**
     * <p>The total number of completed jobs.</p>
     */
    inline bool CompletedJobsHasBeenSet() const { return m_completedJobsHasBeenSet; }

    /**
     * <p>The total number of completed jobs.</p>
     */
    inline void SetCompletedJobs(int value) { m_completedJobsHasBeenSet = true; m_completedJobs = value; }

    /**
     * <p>The total number of completed jobs.</p>
     */
    inline Run& WithCompletedJobs(int value) { SetCompletedJobs(value); return *this;}


    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>  <p>If you have unmetered device slots, you must
     * set this to <code>unmetered</code> to use them. Otherwise, the run is counted
     * toward metered device minutes.</p> 
     */
    inline const BillingMethod& GetBillingMethod() const{ return m_billingMethod; }

    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>  <p>If you have unmetered device slots, you must
     * set this to <code>unmetered</code> to use them. Otherwise, the run is counted
     * toward metered device minutes.</p> 
     */
    inline bool BillingMethodHasBeenSet() const { return m_billingMethodHasBeenSet; }

    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>  <p>If you have unmetered device slots, you must
     * set this to <code>unmetered</code> to use them. Otherwise, the run is counted
     * toward metered device minutes.</p> 
     */
    inline void SetBillingMethod(const BillingMethod& value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }

    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>  <p>If you have unmetered device slots, you must
     * set this to <code>unmetered</code> to use them. Otherwise, the run is counted
     * toward metered device minutes.</p> 
     */
    inline void SetBillingMethod(BillingMethod&& value) { m_billingMethodHasBeenSet = true; m_billingMethod = std::move(value); }

    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>  <p>If you have unmetered device slots, you must
     * set this to <code>unmetered</code> to use them. Otherwise, the run is counted
     * toward metered device minutes.</p> 
     */
    inline Run& WithBillingMethod(const BillingMethod& value) { SetBillingMethod(value); return *this;}

    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>  <p>If you have unmetered device slots, you must
     * set this to <code>unmetered</code> to use them. Otherwise, the run is counted
     * toward metered device minutes.</p> 
     */
    inline Run& WithBillingMethod(BillingMethod&& value) { SetBillingMethod(std::move(value)); return *this;}


    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test run.</p>
     */
    inline const DeviceMinutes& GetDeviceMinutes() const{ return m_deviceMinutes; }

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test run.</p>
     */
    inline bool DeviceMinutesHasBeenSet() const { return m_deviceMinutesHasBeenSet; }

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test run.</p>
     */
    inline void SetDeviceMinutes(const DeviceMinutes& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = value; }

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test run.</p>
     */
    inline void SetDeviceMinutes(DeviceMinutes&& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = std::move(value); }

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test run.</p>
     */
    inline Run& WithDeviceMinutes(const DeviceMinutes& value) { SetDeviceMinutes(value); return *this;}

    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test run.</p>
     */
    inline Run& WithDeviceMinutes(DeviceMinutes&& value) { SetDeviceMinutes(std::move(value)); return *this;}


    /**
     * <p>The network profile being used for a test run.</p>
     */
    inline const NetworkProfile& GetNetworkProfile() const{ return m_networkProfile; }

    /**
     * <p>The network profile being used for a test run.</p>
     */
    inline bool NetworkProfileHasBeenSet() const { return m_networkProfileHasBeenSet; }

    /**
     * <p>The network profile being used for a test run.</p>
     */
    inline void SetNetworkProfile(const NetworkProfile& value) { m_networkProfileHasBeenSet = true; m_networkProfile = value; }

    /**
     * <p>The network profile being used for a test run.</p>
     */
    inline void SetNetworkProfile(NetworkProfile&& value) { m_networkProfileHasBeenSet = true; m_networkProfile = std::move(value); }

    /**
     * <p>The network profile being used for a test run.</p>
     */
    inline Run& WithNetworkProfile(const NetworkProfile& value) { SetNetworkProfile(value); return *this;}

    /**
     * <p>The network profile being used for a test run.</p>
     */
    inline Run& WithNetworkProfile(NetworkProfile&& value) { SetNetworkProfile(std::move(value)); return *this;}


    /**
     * <p>Read-only URL for an object in an S3 bucket where you can get the parsing
     * results of the test package. If the test package doesn't parse, the reason why
     * it doesn't parse appears in the file that this URL points to.</p>
     */
    inline const Aws::String& GetParsingResultUrl() const{ return m_parsingResultUrl; }

    /**
     * <p>Read-only URL for an object in an S3 bucket where you can get the parsing
     * results of the test package. If the test package doesn't parse, the reason why
     * it doesn't parse appears in the file that this URL points to.</p>
     */
    inline bool ParsingResultUrlHasBeenSet() const { return m_parsingResultUrlHasBeenSet; }

    /**
     * <p>Read-only URL for an object in an S3 bucket where you can get the parsing
     * results of the test package. If the test package doesn't parse, the reason why
     * it doesn't parse appears in the file that this URL points to.</p>
     */
    inline void SetParsingResultUrl(const Aws::String& value) { m_parsingResultUrlHasBeenSet = true; m_parsingResultUrl = value; }

    /**
     * <p>Read-only URL for an object in an S3 bucket where you can get the parsing
     * results of the test package. If the test package doesn't parse, the reason why
     * it doesn't parse appears in the file that this URL points to.</p>
     */
    inline void SetParsingResultUrl(Aws::String&& value) { m_parsingResultUrlHasBeenSet = true; m_parsingResultUrl = std::move(value); }

    /**
     * <p>Read-only URL for an object in an S3 bucket where you can get the parsing
     * results of the test package. If the test package doesn't parse, the reason why
     * it doesn't parse appears in the file that this URL points to.</p>
     */
    inline void SetParsingResultUrl(const char* value) { m_parsingResultUrlHasBeenSet = true; m_parsingResultUrl.assign(value); }

    /**
     * <p>Read-only URL for an object in an S3 bucket where you can get the parsing
     * results of the test package. If the test package doesn't parse, the reason why
     * it doesn't parse appears in the file that this URL points to.</p>
     */
    inline Run& WithParsingResultUrl(const Aws::String& value) { SetParsingResultUrl(value); return *this;}

    /**
     * <p>Read-only URL for an object in an S3 bucket where you can get the parsing
     * results of the test package. If the test package doesn't parse, the reason why
     * it doesn't parse appears in the file that this URL points to.</p>
     */
    inline Run& WithParsingResultUrl(Aws::String&& value) { SetParsingResultUrl(std::move(value)); return *this;}

    /**
     * <p>Read-only URL for an object in an S3 bucket where you can get the parsing
     * results of the test package. If the test package doesn't parse, the reason why
     * it doesn't parse appears in the file that this URL points to.</p>
     */
    inline Run& WithParsingResultUrl(const char* value) { SetParsingResultUrl(value); return *this;}


    /**
     * <p>Supporting field for the result field. Set only if <code>result</code> is
     * <code>SKIPPED</code>. <code>PARSING_FAILED</code> if the result is skipped
     * because of test package parsing failure.</p>
     */
    inline const ExecutionResultCode& GetResultCode() const{ return m_resultCode; }

    /**
     * <p>Supporting field for the result field. Set only if <code>result</code> is
     * <code>SKIPPED</code>. <code>PARSING_FAILED</code> if the result is skipped
     * because of test package parsing failure.</p>
     */
    inline bool ResultCodeHasBeenSet() const { return m_resultCodeHasBeenSet; }

    /**
     * <p>Supporting field for the result field. Set only if <code>result</code> is
     * <code>SKIPPED</code>. <code>PARSING_FAILED</code> if the result is skipped
     * because of test package parsing failure.</p>
     */
    inline void SetResultCode(const ExecutionResultCode& value) { m_resultCodeHasBeenSet = true; m_resultCode = value; }

    /**
     * <p>Supporting field for the result field. Set only if <code>result</code> is
     * <code>SKIPPED</code>. <code>PARSING_FAILED</code> if the result is skipped
     * because of test package parsing failure.</p>
     */
    inline void SetResultCode(ExecutionResultCode&& value) { m_resultCodeHasBeenSet = true; m_resultCode = std::move(value); }

    /**
     * <p>Supporting field for the result field. Set only if <code>result</code> is
     * <code>SKIPPED</code>. <code>PARSING_FAILED</code> if the result is skipped
     * because of test package parsing failure.</p>
     */
    inline Run& WithResultCode(const ExecutionResultCode& value) { SetResultCode(value); return *this;}

    /**
     * <p>Supporting field for the result field. Set only if <code>result</code> is
     * <code>SKIPPED</code>. <code>PARSING_FAILED</code> if the result is skipped
     * because of test package parsing failure.</p>
     */
    inline Run& WithResultCode(ExecutionResultCode&& value) { SetResultCode(std::move(value)); return *this;}


    /**
     * <p>For fuzz tests, this is a seed to use for randomizing the UI fuzz test. Using
     * the same seed value between tests ensures identical event sequences.</p>
     */
    inline int GetSeed() const{ return m_seed; }

    /**
     * <p>For fuzz tests, this is a seed to use for randomizing the UI fuzz test. Using
     * the same seed value between tests ensures identical event sequences.</p>
     */
    inline bool SeedHasBeenSet() const { return m_seedHasBeenSet; }

    /**
     * <p>For fuzz tests, this is a seed to use for randomizing the UI fuzz test. Using
     * the same seed value between tests ensures identical event sequences.</p>
     */
    inline void SetSeed(int value) { m_seedHasBeenSet = true; m_seed = value; }

    /**
     * <p>For fuzz tests, this is a seed to use for randomizing the UI fuzz test. Using
     * the same seed value between tests ensures identical event sequences.</p>
     */
    inline Run& WithSeed(int value) { SetSeed(value); return *this;}


    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline const Aws::String& GetAppUpload() const{ return m_appUpload; }

    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline bool AppUploadHasBeenSet() const { return m_appUploadHasBeenSet; }

    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline void SetAppUpload(const Aws::String& value) { m_appUploadHasBeenSet = true; m_appUpload = value; }

    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline void SetAppUpload(Aws::String&& value) { m_appUploadHasBeenSet = true; m_appUpload = std::move(value); }

    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline void SetAppUpload(const char* value) { m_appUploadHasBeenSet = true; m_appUpload.assign(value); }

    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline Run& WithAppUpload(const Aws::String& value) { SetAppUpload(value); return *this;}

    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline Run& WithAppUpload(Aws::String&& value) { SetAppUpload(std::move(value)); return *this;}

    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline Run& WithAppUpload(const char* value) { SetAppUpload(value); return *this;}


    /**
     * <p>For fuzz tests, this is the number of events, between 1 and 10000, that the
     * UI fuzz test should perform.</p>
     */
    inline int GetEventCount() const{ return m_eventCount; }

    /**
     * <p>For fuzz tests, this is the number of events, between 1 and 10000, that the
     * UI fuzz test should perform.</p>
     */
    inline bool EventCountHasBeenSet() const { return m_eventCountHasBeenSet; }

    /**
     * <p>For fuzz tests, this is the number of events, between 1 and 10000, that the
     * UI fuzz test should perform.</p>
     */
    inline void SetEventCount(int value) { m_eventCountHasBeenSet = true; m_eventCount = value; }

    /**
     * <p>For fuzz tests, this is the number of events, between 1 and 10000, that the
     * UI fuzz test should perform.</p>
     */
    inline Run& WithEventCount(int value) { SetEventCount(value); return *this;}


    /**
     * <p>The number of minutes the job executes before it times out.</p>
     */
    inline int GetJobTimeoutMinutes() const{ return m_jobTimeoutMinutes; }

    /**
     * <p>The number of minutes the job executes before it times out.</p>
     */
    inline bool JobTimeoutMinutesHasBeenSet() const { return m_jobTimeoutMinutesHasBeenSet; }

    /**
     * <p>The number of minutes the job executes before it times out.</p>
     */
    inline void SetJobTimeoutMinutes(int value) { m_jobTimeoutMinutesHasBeenSet = true; m_jobTimeoutMinutes = value; }

    /**
     * <p>The number of minutes the job executes before it times out.</p>
     */
    inline Run& WithJobTimeoutMinutes(int value) { SetJobTimeoutMinutes(value); return *this;}


    /**
     * <p>The ARN of the device pool for the run.</p>
     */
    inline const Aws::String& GetDevicePoolArn() const{ return m_devicePoolArn; }

    /**
     * <p>The ARN of the device pool for the run.</p>
     */
    inline bool DevicePoolArnHasBeenSet() const { return m_devicePoolArnHasBeenSet; }

    /**
     * <p>The ARN of the device pool for the run.</p>
     */
    inline void SetDevicePoolArn(const Aws::String& value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn = value; }

    /**
     * <p>The ARN of the device pool for the run.</p>
     */
    inline void SetDevicePoolArn(Aws::String&& value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn = std::move(value); }

    /**
     * <p>The ARN of the device pool for the run.</p>
     */
    inline void SetDevicePoolArn(const char* value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn.assign(value); }

    /**
     * <p>The ARN of the device pool for the run.</p>
     */
    inline Run& WithDevicePoolArn(const Aws::String& value) { SetDevicePoolArn(value); return *this;}

    /**
     * <p>The ARN of the device pool for the run.</p>
     */
    inline Run& WithDevicePoolArn(Aws::String&& value) { SetDevicePoolArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the device pool for the run.</p>
     */
    inline Run& WithDevicePoolArn(const char* value) { SetDevicePoolArn(value); return *this;}


    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline Run& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline Run& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}

    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline Run& WithLocale(const char* value) { SetLocale(value); return *this;}


    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline const Radios& GetRadios() const{ return m_radios; }

    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline bool RadiosHasBeenSet() const { return m_radiosHasBeenSet; }

    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline void SetRadios(const Radios& value) { m_radiosHasBeenSet = true; m_radios = value; }

    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline void SetRadios(Radios&& value) { m_radiosHasBeenSet = true; m_radios = std::move(value); }

    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline Run& WithRadios(const Radios& value) { SetRadios(value); return *this;}

    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline Run& WithRadios(Radios&& value) { SetRadios(std::move(value)); return *this;}


    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }

    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline Run& WithLocation(const Location& value) { SetLocation(value); return *this;}

    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline Run& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>Output <code>CustomerArtifactPaths</code> object for the test run.</p>
     */
    inline const CustomerArtifactPaths& GetCustomerArtifactPaths() const{ return m_customerArtifactPaths; }

    /**
     * <p>Output <code>CustomerArtifactPaths</code> object for the test run.</p>
     */
    inline bool CustomerArtifactPathsHasBeenSet() const { return m_customerArtifactPathsHasBeenSet; }

    /**
     * <p>Output <code>CustomerArtifactPaths</code> object for the test run.</p>
     */
    inline void SetCustomerArtifactPaths(const CustomerArtifactPaths& value) { m_customerArtifactPathsHasBeenSet = true; m_customerArtifactPaths = value; }

    /**
     * <p>Output <code>CustomerArtifactPaths</code> object for the test run.</p>
     */
    inline void SetCustomerArtifactPaths(CustomerArtifactPaths&& value) { m_customerArtifactPathsHasBeenSet = true; m_customerArtifactPaths = std::move(value); }

    /**
     * <p>Output <code>CustomerArtifactPaths</code> object for the test run.</p>
     */
    inline Run& WithCustomerArtifactPaths(const CustomerArtifactPaths& value) { SetCustomerArtifactPaths(value); return *this;}

    /**
     * <p>Output <code>CustomerArtifactPaths</code> object for the test run.</p>
     */
    inline Run& WithCustomerArtifactPaths(CustomerArtifactPaths&& value) { SetCustomerArtifactPaths(std::move(value)); return *this;}


    /**
     * <p>The Device Farm console URL for the recording of the run.</p>
     */
    inline const Aws::String& GetWebUrl() const{ return m_webUrl; }

    /**
     * <p>The Device Farm console URL for the recording of the run.</p>
     */
    inline bool WebUrlHasBeenSet() const { return m_webUrlHasBeenSet; }

    /**
     * <p>The Device Farm console URL for the recording of the run.</p>
     */
    inline void SetWebUrl(const Aws::String& value) { m_webUrlHasBeenSet = true; m_webUrl = value; }

    /**
     * <p>The Device Farm console URL for the recording of the run.</p>
     */
    inline void SetWebUrl(Aws::String&& value) { m_webUrlHasBeenSet = true; m_webUrl = std::move(value); }

    /**
     * <p>The Device Farm console URL for the recording of the run.</p>
     */
    inline void SetWebUrl(const char* value) { m_webUrlHasBeenSet = true; m_webUrl.assign(value); }

    /**
     * <p>The Device Farm console URL for the recording of the run.</p>
     */
    inline Run& WithWebUrl(const Aws::String& value) { SetWebUrl(value); return *this;}

    /**
     * <p>The Device Farm console URL for the recording of the run.</p>
     */
    inline Run& WithWebUrl(Aws::String&& value) { SetWebUrl(std::move(value)); return *this;}

    /**
     * <p>The Device Farm console URL for the recording of the run.</p>
     */
    inline Run& WithWebUrl(const char* value) { SetWebUrl(value); return *this;}


    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm does not sign
     * your app again. For public devices, Device Farm always signs your apps
     * again.</p> <p>For more information about how Device Farm re-signs your apps, see
     * <a href="http://aws.amazon.com/device-farm/faqs/">Do you modify my app?</a> in
     * the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool GetSkipAppResign() const{ return m_skipAppResign; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm does not sign
     * your app again. For public devices, Device Farm always signs your apps
     * again.</p> <p>For more information about how Device Farm re-signs your apps, see
     * <a href="http://aws.amazon.com/device-farm/faqs/">Do you modify my app?</a> in
     * the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool SkipAppResignHasBeenSet() const { return m_skipAppResignHasBeenSet; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm does not sign
     * your app again. For public devices, Device Farm always signs your apps
     * again.</p> <p>For more information about how Device Farm re-signs your apps, see
     * <a href="http://aws.amazon.com/device-farm/faqs/">Do you modify my app?</a> in
     * the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline void SetSkipAppResign(bool value) { m_skipAppResignHasBeenSet = true; m_skipAppResign = value; }

    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm does not sign
     * your app again. For public devices, Device Farm always signs your apps
     * again.</p> <p>For more information about how Device Farm re-signs your apps, see
     * <a href="http://aws.amazon.com/device-farm/faqs/">Do you modify my app?</a> in
     * the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline Run& WithSkipAppResign(bool value) { SetSkipAppResign(value); return *this;}


    /**
     * <p>The ARN of the YAML-formatted test specification for the run.</p>
     */
    inline const Aws::String& GetTestSpecArn() const{ return m_testSpecArn; }

    /**
     * <p>The ARN of the YAML-formatted test specification for the run.</p>
     */
    inline bool TestSpecArnHasBeenSet() const { return m_testSpecArnHasBeenSet; }

    /**
     * <p>The ARN of the YAML-formatted test specification for the run.</p>
     */
    inline void SetTestSpecArn(const Aws::String& value) { m_testSpecArnHasBeenSet = true; m_testSpecArn = value; }

    /**
     * <p>The ARN of the YAML-formatted test specification for the run.</p>
     */
    inline void SetTestSpecArn(Aws::String&& value) { m_testSpecArnHasBeenSet = true; m_testSpecArn = std::move(value); }

    /**
     * <p>The ARN of the YAML-formatted test specification for the run.</p>
     */
    inline void SetTestSpecArn(const char* value) { m_testSpecArnHasBeenSet = true; m_testSpecArn.assign(value); }

    /**
     * <p>The ARN of the YAML-formatted test specification for the run.</p>
     */
    inline Run& WithTestSpecArn(const Aws::String& value) { SetTestSpecArn(value); return *this;}

    /**
     * <p>The ARN of the YAML-formatted test specification for the run.</p>
     */
    inline Run& WithTestSpecArn(Aws::String&& value) { SetTestSpecArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the YAML-formatted test specification for the run.</p>
     */
    inline Run& WithTestSpecArn(const char* value) { SetTestSpecArn(value); return *this;}


    /**
     * <p>The results of a device filter used to select the devices for a test run.</p>
     */
    inline const DeviceSelectionResult& GetDeviceSelectionResult() const{ return m_deviceSelectionResult; }

    /**
     * <p>The results of a device filter used to select the devices for a test run.</p>
     */
    inline bool DeviceSelectionResultHasBeenSet() const { return m_deviceSelectionResultHasBeenSet; }

    /**
     * <p>The results of a device filter used to select the devices for a test run.</p>
     */
    inline void SetDeviceSelectionResult(const DeviceSelectionResult& value) { m_deviceSelectionResultHasBeenSet = true; m_deviceSelectionResult = value; }

    /**
     * <p>The results of a device filter used to select the devices for a test run.</p>
     */
    inline void SetDeviceSelectionResult(DeviceSelectionResult&& value) { m_deviceSelectionResultHasBeenSet = true; m_deviceSelectionResult = std::move(value); }

    /**
     * <p>The results of a device filter used to select the devices for a test run.</p>
     */
    inline Run& WithDeviceSelectionResult(const DeviceSelectionResult& value) { SetDeviceSelectionResult(value); return *this;}

    /**
     * <p>The results of a device filter used to select the devices for a test run.</p>
     */
    inline Run& WithDeviceSelectionResult(DeviceSelectionResult&& value) { SetDeviceSelectionResult(std::move(value)); return *this;}


    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline Run& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline Run& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TestType m_type;
    bool m_typeHasBeenSet = false;

    DevicePlatform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    ExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    ExecutionResult m_result;
    bool m_resultHasBeenSet = false;

    Aws::Utils::DateTime m_started;
    bool m_startedHasBeenSet = false;

    Aws::Utils::DateTime m_stopped;
    bool m_stoppedHasBeenSet = false;

    Counters m_counters;
    bool m_countersHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_totalJobs;
    bool m_totalJobsHasBeenSet = false;

    int m_completedJobs;
    bool m_completedJobsHasBeenSet = false;

    BillingMethod m_billingMethod;
    bool m_billingMethodHasBeenSet = false;

    DeviceMinutes m_deviceMinutes;
    bool m_deviceMinutesHasBeenSet = false;

    NetworkProfile m_networkProfile;
    bool m_networkProfileHasBeenSet = false;

    Aws::String m_parsingResultUrl;
    bool m_parsingResultUrlHasBeenSet = false;

    ExecutionResultCode m_resultCode;
    bool m_resultCodeHasBeenSet = false;

    int m_seed;
    bool m_seedHasBeenSet = false;

    Aws::String m_appUpload;
    bool m_appUploadHasBeenSet = false;

    int m_eventCount;
    bool m_eventCountHasBeenSet = false;

    int m_jobTimeoutMinutes;
    bool m_jobTimeoutMinutesHasBeenSet = false;

    Aws::String m_devicePoolArn;
    bool m_devicePoolArnHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Radios m_radios;
    bool m_radiosHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;

    CustomerArtifactPaths m_customerArtifactPaths;
    bool m_customerArtifactPathsHasBeenSet = false;

    Aws::String m_webUrl;
    bool m_webUrlHasBeenSet = false;

    bool m_skipAppResign;
    bool m_skipAppResignHasBeenSet = false;

    Aws::String m_testSpecArn;
    bool m_testSpecArnHasBeenSet = false;

    DeviceSelectionResult m_deviceSelectionResult;
    bool m_deviceSelectionResultHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
