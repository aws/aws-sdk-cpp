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
    AWS_KINESISANALYTICSV2_API ApplicationDetail();
    AWS_KINESISANALYTICSV2_API ApplicationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline bool ApplicationARNHasBeenSet() const { return m_applicationARNHasBeenSet; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARNHasBeenSet = true; m_applicationARN = value; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARNHasBeenSet = true; m_applicationARN = std::move(value); }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetApplicationARN(const char* value) { m_applicationARNHasBeenSet = true; m_applicationARN.assign(value); }

    /**
     * <p>The ARN of the application.</p>
     */
    inline ApplicationDetail& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}

    /**
     * <p>The ARN of the application.</p>
     */
    inline ApplicationDetail& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the application.</p>
     */
    inline ApplicationDetail& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}


    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const{ return m_applicationDescription; }

    /**
     * <p>The description of the application.</p>
     */
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetApplicationDescription(const Aws::String& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = value; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetApplicationDescription(Aws::String&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::move(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetApplicationDescription(const char* value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription.assign(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline ApplicationDetail& WithApplicationDescription(const Aws::String& value) { SetApplicationDescription(value); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline ApplicationDetail& WithApplicationDescription(Aws::String&& value) { SetApplicationDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline ApplicationDetail& WithApplicationDescription(const char* value) { SetApplicationDescription(value); return *this;}


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline ApplicationDetail& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline ApplicationDetail& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline ApplicationDetail& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The runtime environment for the application.</p>
     */
    inline const RuntimeEnvironment& GetRuntimeEnvironment() const{ return m_runtimeEnvironment; }

    /**
     * <p>The runtime environment for the application.</p>
     */
    inline bool RuntimeEnvironmentHasBeenSet() const { return m_runtimeEnvironmentHasBeenSet; }

    /**
     * <p>The runtime environment for the application.</p>
     */
    inline void SetRuntimeEnvironment(const RuntimeEnvironment& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = value; }

    /**
     * <p>The runtime environment for the application.</p>
     */
    inline void SetRuntimeEnvironment(RuntimeEnvironment&& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = std::move(value); }

    /**
     * <p>The runtime environment for the application.</p>
     */
    inline ApplicationDetail& WithRuntimeEnvironment(const RuntimeEnvironment& value) { SetRuntimeEnvironment(value); return *this;}

    /**
     * <p>The runtime environment for the application.</p>
     */
    inline ApplicationDetail& WithRuntimeEnvironment(RuntimeEnvironment&& value) { SetRuntimeEnvironment(std::move(value)); return *this;}


    /**
     * <p>Specifies the IAM role that the application uses to access external
     * resources.</p>
     */
    inline const Aws::String& GetServiceExecutionRole() const{ return m_serviceExecutionRole; }

    /**
     * <p>Specifies the IAM role that the application uses to access external
     * resources.</p>
     */
    inline bool ServiceExecutionRoleHasBeenSet() const { return m_serviceExecutionRoleHasBeenSet; }

    /**
     * <p>Specifies the IAM role that the application uses to access external
     * resources.</p>
     */
    inline void SetServiceExecutionRole(const Aws::String& value) { m_serviceExecutionRoleHasBeenSet = true; m_serviceExecutionRole = value; }

    /**
     * <p>Specifies the IAM role that the application uses to access external
     * resources.</p>
     */
    inline void SetServiceExecutionRole(Aws::String&& value) { m_serviceExecutionRoleHasBeenSet = true; m_serviceExecutionRole = std::move(value); }

    /**
     * <p>Specifies the IAM role that the application uses to access external
     * resources.</p>
     */
    inline void SetServiceExecutionRole(const char* value) { m_serviceExecutionRoleHasBeenSet = true; m_serviceExecutionRole.assign(value); }

    /**
     * <p>Specifies the IAM role that the application uses to access external
     * resources.</p>
     */
    inline ApplicationDetail& WithServiceExecutionRole(const Aws::String& value) { SetServiceExecutionRole(value); return *this;}

    /**
     * <p>Specifies the IAM role that the application uses to access external
     * resources.</p>
     */
    inline ApplicationDetail& WithServiceExecutionRole(Aws::String&& value) { SetServiceExecutionRole(std::move(value)); return *this;}

    /**
     * <p>Specifies the IAM role that the application uses to access external
     * resources.</p>
     */
    inline ApplicationDetail& WithServiceExecutionRole(const char* value) { SetServiceExecutionRole(value); return *this;}


    /**
     * <p>The status of the application.</p>
     */
    inline const ApplicationStatus& GetApplicationStatus() const{ return m_applicationStatus; }

    /**
     * <p>The status of the application.</p>
     */
    inline bool ApplicationStatusHasBeenSet() const { return m_applicationStatusHasBeenSet; }

    /**
     * <p>The status of the application.</p>
     */
    inline void SetApplicationStatus(const ApplicationStatus& value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = value; }

    /**
     * <p>The status of the application.</p>
     */
    inline void SetApplicationStatus(ApplicationStatus&& value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = std::move(value); }

    /**
     * <p>The status of the application.</p>
     */
    inline ApplicationDetail& WithApplicationStatus(const ApplicationStatus& value) { SetApplicationStatus(value); return *this;}

    /**
     * <p>The status of the application.</p>
     */
    inline ApplicationDetail& WithApplicationStatus(ApplicationStatus&& value) { SetApplicationStatus(std::move(value)); return *this;}


    /**
     * <p>Provides the current application version. Kinesis Data Analytics updates the
     * <code>ApplicationVersionId</code> each time you update the application.</p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }

    /**
     * <p>Provides the current application version. Kinesis Data Analytics updates the
     * <code>ApplicationVersionId</code> each time you update the application.</p>
     */
    inline bool ApplicationVersionIdHasBeenSet() const { return m_applicationVersionIdHasBeenSet; }

    /**
     * <p>Provides the current application version. Kinesis Data Analytics updates the
     * <code>ApplicationVersionId</code> each time you update the application.</p>
     */
    inline void SetApplicationVersionId(long long value) { m_applicationVersionIdHasBeenSet = true; m_applicationVersionId = value; }

    /**
     * <p>Provides the current application version. Kinesis Data Analytics updates the
     * <code>ApplicationVersionId</code> each time you update the application.</p>
     */
    inline ApplicationDetail& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}


    /**
     * <p>The current timestamp when the application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }

    /**
     * <p>The current timestamp when the application was created.</p>
     */
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }

    /**
     * <p>The current timestamp when the application was created.</p>
     */
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }

    /**
     * <p>The current timestamp when the application was created.</p>
     */
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::move(value); }

    /**
     * <p>The current timestamp when the application was created.</p>
     */
    inline ApplicationDetail& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}

    /**
     * <p>The current timestamp when the application was created.</p>
     */
    inline ApplicationDetail& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(std::move(value)); return *this;}


    /**
     * <p>The current timestamp when the application was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const{ return m_lastUpdateTimestamp; }

    /**
     * <p>The current timestamp when the application was last updated.</p>
     */
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }

    /**
     * <p>The current timestamp when the application was last updated.</p>
     */
    inline void SetLastUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = value; }

    /**
     * <p>The current timestamp when the application was last updated.</p>
     */
    inline void SetLastUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::move(value); }

    /**
     * <p>The current timestamp when the application was last updated.</p>
     */
    inline ApplicationDetail& WithLastUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdateTimestamp(value); return *this;}

    /**
     * <p>The current timestamp when the application was last updated.</p>
     */
    inline ApplicationDetail& WithLastUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdateTimestamp(std::move(value)); return *this;}


    /**
     * <p>Describes details about the application code and starting parameters for a
     * Kinesis Data Analytics application.</p>
     */
    inline const ApplicationConfigurationDescription& GetApplicationConfigurationDescription() const{ return m_applicationConfigurationDescription; }

    /**
     * <p>Describes details about the application code and starting parameters for a
     * Kinesis Data Analytics application.</p>
     */
    inline bool ApplicationConfigurationDescriptionHasBeenSet() const { return m_applicationConfigurationDescriptionHasBeenSet; }

    /**
     * <p>Describes details about the application code and starting parameters for a
     * Kinesis Data Analytics application.</p>
     */
    inline void SetApplicationConfigurationDescription(const ApplicationConfigurationDescription& value) { m_applicationConfigurationDescriptionHasBeenSet = true; m_applicationConfigurationDescription = value; }

    /**
     * <p>Describes details about the application code and starting parameters for a
     * Kinesis Data Analytics application.</p>
     */
    inline void SetApplicationConfigurationDescription(ApplicationConfigurationDescription&& value) { m_applicationConfigurationDescriptionHasBeenSet = true; m_applicationConfigurationDescription = std::move(value); }

    /**
     * <p>Describes details about the application code and starting parameters for a
     * Kinesis Data Analytics application.</p>
     */
    inline ApplicationDetail& WithApplicationConfigurationDescription(const ApplicationConfigurationDescription& value) { SetApplicationConfigurationDescription(value); return *this;}

    /**
     * <p>Describes details about the application code and starting parameters for a
     * Kinesis Data Analytics application.</p>
     */
    inline ApplicationDetail& WithApplicationConfigurationDescription(ApplicationConfigurationDescription&& value) { SetApplicationConfigurationDescription(std::move(value)); return *this;}


    /**
     * <p>Describes the application Amazon CloudWatch logging options.</p>
     */
    inline const Aws::Vector<CloudWatchLoggingOptionDescription>& GetCloudWatchLoggingOptionDescriptions() const{ return m_cloudWatchLoggingOptionDescriptions; }

    /**
     * <p>Describes the application Amazon CloudWatch logging options.</p>
     */
    inline bool CloudWatchLoggingOptionDescriptionsHasBeenSet() const { return m_cloudWatchLoggingOptionDescriptionsHasBeenSet; }

    /**
     * <p>Describes the application Amazon CloudWatch logging options.</p>
     */
    inline void SetCloudWatchLoggingOptionDescriptions(const Aws::Vector<CloudWatchLoggingOptionDescription>& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions = value; }

    /**
     * <p>Describes the application Amazon CloudWatch logging options.</p>
     */
    inline void SetCloudWatchLoggingOptionDescriptions(Aws::Vector<CloudWatchLoggingOptionDescription>&& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions = std::move(value); }

    /**
     * <p>Describes the application Amazon CloudWatch logging options.</p>
     */
    inline ApplicationDetail& WithCloudWatchLoggingOptionDescriptions(const Aws::Vector<CloudWatchLoggingOptionDescription>& value) { SetCloudWatchLoggingOptionDescriptions(value); return *this;}

    /**
     * <p>Describes the application Amazon CloudWatch logging options.</p>
     */
    inline ApplicationDetail& WithCloudWatchLoggingOptionDescriptions(Aws::Vector<CloudWatchLoggingOptionDescription>&& value) { SetCloudWatchLoggingOptionDescriptions(std::move(value)); return *this;}

    /**
     * <p>Describes the application Amazon CloudWatch logging options.</p>
     */
    inline ApplicationDetail& AddCloudWatchLoggingOptionDescriptions(const CloudWatchLoggingOptionDescription& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions.push_back(value); return *this; }

    /**
     * <p>Describes the application Amazon CloudWatch logging options.</p>
     */
    inline ApplicationDetail& AddCloudWatchLoggingOptionDescriptions(CloudWatchLoggingOptionDescription&& value) { m_cloudWatchLoggingOptionDescriptionsHasBeenSet = true; m_cloudWatchLoggingOptionDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The details of the maintenance configuration for the application.</p>
     */
    inline const ApplicationMaintenanceConfigurationDescription& GetApplicationMaintenanceConfigurationDescription() const{ return m_applicationMaintenanceConfigurationDescription; }

    /**
     * <p>The details of the maintenance configuration for the application.</p>
     */
    inline bool ApplicationMaintenanceConfigurationDescriptionHasBeenSet() const { return m_applicationMaintenanceConfigurationDescriptionHasBeenSet; }

    /**
     * <p>The details of the maintenance configuration for the application.</p>
     */
    inline void SetApplicationMaintenanceConfigurationDescription(const ApplicationMaintenanceConfigurationDescription& value) { m_applicationMaintenanceConfigurationDescriptionHasBeenSet = true; m_applicationMaintenanceConfigurationDescription = value; }

    /**
     * <p>The details of the maintenance configuration for the application.</p>
     */
    inline void SetApplicationMaintenanceConfigurationDescription(ApplicationMaintenanceConfigurationDescription&& value) { m_applicationMaintenanceConfigurationDescriptionHasBeenSet = true; m_applicationMaintenanceConfigurationDescription = std::move(value); }

    /**
     * <p>The details of the maintenance configuration for the application.</p>
     */
    inline ApplicationDetail& WithApplicationMaintenanceConfigurationDescription(const ApplicationMaintenanceConfigurationDescription& value) { SetApplicationMaintenanceConfigurationDescription(value); return *this;}

    /**
     * <p>The details of the maintenance configuration for the application.</p>
     */
    inline ApplicationDetail& WithApplicationMaintenanceConfigurationDescription(ApplicationMaintenanceConfigurationDescription&& value) { SetApplicationMaintenanceConfigurationDescription(std::move(value)); return *this;}


    /**
     * <p>The previous application version before the latest application update.
     * <a>RollbackApplication</a> reverts the application to this version.</p>
     */
    inline long long GetApplicationVersionUpdatedFrom() const{ return m_applicationVersionUpdatedFrom; }

    /**
     * <p>The previous application version before the latest application update.
     * <a>RollbackApplication</a> reverts the application to this version.</p>
     */
    inline bool ApplicationVersionUpdatedFromHasBeenSet() const { return m_applicationVersionUpdatedFromHasBeenSet; }

    /**
     * <p>The previous application version before the latest application update.
     * <a>RollbackApplication</a> reverts the application to this version.</p>
     */
    inline void SetApplicationVersionUpdatedFrom(long long value) { m_applicationVersionUpdatedFromHasBeenSet = true; m_applicationVersionUpdatedFrom = value; }

    /**
     * <p>The previous application version before the latest application update.
     * <a>RollbackApplication</a> reverts the application to this version.</p>
     */
    inline ApplicationDetail& WithApplicationVersionUpdatedFrom(long long value) { SetApplicationVersionUpdatedFrom(value); return *this;}


    /**
     * <p>If you reverted the application using <a>RollbackApplication</a>, the
     * application version when <code>RollbackApplication</code> was called.</p>
     */
    inline long long GetApplicationVersionRolledBackFrom() const{ return m_applicationVersionRolledBackFrom; }

    /**
     * <p>If you reverted the application using <a>RollbackApplication</a>, the
     * application version when <code>RollbackApplication</code> was called.</p>
     */
    inline bool ApplicationVersionRolledBackFromHasBeenSet() const { return m_applicationVersionRolledBackFromHasBeenSet; }

    /**
     * <p>If you reverted the application using <a>RollbackApplication</a>, the
     * application version when <code>RollbackApplication</code> was called.</p>
     */
    inline void SetApplicationVersionRolledBackFrom(long long value) { m_applicationVersionRolledBackFromHasBeenSet = true; m_applicationVersionRolledBackFrom = value; }

    /**
     * <p>If you reverted the application using <a>RollbackApplication</a>, the
     * application version when <code>RollbackApplication</code> was called.</p>
     */
    inline ApplicationDetail& WithApplicationVersionRolledBackFrom(long long value) { SetApplicationVersionRolledBackFrom(value); return *this;}


    /**
     * <p>A value you use to implement strong concurrency for application updates.</p>
     */
    inline const Aws::String& GetConditionalToken() const{ return m_conditionalToken; }

    /**
     * <p>A value you use to implement strong concurrency for application updates.</p>
     */
    inline bool ConditionalTokenHasBeenSet() const { return m_conditionalTokenHasBeenSet; }

    /**
     * <p>A value you use to implement strong concurrency for application updates.</p>
     */
    inline void SetConditionalToken(const Aws::String& value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken = value; }

    /**
     * <p>A value you use to implement strong concurrency for application updates.</p>
     */
    inline void SetConditionalToken(Aws::String&& value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken = std::move(value); }

    /**
     * <p>A value you use to implement strong concurrency for application updates.</p>
     */
    inline void SetConditionalToken(const char* value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken.assign(value); }

    /**
     * <p>A value you use to implement strong concurrency for application updates.</p>
     */
    inline ApplicationDetail& WithConditionalToken(const Aws::String& value) { SetConditionalToken(value); return *this;}

    /**
     * <p>A value you use to implement strong concurrency for application updates.</p>
     */
    inline ApplicationDetail& WithConditionalToken(Aws::String&& value) { SetConditionalToken(std::move(value)); return *this;}

    /**
     * <p>A value you use to implement strong concurrency for application updates.</p>
     */
    inline ApplicationDetail& WithConditionalToken(const char* value) { SetConditionalToken(value); return *this;}


    /**
     * <p>The version to which you want to roll back the application.</p>
     */
    inline long long GetApplicationVersionRolledBackTo() const{ return m_applicationVersionRolledBackTo; }

    /**
     * <p>The version to which you want to roll back the application.</p>
     */
    inline bool ApplicationVersionRolledBackToHasBeenSet() const { return m_applicationVersionRolledBackToHasBeenSet; }

    /**
     * <p>The version to which you want to roll back the application.</p>
     */
    inline void SetApplicationVersionRolledBackTo(long long value) { m_applicationVersionRolledBackToHasBeenSet = true; m_applicationVersionRolledBackTo = value; }

    /**
     * <p>The version to which you want to roll back the application.</p>
     */
    inline ApplicationDetail& WithApplicationVersionRolledBackTo(long long value) { SetApplicationVersionRolledBackTo(value); return *this;}


    /**
     * <p>To create a Kinesis Data Analytics Studio notebook, you must set the mode to
     * <code>INTERACTIVE</code>. However, for a Kinesis Data Analytics for Apache Flink
     * application, the mode is optional.</p>
     */
    inline const ApplicationMode& GetApplicationMode() const{ return m_applicationMode; }

    /**
     * <p>To create a Kinesis Data Analytics Studio notebook, you must set the mode to
     * <code>INTERACTIVE</code>. However, for a Kinesis Data Analytics for Apache Flink
     * application, the mode is optional.</p>
     */
    inline bool ApplicationModeHasBeenSet() const { return m_applicationModeHasBeenSet; }

    /**
     * <p>To create a Kinesis Data Analytics Studio notebook, you must set the mode to
     * <code>INTERACTIVE</code>. However, for a Kinesis Data Analytics for Apache Flink
     * application, the mode is optional.</p>
     */
    inline void SetApplicationMode(const ApplicationMode& value) { m_applicationModeHasBeenSet = true; m_applicationMode = value; }

    /**
     * <p>To create a Kinesis Data Analytics Studio notebook, you must set the mode to
     * <code>INTERACTIVE</code>. However, for a Kinesis Data Analytics for Apache Flink
     * application, the mode is optional.</p>
     */
    inline void SetApplicationMode(ApplicationMode&& value) { m_applicationModeHasBeenSet = true; m_applicationMode = std::move(value); }

    /**
     * <p>To create a Kinesis Data Analytics Studio notebook, you must set the mode to
     * <code>INTERACTIVE</code>. However, for a Kinesis Data Analytics for Apache Flink
     * application, the mode is optional.</p>
     */
    inline ApplicationDetail& WithApplicationMode(const ApplicationMode& value) { SetApplicationMode(value); return *this;}

    /**
     * <p>To create a Kinesis Data Analytics Studio notebook, you must set the mode to
     * <code>INTERACTIVE</code>. However, for a Kinesis Data Analytics for Apache Flink
     * application, the mode is optional.</p>
     */
    inline ApplicationDetail& WithApplicationMode(ApplicationMode&& value) { SetApplicationMode(std::move(value)); return *this;}

  private:

    Aws::String m_applicationARN;
    bool m_applicationARNHasBeenSet = false;

    Aws::String m_applicationDescription;
    bool m_applicationDescriptionHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    RuntimeEnvironment m_runtimeEnvironment;
    bool m_runtimeEnvironmentHasBeenSet = false;

    Aws::String m_serviceExecutionRole;
    bool m_serviceExecutionRoleHasBeenSet = false;

    ApplicationStatus m_applicationStatus;
    bool m_applicationStatusHasBeenSet = false;

    long long m_applicationVersionId;
    bool m_applicationVersionIdHasBeenSet = false;

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp;
    bool m_lastUpdateTimestampHasBeenSet = false;

    ApplicationConfigurationDescription m_applicationConfigurationDescription;
    bool m_applicationConfigurationDescriptionHasBeenSet = false;

    Aws::Vector<CloudWatchLoggingOptionDescription> m_cloudWatchLoggingOptionDescriptions;
    bool m_cloudWatchLoggingOptionDescriptionsHasBeenSet = false;

    ApplicationMaintenanceConfigurationDescription m_applicationMaintenanceConfigurationDescription;
    bool m_applicationMaintenanceConfigurationDescriptionHasBeenSet = false;

    long long m_applicationVersionUpdatedFrom;
    bool m_applicationVersionUpdatedFromHasBeenSet = false;

    long long m_applicationVersionRolledBackFrom;
    bool m_applicationVersionRolledBackFromHasBeenSet = false;

    Aws::String m_conditionalToken;
    bool m_conditionalTokenHasBeenSet = false;

    long long m_applicationVersionRolledBackTo;
    bool m_applicationVersionRolledBackToHasBeenSet = false;

    ApplicationMode m_applicationMode;
    bool m_applicationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
