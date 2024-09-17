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


    ///@{
    /**
     * <p>The run's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Run& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Run& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Run& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Run& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Run& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Run& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's type.</p> <p>Must be one of the following values:</p> <ul> <li>
     * <p>BUILTIN_FUZZ</p> </li> <li> <p>APPIUM_JAVA_JUNIT</p> </li> <li>
     * <p>APPIUM_JAVA_TESTNG</p> </li> <li> <p>APPIUM_PYTHON</p> </li> <li>
     * <p>APPIUM_NODE</p> </li> <li> <p>APPIUM_RUBY</p> </li> <li>
     * <p>APPIUM_WEB_JAVA_JUNIT</p> </li> <li> <p>APPIUM_WEB_JAVA_TESTNG</p> </li> <li>
     * <p>APPIUM_WEB_PYTHON</p> </li> <li> <p>APPIUM_WEB_NODE</p> </li> <li>
     * <p>APPIUM_WEB_RUBY</p> </li> <li> <p>INSTRUMENTATION</p> </li> <li>
     * <p>XCTEST</p> </li> <li> <p>XCTEST_UI</p> </li> </ul>
     */
    inline const TestType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TestType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TestType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Run& WithType(const TestType& value) { SetType(value); return *this;}
    inline Run& WithType(TestType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID</p> </li> <li> <p>IOS</p> </li> </ul>
     */
    inline const DevicePlatform& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const DevicePlatform& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(DevicePlatform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline Run& WithPlatform(const DevicePlatform& value) { SetPlatform(value); return *this;}
    inline Run& WithPlatform(DevicePlatform&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }
    inline Run& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}
    inline Run& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's status.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li> <p>PENDING_DEVICE</p> </li>
     * <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p> </li> <li> <p>PREPARING</p>
     * </li> <li> <p>RUNNING</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>STOPPING</p>
     * </li> </ul>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Run& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}
    inline Run& WithStatus(ExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's result.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li> <p>FAILED</p> </li>
     * <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li> <p>STOPPED</p> </li>
     * </ul>
     */
    inline const ExecutionResult& GetResult() const{ return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(const ExecutionResult& value) { m_resultHasBeenSet = true; m_result = value; }
    inline void SetResult(ExecutionResult&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }
    inline Run& WithResult(const ExecutionResult& value) { SetResult(value); return *this;}
    inline Run& WithResult(ExecutionResult&& value) { SetResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const{ return m_started; }
    inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }
    inline void SetStarted(const Aws::Utils::DateTime& value) { m_startedHasBeenSet = true; m_started = value; }
    inline void SetStarted(Aws::Utils::DateTime&& value) { m_startedHasBeenSet = true; m_started = std::move(value); }
    inline Run& WithStarted(const Aws::Utils::DateTime& value) { SetStarted(value); return *this;}
    inline Run& WithStarted(Aws::Utils::DateTime&& value) { SetStarted(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's stop time.</p>
     */
    inline const Aws::Utils::DateTime& GetStopped() const{ return m_stopped; }
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }
    inline void SetStopped(const Aws::Utils::DateTime& value) { m_stoppedHasBeenSet = true; m_stopped = value; }
    inline void SetStopped(Aws::Utils::DateTime&& value) { m_stoppedHasBeenSet = true; m_stopped = std::move(value); }
    inline Run& WithStopped(const Aws::Utils::DateTime& value) { SetStopped(value); return *this;}
    inline Run& WithStopped(Aws::Utils::DateTime&& value) { SetStopped(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's result counters.</p>
     */
    inline const Counters& GetCounters() const{ return m_counters; }
    inline bool CountersHasBeenSet() const { return m_countersHasBeenSet; }
    inline void SetCounters(const Counters& value) { m_countersHasBeenSet = true; m_counters = value; }
    inline void SetCounters(Counters&& value) { m_countersHasBeenSet = true; m_counters = std::move(value); }
    inline Run& WithCounters(const Counters& value) { SetCounters(value); return *this;}
    inline Run& WithCounters(Counters&& value) { SetCounters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the run's result.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline Run& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline Run& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline Run& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of jobs for the run.</p>
     */
    inline int GetTotalJobs() const{ return m_totalJobs; }
    inline bool TotalJobsHasBeenSet() const { return m_totalJobsHasBeenSet; }
    inline void SetTotalJobs(int value) { m_totalJobsHasBeenSet = true; m_totalJobs = value; }
    inline Run& WithTotalJobs(int value) { SetTotalJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of completed jobs.</p>
     */
    inline int GetCompletedJobs() const{ return m_completedJobs; }
    inline bool CompletedJobsHasBeenSet() const { return m_completedJobsHasBeenSet; }
    inline void SetCompletedJobs(int value) { m_completedJobsHasBeenSet = true; m_completedJobs = value; }
    inline Run& WithCompletedJobs(int value) { SetCompletedJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the billing method for a test run: <code>metered</code> or
     * <code>unmetered</code>. If the parameter is not specified, the default value is
     * <code>metered</code>.</p>  <p>If you have unmetered device slots, you must
     * set this to <code>unmetered</code> to use them. Otherwise, the run is counted
     * toward metered device minutes.</p> 
     */
    inline const BillingMethod& GetBillingMethod() const{ return m_billingMethod; }
    inline bool BillingMethodHasBeenSet() const { return m_billingMethodHasBeenSet; }
    inline void SetBillingMethod(const BillingMethod& value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }
    inline void SetBillingMethod(BillingMethod&& value) { m_billingMethodHasBeenSet = true; m_billingMethod = std::move(value); }
    inline Run& WithBillingMethod(const BillingMethod& value) { SetBillingMethod(value); return *this;}
    inline Run& WithBillingMethod(BillingMethod&& value) { SetBillingMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test run.</p>
     */
    inline const DeviceMinutes& GetDeviceMinutes() const{ return m_deviceMinutes; }
    inline bool DeviceMinutesHasBeenSet() const { return m_deviceMinutesHasBeenSet; }
    inline void SetDeviceMinutes(const DeviceMinutes& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = value; }
    inline void SetDeviceMinutes(DeviceMinutes&& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = std::move(value); }
    inline Run& WithDeviceMinutes(const DeviceMinutes& value) { SetDeviceMinutes(value); return *this;}
    inline Run& WithDeviceMinutes(DeviceMinutes&& value) { SetDeviceMinutes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network profile being used for a test run.</p>
     */
    inline const NetworkProfile& GetNetworkProfile() const{ return m_networkProfile; }
    inline bool NetworkProfileHasBeenSet() const { return m_networkProfileHasBeenSet; }
    inline void SetNetworkProfile(const NetworkProfile& value) { m_networkProfileHasBeenSet = true; m_networkProfile = value; }
    inline void SetNetworkProfile(NetworkProfile&& value) { m_networkProfileHasBeenSet = true; m_networkProfile = std::move(value); }
    inline Run& WithNetworkProfile(const NetworkProfile& value) { SetNetworkProfile(value); return *this;}
    inline Run& WithNetworkProfile(NetworkProfile&& value) { SetNetworkProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Read-only URL for an object in an S3 bucket where you can get the parsing
     * results of the test package. If the test package doesn't parse, the reason why
     * it doesn't parse appears in the file that this URL points to.</p>
     */
    inline const Aws::String& GetParsingResultUrl() const{ return m_parsingResultUrl; }
    inline bool ParsingResultUrlHasBeenSet() const { return m_parsingResultUrlHasBeenSet; }
    inline void SetParsingResultUrl(const Aws::String& value) { m_parsingResultUrlHasBeenSet = true; m_parsingResultUrl = value; }
    inline void SetParsingResultUrl(Aws::String&& value) { m_parsingResultUrlHasBeenSet = true; m_parsingResultUrl = std::move(value); }
    inline void SetParsingResultUrl(const char* value) { m_parsingResultUrlHasBeenSet = true; m_parsingResultUrl.assign(value); }
    inline Run& WithParsingResultUrl(const Aws::String& value) { SetParsingResultUrl(value); return *this;}
    inline Run& WithParsingResultUrl(Aws::String&& value) { SetParsingResultUrl(std::move(value)); return *this;}
    inline Run& WithParsingResultUrl(const char* value) { SetParsingResultUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supporting field for the result field. Set only if <code>result</code> is
     * <code>SKIPPED</code>. <code>PARSING_FAILED</code> if the result is skipped
     * because of test package parsing failure.</p>
     */
    inline const ExecutionResultCode& GetResultCode() const{ return m_resultCode; }
    inline bool ResultCodeHasBeenSet() const { return m_resultCodeHasBeenSet; }
    inline void SetResultCode(const ExecutionResultCode& value) { m_resultCodeHasBeenSet = true; m_resultCode = value; }
    inline void SetResultCode(ExecutionResultCode&& value) { m_resultCodeHasBeenSet = true; m_resultCode = std::move(value); }
    inline Run& WithResultCode(const ExecutionResultCode& value) { SetResultCode(value); return *this;}
    inline Run& WithResultCode(ExecutionResultCode&& value) { SetResultCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For fuzz tests, this is a seed to use for randomizing the UI fuzz test. Using
     * the same seed value between tests ensures identical event sequences.</p>
     */
    inline int GetSeed() const{ return m_seed; }
    inline bool SeedHasBeenSet() const { return m_seedHasBeenSet; }
    inline void SetSeed(int value) { m_seedHasBeenSet = true; m_seed = value; }
    inline Run& WithSeed(int value) { SetSeed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline const Aws::String& GetAppUpload() const{ return m_appUpload; }
    inline bool AppUploadHasBeenSet() const { return m_appUploadHasBeenSet; }
    inline void SetAppUpload(const Aws::String& value) { m_appUploadHasBeenSet = true; m_appUpload = value; }
    inline void SetAppUpload(Aws::String&& value) { m_appUploadHasBeenSet = true; m_appUpload = std::move(value); }
    inline void SetAppUpload(const char* value) { m_appUploadHasBeenSet = true; m_appUpload.assign(value); }
    inline Run& WithAppUpload(const Aws::String& value) { SetAppUpload(value); return *this;}
    inline Run& WithAppUpload(Aws::String&& value) { SetAppUpload(std::move(value)); return *this;}
    inline Run& WithAppUpload(const char* value) { SetAppUpload(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For fuzz tests, this is the number of events, between 1 and 10000, that the
     * UI fuzz test should perform.</p>
     */
    inline int GetEventCount() const{ return m_eventCount; }
    inline bool EventCountHasBeenSet() const { return m_eventCountHasBeenSet; }
    inline void SetEventCount(int value) { m_eventCountHasBeenSet = true; m_eventCount = value; }
    inline Run& WithEventCount(int value) { SetEventCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes the job executes before it times out.</p>
     */
    inline int GetJobTimeoutMinutes() const{ return m_jobTimeoutMinutes; }
    inline bool JobTimeoutMinutesHasBeenSet() const { return m_jobTimeoutMinutesHasBeenSet; }
    inline void SetJobTimeoutMinutes(int value) { m_jobTimeoutMinutesHasBeenSet = true; m_jobTimeoutMinutes = value; }
    inline Run& WithJobTimeoutMinutes(int value) { SetJobTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the device pool for the run.</p>
     */
    inline const Aws::String& GetDevicePoolArn() const{ return m_devicePoolArn; }
    inline bool DevicePoolArnHasBeenSet() const { return m_devicePoolArnHasBeenSet; }
    inline void SetDevicePoolArn(const Aws::String& value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn = value; }
    inline void SetDevicePoolArn(Aws::String&& value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn = std::move(value); }
    inline void SetDevicePoolArn(const char* value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn.assign(value); }
    inline Run& WithDevicePoolArn(const Aws::String& value) { SetDevicePoolArn(value); return *this;}
    inline Run& WithDevicePoolArn(Aws::String&& value) { SetDevicePoolArn(std::move(value)); return *this;}
    inline Run& WithDevicePoolArn(const char* value) { SetDevicePoolArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }
    inline Run& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}
    inline Run& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}
    inline Run& WithLocale(const char* value) { SetLocale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline const Radios& GetRadios() const{ return m_radios; }
    inline bool RadiosHasBeenSet() const { return m_radiosHasBeenSet; }
    inline void SetRadios(const Radios& value) { m_radiosHasBeenSet = true; m_radios = value; }
    inline void SetRadios(Radios&& value) { m_radiosHasBeenSet = true; m_radios = std::move(value); }
    inline Run& WithRadios(const Radios& value) { SetRadios(value); return *this;}
    inline Run& WithRadios(Radios&& value) { SetRadios(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline Run& WithLocation(const Location& value) { SetLocation(value); return *this;}
    inline Run& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output <code>CustomerArtifactPaths</code> object for the test run.</p>
     */
    inline const CustomerArtifactPaths& GetCustomerArtifactPaths() const{ return m_customerArtifactPaths; }
    inline bool CustomerArtifactPathsHasBeenSet() const { return m_customerArtifactPathsHasBeenSet; }
    inline void SetCustomerArtifactPaths(const CustomerArtifactPaths& value) { m_customerArtifactPathsHasBeenSet = true; m_customerArtifactPaths = value; }
    inline void SetCustomerArtifactPaths(CustomerArtifactPaths&& value) { m_customerArtifactPathsHasBeenSet = true; m_customerArtifactPaths = std::move(value); }
    inline Run& WithCustomerArtifactPaths(const CustomerArtifactPaths& value) { SetCustomerArtifactPaths(value); return *this;}
    inline Run& WithCustomerArtifactPaths(CustomerArtifactPaths&& value) { SetCustomerArtifactPaths(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Device Farm console URL for the recording of the run.</p>
     */
    inline const Aws::String& GetWebUrl() const{ return m_webUrl; }
    inline bool WebUrlHasBeenSet() const { return m_webUrlHasBeenSet; }
    inline void SetWebUrl(const Aws::String& value) { m_webUrlHasBeenSet = true; m_webUrl = value; }
    inline void SetWebUrl(Aws::String&& value) { m_webUrlHasBeenSet = true; m_webUrl = std::move(value); }
    inline void SetWebUrl(const char* value) { m_webUrlHasBeenSet = true; m_webUrl.assign(value); }
    inline Run& WithWebUrl(const Aws::String& value) { SetWebUrl(value); return *this;}
    inline Run& WithWebUrl(Aws::String&& value) { SetWebUrl(std::move(value)); return *this;}
    inline Run& WithWebUrl(const char* value) { SetWebUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm does not sign
     * your app again. For public devices, Device Farm always signs your apps
     * again.</p> <p>For more information about how Device Farm re-signs your apps, see
     * <a href="http://aws.amazon.com/device-farm/faqs/">Do you modify my app?</a> in
     * the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool GetSkipAppResign() const{ return m_skipAppResign; }
    inline bool SkipAppResignHasBeenSet() const { return m_skipAppResignHasBeenSet; }
    inline void SetSkipAppResign(bool value) { m_skipAppResignHasBeenSet = true; m_skipAppResign = value; }
    inline Run& WithSkipAppResign(bool value) { SetSkipAppResign(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the YAML-formatted test specification for the run.</p>
     */
    inline const Aws::String& GetTestSpecArn() const{ return m_testSpecArn; }
    inline bool TestSpecArnHasBeenSet() const { return m_testSpecArnHasBeenSet; }
    inline void SetTestSpecArn(const Aws::String& value) { m_testSpecArnHasBeenSet = true; m_testSpecArn = value; }
    inline void SetTestSpecArn(Aws::String&& value) { m_testSpecArnHasBeenSet = true; m_testSpecArn = std::move(value); }
    inline void SetTestSpecArn(const char* value) { m_testSpecArnHasBeenSet = true; m_testSpecArn.assign(value); }
    inline Run& WithTestSpecArn(const Aws::String& value) { SetTestSpecArn(value); return *this;}
    inline Run& WithTestSpecArn(Aws::String&& value) { SetTestSpecArn(std::move(value)); return *this;}
    inline Run& WithTestSpecArn(const char* value) { SetTestSpecArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of a device filter used to select the devices for a test run.</p>
     */
    inline const DeviceSelectionResult& GetDeviceSelectionResult() const{ return m_deviceSelectionResult; }
    inline bool DeviceSelectionResultHasBeenSet() const { return m_deviceSelectionResultHasBeenSet; }
    inline void SetDeviceSelectionResult(const DeviceSelectionResult& value) { m_deviceSelectionResultHasBeenSet = true; m_deviceSelectionResult = value; }
    inline void SetDeviceSelectionResult(DeviceSelectionResult&& value) { m_deviceSelectionResultHasBeenSet = true; m_deviceSelectionResult = std::move(value); }
    inline Run& WithDeviceSelectionResult(const DeviceSelectionResult& value) { SetDeviceSelectionResult(value); return *this;}
    inline Run& WithDeviceSelectionResult(DeviceSelectionResult&& value) { SetDeviceSelectionResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline Run& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}
    inline Run& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}
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
