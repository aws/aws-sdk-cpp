/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/ApplicationConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/RunConfigurationUpdate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/RuntimeEnvironment.h>
#include <aws/kinesisanalyticsv2/model/CloudWatchLoggingOptionUpdate.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public KinesisAnalyticsV2Request
  {
  public:
    AWS_KINESISANALYTICSV2_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the application to update.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline UpdateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline UpdateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current application version ID. You must provide the
     * <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>.You can retrieve the application version ID using
     * <a>DescribeApplication</a>. For better concurrency support, use the
     * <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }
    inline UpdateApplicationRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes application configuration updates.</p>
     */
    inline const ApplicationConfigurationUpdate& GetApplicationConfigurationUpdate() const{ return m_applicationConfigurationUpdate; }
    inline bool ApplicationConfigurationUpdateHasBeenSet() const { return m_applicationConfigurationUpdateHasBeenSet; }
    inline void SetApplicationConfigurationUpdate(const ApplicationConfigurationUpdate& value) { m_applicationConfigurationUpdateHasBeenSet = true; m_applicationConfigurationUpdate = value; }
    inline void SetApplicationConfigurationUpdate(ApplicationConfigurationUpdate&& value) { m_applicationConfigurationUpdateHasBeenSet = true; m_applicationConfigurationUpdate = std::move(value); }
    inline UpdateApplicationRequest& WithApplicationConfigurationUpdate(const ApplicationConfigurationUpdate& value) { SetApplicationConfigurationUpdate(value); return *this;}
    inline UpdateApplicationRequest& WithApplicationConfigurationUpdate(ApplicationConfigurationUpdate&& value) { SetApplicationConfigurationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the service execution role.</p>
     */
    inline const Aws::String& GetServiceExecutionRoleUpdate() const{ return m_serviceExecutionRoleUpdate; }
    inline bool ServiceExecutionRoleUpdateHasBeenSet() const { return m_serviceExecutionRoleUpdateHasBeenSet; }
    inline void SetServiceExecutionRoleUpdate(const Aws::String& value) { m_serviceExecutionRoleUpdateHasBeenSet = true; m_serviceExecutionRoleUpdate = value; }
    inline void SetServiceExecutionRoleUpdate(Aws::String&& value) { m_serviceExecutionRoleUpdateHasBeenSet = true; m_serviceExecutionRoleUpdate = std::move(value); }
    inline void SetServiceExecutionRoleUpdate(const char* value) { m_serviceExecutionRoleUpdateHasBeenSet = true; m_serviceExecutionRoleUpdate.assign(value); }
    inline UpdateApplicationRequest& WithServiceExecutionRoleUpdate(const Aws::String& value) { SetServiceExecutionRoleUpdate(value); return *this;}
    inline UpdateApplicationRequest& WithServiceExecutionRoleUpdate(Aws::String&& value) { SetServiceExecutionRoleUpdate(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithServiceExecutionRoleUpdate(const char* value) { SetServiceExecutionRoleUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the application's starting parameters.</p>
     */
    inline const RunConfigurationUpdate& GetRunConfigurationUpdate() const{ return m_runConfigurationUpdate; }
    inline bool RunConfigurationUpdateHasBeenSet() const { return m_runConfigurationUpdateHasBeenSet; }
    inline void SetRunConfigurationUpdate(const RunConfigurationUpdate& value) { m_runConfigurationUpdateHasBeenSet = true; m_runConfigurationUpdate = value; }
    inline void SetRunConfigurationUpdate(RunConfigurationUpdate&& value) { m_runConfigurationUpdateHasBeenSet = true; m_runConfigurationUpdate = std::move(value); }
    inline UpdateApplicationRequest& WithRunConfigurationUpdate(const RunConfigurationUpdate& value) { SetRunConfigurationUpdate(value); return *this;}
    inline UpdateApplicationRequest& WithRunConfigurationUpdate(RunConfigurationUpdate&& value) { SetRunConfigurationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes application Amazon CloudWatch logging option updates. You can only
     * update existing CloudWatch logging options with this action. To add a new
     * CloudWatch logging option, use <a>AddApplicationCloudWatchLoggingOption</a>.</p>
     */
    inline const Aws::Vector<CloudWatchLoggingOptionUpdate>& GetCloudWatchLoggingOptionUpdates() const{ return m_cloudWatchLoggingOptionUpdates; }
    inline bool CloudWatchLoggingOptionUpdatesHasBeenSet() const { return m_cloudWatchLoggingOptionUpdatesHasBeenSet; }
    inline void SetCloudWatchLoggingOptionUpdates(const Aws::Vector<CloudWatchLoggingOptionUpdate>& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates = value; }
    inline void SetCloudWatchLoggingOptionUpdates(Aws::Vector<CloudWatchLoggingOptionUpdate>&& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates = std::move(value); }
    inline UpdateApplicationRequest& WithCloudWatchLoggingOptionUpdates(const Aws::Vector<CloudWatchLoggingOptionUpdate>& value) { SetCloudWatchLoggingOptionUpdates(value); return *this;}
    inline UpdateApplicationRequest& WithCloudWatchLoggingOptionUpdates(Aws::Vector<CloudWatchLoggingOptionUpdate>&& value) { SetCloudWatchLoggingOptionUpdates(std::move(value)); return *this;}
    inline UpdateApplicationRequest& AddCloudWatchLoggingOptionUpdates(const CloudWatchLoggingOptionUpdate& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates.push_back(value); return *this; }
    inline UpdateApplicationRequest& AddCloudWatchLoggingOptionUpdates(CloudWatchLoggingOptionUpdate&& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline const Aws::String& GetConditionalToken() const{ return m_conditionalToken; }
    inline bool ConditionalTokenHasBeenSet() const { return m_conditionalTokenHasBeenSet; }
    inline void SetConditionalToken(const Aws::String& value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken = value; }
    inline void SetConditionalToken(Aws::String&& value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken = std::move(value); }
    inline void SetConditionalToken(const char* value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken.assign(value); }
    inline UpdateApplicationRequest& WithConditionalToken(const Aws::String& value) { SetConditionalToken(value); return *this;}
    inline UpdateApplicationRequest& WithConditionalToken(Aws::String&& value) { SetConditionalToken(std::move(value)); return *this;}
    inline UpdateApplicationRequest& WithConditionalToken(const char* value) { SetConditionalToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the Managed Service for Apache Flink runtime environment used to run
     * your code. To avoid issues you must:</p> <ul> <li> <p>Ensure your new jar and
     * dependencies are compatible with the new runtime selected.</p> </li> <li>
     * <p>Ensure your new code's state is compatible with the snapshot from which your
     * application will start</p> </li> </ul>
     */
    inline const RuntimeEnvironment& GetRuntimeEnvironmentUpdate() const{ return m_runtimeEnvironmentUpdate; }
    inline bool RuntimeEnvironmentUpdateHasBeenSet() const { return m_runtimeEnvironmentUpdateHasBeenSet; }
    inline void SetRuntimeEnvironmentUpdate(const RuntimeEnvironment& value) { m_runtimeEnvironmentUpdateHasBeenSet = true; m_runtimeEnvironmentUpdate = value; }
    inline void SetRuntimeEnvironmentUpdate(RuntimeEnvironment&& value) { m_runtimeEnvironmentUpdateHasBeenSet = true; m_runtimeEnvironmentUpdate = std::move(value); }
    inline UpdateApplicationRequest& WithRuntimeEnvironmentUpdate(const RuntimeEnvironment& value) { SetRuntimeEnvironmentUpdate(value); return *this;}
    inline UpdateApplicationRequest& WithRuntimeEnvironmentUpdate(RuntimeEnvironment&& value) { SetRuntimeEnvironmentUpdate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet = false;

    ApplicationConfigurationUpdate m_applicationConfigurationUpdate;
    bool m_applicationConfigurationUpdateHasBeenSet = false;

    Aws::String m_serviceExecutionRoleUpdate;
    bool m_serviceExecutionRoleUpdateHasBeenSet = false;

    RunConfigurationUpdate m_runConfigurationUpdate;
    bool m_runConfigurationUpdateHasBeenSet = false;

    Aws::Vector<CloudWatchLoggingOptionUpdate> m_cloudWatchLoggingOptionUpdates;
    bool m_cloudWatchLoggingOptionUpdatesHasBeenSet = false;

    Aws::String m_conditionalToken;
    bool m_conditionalTokenHasBeenSet = false;

    RuntimeEnvironment m_runtimeEnvironmentUpdate;
    bool m_runtimeEnvironmentUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
