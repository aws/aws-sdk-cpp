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
#include <aws/devicefarm/model/DeviceProxy.h>
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
    AWS_DEVICEFARM_API Run() = default;
    AWS_DEVICEFARM_API Run(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Run& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The run's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Run& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Run& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline TestType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TestType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Run& WithType(TestType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's platform.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ANDROID</p> </li> <li> <p>IOS</p> </li> </ul>
     */
    inline DevicePlatform GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(DevicePlatform value) { m_platformHasBeenSet = true; m_platform = value; }
    inline Run& WithPlatform(DevicePlatform value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    Run& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's status.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PENDING_CONCURRENCY</p> </li> <li> <p>PENDING_DEVICE</p> </li>
     * <li> <p>PROCESSING</p> </li> <li> <p>SCHEDULING</p> </li> <li> <p>PREPARING</p>
     * </li> <li> <p>RUNNING</p> </li> <li> <p>COMPLETED</p> </li> <li> <p>STOPPING</p>
     * </li> </ul>
     */
    inline ExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Run& WithStatus(ExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's result.</p> <p>Allowed values include:</p> <ul> <li> <p>PENDING</p>
     * </li> <li> <p>PASSED</p> </li> <li> <p>WARNED</p> </li> <li> <p>FAILED</p> </li>
     * <li> <p>SKIPPED</p> </li> <li> <p>ERRORED</p> </li> <li> <p>STOPPED</p> </li>
     * </ul>
     */
    inline ExecutionResult GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    inline void SetResult(ExecutionResult value) { m_resultHasBeenSet = true; m_result = value; }
    inline Run& WithResult(ExecutionResult value) { SetResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const { return m_started; }
    inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }
    template<typename StartedT = Aws::Utils::DateTime>
    void SetStarted(StartedT&& value) { m_startedHasBeenSet = true; m_started = std::forward<StartedT>(value); }
    template<typename StartedT = Aws::Utils::DateTime>
    Run& WithStarted(StartedT&& value) { SetStarted(std::forward<StartedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's stop time.</p>
     */
    inline const Aws::Utils::DateTime& GetStopped() const { return m_stopped; }
    inline bool StoppedHasBeenSet() const { return m_stoppedHasBeenSet; }
    template<typename StoppedT = Aws::Utils::DateTime>
    void SetStopped(StoppedT&& value) { m_stoppedHasBeenSet = true; m_stopped = std::forward<StoppedT>(value); }
    template<typename StoppedT = Aws::Utils::DateTime>
    Run& WithStopped(StoppedT&& value) { SetStopped(std::forward<StoppedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run's result counters.</p>
     */
    inline const Counters& GetCounters() const { return m_counters; }
    inline bool CountersHasBeenSet() const { return m_countersHasBeenSet; }
    template<typename CountersT = Counters>
    void SetCounters(CountersT&& value) { m_countersHasBeenSet = true; m_counters = std::forward<CountersT>(value); }
    template<typename CountersT = Counters>
    Run& WithCounters(CountersT&& value) { SetCounters(std::forward<CountersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message about the run's result.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    Run& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of jobs for the run.</p>
     */
    inline int GetTotalJobs() const { return m_totalJobs; }
    inline bool TotalJobsHasBeenSet() const { return m_totalJobsHasBeenSet; }
    inline void SetTotalJobs(int value) { m_totalJobsHasBeenSet = true; m_totalJobs = value; }
    inline Run& WithTotalJobs(int value) { SetTotalJobs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of completed jobs.</p>
     */
    inline int GetCompletedJobs() const { return m_completedJobs; }
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
    inline BillingMethod GetBillingMethod() const { return m_billingMethod; }
    inline bool BillingMethodHasBeenSet() const { return m_billingMethodHasBeenSet; }
    inline void SetBillingMethod(BillingMethod value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }
    inline Run& WithBillingMethod(BillingMethod value) { SetBillingMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the total (metered or unmetered) minutes used by the test run.</p>
     */
    inline const DeviceMinutes& GetDeviceMinutes() const { return m_deviceMinutes; }
    inline bool DeviceMinutesHasBeenSet() const { return m_deviceMinutesHasBeenSet; }
    template<typename DeviceMinutesT = DeviceMinutes>
    void SetDeviceMinutes(DeviceMinutesT&& value) { m_deviceMinutesHasBeenSet = true; m_deviceMinutes = std::forward<DeviceMinutesT>(value); }
    template<typename DeviceMinutesT = DeviceMinutes>
    Run& WithDeviceMinutes(DeviceMinutesT&& value) { SetDeviceMinutes(std::forward<DeviceMinutesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network profile being used for a test run.</p>
     */
    inline const NetworkProfile& GetNetworkProfile() const { return m_networkProfile; }
    inline bool NetworkProfileHasBeenSet() const { return m_networkProfileHasBeenSet; }
    template<typename NetworkProfileT = NetworkProfile>
    void SetNetworkProfile(NetworkProfileT&& value) { m_networkProfileHasBeenSet = true; m_networkProfile = std::forward<NetworkProfileT>(value); }
    template<typename NetworkProfileT = NetworkProfile>
    Run& WithNetworkProfile(NetworkProfileT&& value) { SetNetworkProfile(std::forward<NetworkProfileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device proxy configured for the devices in the run.</p>
     */
    inline const DeviceProxy& GetDeviceProxy() const { return m_deviceProxy; }
    inline bool DeviceProxyHasBeenSet() const { return m_deviceProxyHasBeenSet; }
    template<typename DeviceProxyT = DeviceProxy>
    void SetDeviceProxy(DeviceProxyT&& value) { m_deviceProxyHasBeenSet = true; m_deviceProxy = std::forward<DeviceProxyT>(value); }
    template<typename DeviceProxyT = DeviceProxy>
    Run& WithDeviceProxy(DeviceProxyT&& value) { SetDeviceProxy(std::forward<DeviceProxyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Read-only URL for an object in an S3 bucket where you can get the parsing
     * results of the test package. If the test package doesn't parse, the reason why
     * it doesn't parse appears in the file that this URL points to.</p>
     */
    inline const Aws::String& GetParsingResultUrl() const { return m_parsingResultUrl; }
    inline bool ParsingResultUrlHasBeenSet() const { return m_parsingResultUrlHasBeenSet; }
    template<typename ParsingResultUrlT = Aws::String>
    void SetParsingResultUrl(ParsingResultUrlT&& value) { m_parsingResultUrlHasBeenSet = true; m_parsingResultUrl = std::forward<ParsingResultUrlT>(value); }
    template<typename ParsingResultUrlT = Aws::String>
    Run& WithParsingResultUrl(ParsingResultUrlT&& value) { SetParsingResultUrl(std::forward<ParsingResultUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supporting field for the result field. Set only if <code>result</code> is
     * <code>SKIPPED</code>. <code>PARSING_FAILED</code> if the result is skipped
     * because of test package parsing failure.</p>
     */
    inline ExecutionResultCode GetResultCode() const { return m_resultCode; }
    inline bool ResultCodeHasBeenSet() const { return m_resultCodeHasBeenSet; }
    inline void SetResultCode(ExecutionResultCode value) { m_resultCodeHasBeenSet = true; m_resultCode = value; }
    inline Run& WithResultCode(ExecutionResultCode value) { SetResultCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For fuzz tests, this is a seed to use for randomizing the UI fuzz test. Using
     * the same seed value between tests ensures identical event sequences.</p>
     */
    inline int GetSeed() const { return m_seed; }
    inline bool SeedHasBeenSet() const { return m_seedHasBeenSet; }
    inline void SetSeed(int value) { m_seedHasBeenSet = true; m_seed = value; }
    inline Run& WithSeed(int value) { SetSeed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An app to upload or that has been uploaded.</p>
     */
    inline const Aws::String& GetAppUpload() const { return m_appUpload; }
    inline bool AppUploadHasBeenSet() const { return m_appUploadHasBeenSet; }
    template<typename AppUploadT = Aws::String>
    void SetAppUpload(AppUploadT&& value) { m_appUploadHasBeenSet = true; m_appUpload = std::forward<AppUploadT>(value); }
    template<typename AppUploadT = Aws::String>
    Run& WithAppUpload(AppUploadT&& value) { SetAppUpload(std::forward<AppUploadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For fuzz tests, this is the number of events, between 1 and 10000, that the
     * UI fuzz test should perform.</p>
     */
    inline int GetEventCount() const { return m_eventCount; }
    inline bool EventCountHasBeenSet() const { return m_eventCountHasBeenSet; }
    inline void SetEventCount(int value) { m_eventCountHasBeenSet = true; m_eventCount = value; }
    inline Run& WithEventCount(int value) { SetEventCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes the job executes before it times out.</p>
     */
    inline int GetJobTimeoutMinutes() const { return m_jobTimeoutMinutes; }
    inline bool JobTimeoutMinutesHasBeenSet() const { return m_jobTimeoutMinutesHasBeenSet; }
    inline void SetJobTimeoutMinutes(int value) { m_jobTimeoutMinutesHasBeenSet = true; m_jobTimeoutMinutes = value; }
    inline Run& WithJobTimeoutMinutes(int value) { SetJobTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the device pool for the run.</p>
     */
    inline const Aws::String& GetDevicePoolArn() const { return m_devicePoolArn; }
    inline bool DevicePoolArnHasBeenSet() const { return m_devicePoolArnHasBeenSet; }
    template<typename DevicePoolArnT = Aws::String>
    void SetDevicePoolArn(DevicePoolArnT&& value) { m_devicePoolArnHasBeenSet = true; m_devicePoolArn = std::forward<DevicePoolArnT>(value); }
    template<typename DevicePoolArnT = Aws::String>
    Run& WithDevicePoolArn(DevicePoolArnT&& value) { SetDevicePoolArn(std::forward<DevicePoolArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the locale that is used for the run.</p>
     */
    inline const Aws::String& GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    template<typename LocaleT = Aws::String>
    void SetLocale(LocaleT&& value) { m_localeHasBeenSet = true; m_locale = std::forward<LocaleT>(value); }
    template<typename LocaleT = Aws::String>
    Run& WithLocale(LocaleT&& value) { SetLocale(std::forward<LocaleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the radio states for the run.</p>
     */
    inline const Radios& GetRadios() const { return m_radios; }
    inline bool RadiosHasBeenSet() const { return m_radiosHasBeenSet; }
    template<typename RadiosT = Radios>
    void SetRadios(RadiosT&& value) { m_radiosHasBeenSet = true; m_radios = std::forward<RadiosT>(value); }
    template<typename RadiosT = Radios>
    Run& WithRadios(RadiosT&& value) { SetRadios(std::forward<RadiosT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the location that is used for the run.</p>
     */
    inline const Location& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Location>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Location>
    Run& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output <code>CustomerArtifactPaths</code> object for the test run.</p>
     */
    inline const CustomerArtifactPaths& GetCustomerArtifactPaths() const { return m_customerArtifactPaths; }
    inline bool CustomerArtifactPathsHasBeenSet() const { return m_customerArtifactPathsHasBeenSet; }
    template<typename CustomerArtifactPathsT = CustomerArtifactPaths>
    void SetCustomerArtifactPaths(CustomerArtifactPathsT&& value) { m_customerArtifactPathsHasBeenSet = true; m_customerArtifactPaths = std::forward<CustomerArtifactPathsT>(value); }
    template<typename CustomerArtifactPathsT = CustomerArtifactPaths>
    Run& WithCustomerArtifactPaths(CustomerArtifactPathsT&& value) { SetCustomerArtifactPaths(std::forward<CustomerArtifactPathsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Device Farm console URL for the recording of the run.</p>
     */
    inline const Aws::String& GetWebUrl() const { return m_webUrl; }
    inline bool WebUrlHasBeenSet() const { return m_webUrlHasBeenSet; }
    template<typename WebUrlT = Aws::String>
    void SetWebUrl(WebUrlT&& value) { m_webUrlHasBeenSet = true; m_webUrl = std::forward<WebUrlT>(value); }
    template<typename WebUrlT = Aws::String>
    Run& WithWebUrl(WebUrlT&& value) { SetWebUrl(std::forward<WebUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>true</code>, for private devices, Device Farm does not sign
     * your app again. For public devices, Device Farm always signs your apps
     * again.</p> <p>For more information about how Device Farm re-signs your apps, see
     * <a href="http://aws.amazon.com/device-farm/faqs/">Do you modify my app?</a> in
     * the <i>AWS Device Farm FAQs</i>.</p>
     */
    inline bool GetSkipAppResign() const { return m_skipAppResign; }
    inline bool SkipAppResignHasBeenSet() const { return m_skipAppResignHasBeenSet; }
    inline void SetSkipAppResign(bool value) { m_skipAppResignHasBeenSet = true; m_skipAppResign = value; }
    inline Run& WithSkipAppResign(bool value) { SetSkipAppResign(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the YAML-formatted test specification for the run.</p>
     */
    inline const Aws::String& GetTestSpecArn() const { return m_testSpecArn; }
    inline bool TestSpecArnHasBeenSet() const { return m_testSpecArnHasBeenSet; }
    template<typename TestSpecArnT = Aws::String>
    void SetTestSpecArn(TestSpecArnT&& value) { m_testSpecArnHasBeenSet = true; m_testSpecArn = std::forward<TestSpecArnT>(value); }
    template<typename TestSpecArnT = Aws::String>
    Run& WithTestSpecArn(TestSpecArnT&& value) { SetTestSpecArn(std::forward<TestSpecArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of a device filter used to select the devices for a test run.</p>
     */
    inline const DeviceSelectionResult& GetDeviceSelectionResult() const { return m_deviceSelectionResult; }
    inline bool DeviceSelectionResultHasBeenSet() const { return m_deviceSelectionResultHasBeenSet; }
    template<typename DeviceSelectionResultT = DeviceSelectionResult>
    void SetDeviceSelectionResult(DeviceSelectionResultT&& value) { m_deviceSelectionResultHasBeenSet = true; m_deviceSelectionResult = std::forward<DeviceSelectionResultT>(value); }
    template<typename DeviceSelectionResultT = DeviceSelectionResult>
    Run& WithDeviceSelectionResult(DeviceSelectionResultT&& value) { SetDeviceSelectionResult(std::forward<DeviceSelectionResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC security groups and subnets that are attached to a project.</p>
     */
    inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = VpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = VpcConfig>
    Run& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TestType m_type{TestType::NOT_SET};
    bool m_typeHasBeenSet = false;

    DevicePlatform m_platform{DevicePlatform::NOT_SET};
    bool m_platformHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    ExecutionStatus m_status{ExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ExecutionResult m_result{ExecutionResult::NOT_SET};
    bool m_resultHasBeenSet = false;

    Aws::Utils::DateTime m_started{};
    bool m_startedHasBeenSet = false;

    Aws::Utils::DateTime m_stopped{};
    bool m_stoppedHasBeenSet = false;

    Counters m_counters;
    bool m_countersHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_totalJobs{0};
    bool m_totalJobsHasBeenSet = false;

    int m_completedJobs{0};
    bool m_completedJobsHasBeenSet = false;

    BillingMethod m_billingMethod{BillingMethod::NOT_SET};
    bool m_billingMethodHasBeenSet = false;

    DeviceMinutes m_deviceMinutes;
    bool m_deviceMinutesHasBeenSet = false;

    NetworkProfile m_networkProfile;
    bool m_networkProfileHasBeenSet = false;

    DeviceProxy m_deviceProxy;
    bool m_deviceProxyHasBeenSet = false;

    Aws::String m_parsingResultUrl;
    bool m_parsingResultUrlHasBeenSet = false;

    ExecutionResultCode m_resultCode{ExecutionResultCode::NOT_SET};
    bool m_resultCodeHasBeenSet = false;

    int m_seed{0};
    bool m_seedHasBeenSet = false;

    Aws::String m_appUpload;
    bool m_appUploadHasBeenSet = false;

    int m_eventCount{0};
    bool m_eventCountHasBeenSet = false;

    int m_jobTimeoutMinutes{0};
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

    bool m_skipAppResign{false};
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
