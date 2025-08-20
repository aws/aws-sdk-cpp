/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/RuntimeEnvironment.h>
#include <aws/kinesisanalyticsv2/model/ApplicationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kinesisanalyticsv2/model/ApplicationConfigurationDescription.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/ApplicationMaintenanceConfigurationDescription.h>
#include <aws/kinesisanalyticsv2/model/ApplicationMode.h>
#include <aws/kinesisanalyticsv2/model/CloudWatchLoggingOptionDescription.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes the application, including the application Amazon Resource Name
   * (ARN), status, latest version, and input and output
   * configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationDetail">AWS
   * API Reference</a></p>
   */
  class ApplicationDetail
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationDetail() = default;
    AWS_KINESISANALYTICSV2_API ApplicationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const { return m_applicationARN; }
    inline bool ApplicationARNHasBeenSet() const { return m_applicationARNHasBeenSet; }
    template<typename ApplicationARNT = Aws::String>
    void SetApplicationARN(ApplicationARNT&& value) { m_applicationARNHasBeenSet = true; m_applicationARN = std::forward<ApplicationARNT>(value); }
    template<typename ApplicationARNT = Aws::String>
    ApplicationDetail& WithApplicationARN(ApplicationARNT&& value) { SetApplicationARN(std::forward<ApplicationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const { return m_applicationDescription; }
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }
    template<typename ApplicationDescriptionT = Aws::String>
    void SetApplicationDescription(ApplicationDescriptionT&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::forward<ApplicationDescriptionT>(value); }
    template<typename ApplicationDescriptionT = Aws::String>
    ApplicationDetail& WithApplicationDescription(ApplicationDescriptionT&& value) { SetApplicationDescription(std::forward<ApplicationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    ApplicationDetail& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime environment for the application.</p>
     */
    inline RuntimeEnvironment GetRuntimeEnvironment() const { return m_runtimeEnvironment; }
    inline bool RuntimeEnvironmentHasBeenSet() const { return m_runtimeEnvironmentHasBeenSet; }
    inline void SetRuntimeEnvironment(RuntimeEnvironment value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = value; }
    inline ApplicationDetail& WithRuntimeEnvironment(RuntimeEnvironment value) { SetRuntimeEnvironment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IAM role that the application uses to access external
     * resources.</p>
     */
    inline const Aws::String& GetServiceExecutionRole() const { return m_serviceExecutionRole; }
    inline bool ServiceExecutionRoleHasBeenSet() const { return m_serviceExecutionRoleHasBeenSet; }
    template<typename ServiceExecutionRoleT = Aws::String>
    void SetServiceExecutionRole(ServiceExecutionRoleT&& value) { m_serviceExecutionRoleHasBeenSet = true; m_serviceExecutionRole = std::forward<ServiceExecutionRoleT>(value); }
    template<typename ServiceExecutionRoleT = Aws::String>
    ApplicationDetail& WithServiceExecutionRole(ServiceExecutionRoleT&& value) { SetServiceExecutionRole(std::forward<ServiceExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the application.</p>
     */
    inline ApplicationStatus GetApplicationStatus() const { return m_applicationStatus; }
    inline bool ApplicationStatusHasBeenSet() const { return m_applicationStatusHasBeenSet; }
    inline void SetApplicationStatus(ApplicationStatus value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = value; }
    inline ApplicationDetail& WithApplicationStatus(ApplicationStatus value) { SetApplicationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the current application version. Managed Service for Apache Flink
     * updates the <code>ApplicationVersionId</code> each time you update the
     * application.</p>
     */
    inline long long GetApplicationVersionId() const { return m_applicationVersionId; }
    inline bool ApplicationVersionIdHasBeenSet() const { return m_applicationVersionIdHasBeenSet; }
    inline void SetApplicationVersionId(long long value) { m_applicationVersionIdHasBeenSet = true; m_applicationVersionId = value; }
    inline ApplicationDetail& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current timestamp when the application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const { return m_createTimestamp; }
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    void SetCreateTimestamp(CreateTimestampT&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::forward<CreateTimestampT>(value); }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    ApplicationDetail& WithCreateTimestamp(CreateTimestampT&& value) { SetCreateTimestamp(std::forward<CreateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current timestamp when the application was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const { return m_lastUpdateTimestamp; }
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    void SetLastUpdateTimestamp(LastUpdateTimestampT&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::forward<LastUpdateTimestampT>(value); }
    template<typename LastUpdateTimestampT = Aws::Utils::DateTime>
    ApplicationDetail& WithLastUpdateTimestamp(LastUpdateTimestampT&& value) { SetLastUpdateTimestamp(std::forward<LastUpdateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes details about the application code and starting parameters for a
     * Managed Service for Apache Flink application.</p>
     */
    inline const ApplicationConfigurationDescription& GetApplicationConfigurationDescription() const { return m_applicationConfigurationDescription; }
    inline bool ApplicationConfigurationDescriptionHasBeenSet() const { return m_applicationConfigurationDescriptionHasBeenSet; }
    template<typename ApplicationConfigurationDescriptionT = ApplicationConfigurationDescription>
    void SetApplicationConfigurationDescription(ApplicationConfigurationDescriptionT&& value) { m_applicationConfigurationDescriptionHasBeenSet = true; m_applicationConfigurationDescription = std::forward<ApplicationConfigurationDescriptionT>(value); }
    template<typename ApplicationConfigurationDescriptionT = ApplicationConfigurationDescription>
    ApplicationDetail& WithApplicationConfigurationDescription(ApplicationConfigurationDescriptionT&& value) { SetApplicationConfigurationDescription(std::forward<ApplicationConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the application Amazon CloudWatch logging options.</p>
     */
    inline const Aws::Vector<CloudWatchLoggingOptionDescription>& GetCloudWatchLoggingOptionDescriptions() const { return m_cloudWatchLoggingOptionDescriptions; }
    inline bool CloudWatchLoggingOptionDescriptionsHasBeenSet() const { return m_cloudWatchLoggingOptionDescriptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionDescriptionsT = Aws::Vector<CloudWatchLoggingOptionDescription>>
    void SetCloudWatchLoggingOptionDescriptions(CloudWatchLoggingOptionDescriptionsT&& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions = std::forward<CloudWatchLoggingOptionDescriptionsT>(value); }
    template<typename CloudWatchLoggingOptionDescriptionsT = Aws::Vector<CloudWatchLoggingOptionDescription>>
    ApplicationDetail& WithCloudWatchLoggingOptionDescriptions(CloudWatchLoggingOptionDescriptionsT&& value) { SetCloudWatchLoggingOptionDescriptions(std::forward<CloudWatchLoggingOptionDescriptionsT>(value)); return *this;}
    template<typename CloudWatchLoggingOptionDescriptionsT = CloudWatchLoggingOptionDescription>
    ApplicationDetail& AddCloudWatchLoggingOptionDescriptions(CloudWatchLoggingOptionDescriptionsT&& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions.emplace_back(std::forward<CloudWatchLoggingOptionDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the maintenance configuration for the application.</p>
     */
    inline const ApplicationMaintenanceConfigurationDescription& GetApplicationMaintenanceConfigurationDescription() const { return m_applicationMaintenanceConfigurationDescription; }
    inline bool ApplicationMaintenanceConfigurationDescriptionHasBeenSet() const { return m_applicationMaintenanceConfigurationDescriptionHasBeenSet; }
    template<typename ApplicationMaintenanceConfigurationDescriptionT = ApplicationMaintenanceConfigurationDescription>
    void SetApplicationMaintenanceConfigurationDescription(ApplicationMaintenanceConfigurationDescriptionT&& value) { m_applicationMaintenanceConfigurationDescriptionHasBeenSet = true; m_applicationMaintenanceConfigurationDescription = std::forward<ApplicationMaintenanceConfigurationDescriptionT>(value); }
    template<typename ApplicationMaintenanceConfigurationDescriptionT = ApplicationMaintenanceConfigurationDescription>
    ApplicationDetail& WithApplicationMaintenanceConfigurationDescription(ApplicationMaintenanceConfigurationDescriptionT&& value) { SetApplicationMaintenanceConfigurationDescription(std::forward<ApplicationMaintenanceConfigurationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous application version before the latest application update.
     * <a>RollbackApplication</a> reverts the application to this version.</p>
     */
    inline long long GetApplicationVersionUpdatedFrom() const { return m_applicationVersionUpdatedFrom; }
    inline bool ApplicationVersionUpdatedFromHasBeenSet() const { return m_applicationVersionUpdatedFromHasBeenSet; }
    inline void SetApplicationVersionUpdatedFrom(long long value) { m_applicationVersionUpdatedFromHasBeenSet = true; m_applicationVersionUpdatedFrom = value; }
    inline ApplicationDetail& WithApplicationVersionUpdatedFrom(long long value) { SetApplicationVersionUpdatedFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you reverted the application using <a>RollbackApplication</a>, the
     * application version when <code>RollbackApplication</code> was called.</p>
     */
    inline long long GetApplicationVersionRolledBackFrom() const { return m_applicationVersionRolledBackFrom; }
    inline bool ApplicationVersionRolledBackFromHasBeenSet() const { return m_applicationVersionRolledBackFromHasBeenSet; }
    inline void SetApplicationVersionRolledBackFrom(long long value) { m_applicationVersionRolledBackFromHasBeenSet = true; m_applicationVersionRolledBackFrom = value; }
    inline ApplicationDetail& WithApplicationVersionRolledBackFrom(long long value) { SetApplicationVersionRolledBackFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates when the application version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetApplicationVersionCreateTimestamp() const { return m_applicationVersionCreateTimestamp; }
    inline bool ApplicationVersionCreateTimestampHasBeenSet() const { return m_applicationVersionCreateTimestampHasBeenSet; }
    template<typename ApplicationVersionCreateTimestampT = Aws::Utils::DateTime>
    void SetApplicationVersionCreateTimestamp(ApplicationVersionCreateTimestampT&& value) { m_applicationVersionCreateTimestampHasBeenSet = true; m_applicationVersionCreateTimestamp = std::forward<ApplicationVersionCreateTimestampT>(value); }
    template<typename ApplicationVersionCreateTimestampT = Aws::Utils::DateTime>
    ApplicationDetail& WithApplicationVersionCreateTimestamp(ApplicationVersionCreateTimestampT&& value) { SetApplicationVersionCreateTimestamp(std::forward<ApplicationVersionCreateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value you use to implement strong concurrency for application updates.</p>
     */
    inline const Aws::String& GetConditionalToken() const { return m_conditionalToken; }
    inline bool ConditionalTokenHasBeenSet() const { return m_conditionalTokenHasBeenSet; }
    template<typename ConditionalTokenT = Aws::String>
    void SetConditionalToken(ConditionalTokenT&& value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken = std::forward<ConditionalTokenT>(value); }
    template<typename ConditionalTokenT = Aws::String>
    ApplicationDetail& WithConditionalToken(ConditionalTokenT&& value) { SetConditionalToken(std::forward<ConditionalTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version to which you want to roll back the application.</p>
     */
    inline long long GetApplicationVersionRolledBackTo() const { return m_applicationVersionRolledBackTo; }
    inline bool ApplicationVersionRolledBackToHasBeenSet() const { return m_applicationVersionRolledBackToHasBeenSet; }
    inline void SetApplicationVersionRolledBackTo(long long value) { m_applicationVersionRolledBackToHasBeenSet = true; m_applicationVersionRolledBackTo = value; }
    inline ApplicationDetail& WithApplicationVersionRolledBackTo(long long value) { SetApplicationVersionRolledBackTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To create a Managed Service for Apache Flink Studio notebook, you must set
     * the mode to <code>INTERACTIVE</code>. However, for a Managed Service for Apache
     * Flink application, the mode is optional.</p>
     */
    inline ApplicationMode GetApplicationMode() const { return m_applicationMode; }
    inline bool ApplicationModeHasBeenSet() const { return m_applicationModeHasBeenSet; }
    inline void SetApplicationMode(ApplicationMode value) { m_applicationModeHasBeenSet = true; m_applicationMode = value; }
    inline ApplicationDetail& WithApplicationMode(ApplicationMode value) { SetApplicationMode(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationARN;
    bool m_applicationARNHasBeenSet = false;

    Aws::String m_applicationDescription;
    bool m_applicationDescriptionHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    RuntimeEnvironment m_runtimeEnvironment{RuntimeEnvironment::NOT_SET};
    bool m_runtimeEnvironmentHasBeenSet = false;

    Aws::String m_serviceExecutionRole;
    bool m_serviceExecutionRoleHasBeenSet = false;

    ApplicationStatus m_applicationStatus{ApplicationStatus::NOT_SET};
    bool m_applicationStatusHasBeenSet = false;

    long long m_applicationVersionId{0};
    bool m_applicationVersionIdHasBeenSet = false;

    Aws::Utils::DateTime m_createTimestamp{};
    bool m_createTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp{};
    bool m_lastUpdateTimestampHasBeenSet = false;

    ApplicationConfigurationDescription m_applicationConfigurationDescription;
    bool m_applicationConfigurationDescriptionHasBeenSet = false;

    Aws::Vector<CloudWatchLoggingOptionDescription> m_cloudWatchLoggingOptionDescriptions;
    bool m_cloudWatchLoggingOptionDescriptionsHasBeenSet = false;

    ApplicationMaintenanceConfigurationDescription m_applicationMaintenanceConfigurationDescription;
    bool m_applicationMaintenanceConfigurationDescriptionHasBeenSet = false;

    long long m_applicationVersionUpdatedFrom{0};
    bool m_applicationVersionUpdatedFromHasBeenSet = false;

    long long m_applicationVersionRolledBackFrom{0};
    bool m_applicationVersionRolledBackFromHasBeenSet = false;

    Aws::Utils::DateTime m_applicationVersionCreateTimestamp{};
    bool m_applicationVersionCreateTimestampHasBeenSet = false;

    Aws::String m_conditionalToken;
    bool m_conditionalTokenHasBeenSet = false;

    long long m_applicationVersionRolledBackTo{0};
    bool m_applicationVersionRolledBackToHasBeenSet = false;

    ApplicationMode m_applicationMode{ApplicationMode::NOT_SET};
    bool m_applicationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
