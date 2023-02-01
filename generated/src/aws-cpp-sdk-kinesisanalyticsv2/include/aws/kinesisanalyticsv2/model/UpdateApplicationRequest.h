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


    /**
     * <p>The name of the application to update.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application to update.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application to update.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application to update.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application to update.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application to update.</p>
     */
    inline UpdateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application to update.</p>
     */
    inline UpdateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application to update.</p>
     */
    inline UpdateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The current application version ID. You must provide the
     * <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>.You can retrieve the application version ID using
     * <a>DescribeApplication</a>. For better concurrency support, use the
     * <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>The current application version ID. You must provide the
     * <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>.You can retrieve the application version ID using
     * <a>DescribeApplication</a>. For better concurrency support, use the
     * <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }

    /**
     * <p>The current application version ID. You must provide the
     * <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>.You can retrieve the application version ID using
     * <a>DescribeApplication</a>. For better concurrency support, use the
     * <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>The current application version ID. You must provide the
     * <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>.You can retrieve the application version ID using
     * <a>DescribeApplication</a>. For better concurrency support, use the
     * <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline UpdateApplicationRequest& WithCurrentApplicationVersionId(long long value) { SetCurrentApplicationVersionId(value); return *this;}


    /**
     * <p>Describes application configuration updates.</p>
     */
    inline const ApplicationConfigurationUpdate& GetApplicationConfigurationUpdate() const{ return m_applicationConfigurationUpdate; }

    /**
     * <p>Describes application configuration updates.</p>
     */
    inline bool ApplicationConfigurationUpdateHasBeenSet() const { return m_applicationConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes application configuration updates.</p>
     */
    inline void SetApplicationConfigurationUpdate(const ApplicationConfigurationUpdate& value) { m_applicationConfigurationUpdateHasBeenSet = true; m_applicationConfigurationUpdate = value; }

    /**
     * <p>Describes application configuration updates.</p>
     */
    inline void SetApplicationConfigurationUpdate(ApplicationConfigurationUpdate&& value) { m_applicationConfigurationUpdateHasBeenSet = true; m_applicationConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes application configuration updates.</p>
     */
    inline UpdateApplicationRequest& WithApplicationConfigurationUpdate(const ApplicationConfigurationUpdate& value) { SetApplicationConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes application configuration updates.</p>
     */
    inline UpdateApplicationRequest& WithApplicationConfigurationUpdate(ApplicationConfigurationUpdate&& value) { SetApplicationConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes updates to the service execution role.</p>
     */
    inline const Aws::String& GetServiceExecutionRoleUpdate() const{ return m_serviceExecutionRoleUpdate; }

    /**
     * <p>Describes updates to the service execution role.</p>
     */
    inline bool ServiceExecutionRoleUpdateHasBeenSet() const { return m_serviceExecutionRoleUpdateHasBeenSet; }

    /**
     * <p>Describes updates to the service execution role.</p>
     */
    inline void SetServiceExecutionRoleUpdate(const Aws::String& value) { m_serviceExecutionRoleUpdateHasBeenSet = true; m_serviceExecutionRoleUpdate = value; }

    /**
     * <p>Describes updates to the service execution role.</p>
     */
    inline void SetServiceExecutionRoleUpdate(Aws::String&& value) { m_serviceExecutionRoleUpdateHasBeenSet = true; m_serviceExecutionRoleUpdate = std::move(value); }

    /**
     * <p>Describes updates to the service execution role.</p>
     */
    inline void SetServiceExecutionRoleUpdate(const char* value) { m_serviceExecutionRoleUpdateHasBeenSet = true; m_serviceExecutionRoleUpdate.assign(value); }

    /**
     * <p>Describes updates to the service execution role.</p>
     */
    inline UpdateApplicationRequest& WithServiceExecutionRoleUpdate(const Aws::String& value) { SetServiceExecutionRoleUpdate(value); return *this;}

    /**
     * <p>Describes updates to the service execution role.</p>
     */
    inline UpdateApplicationRequest& WithServiceExecutionRoleUpdate(Aws::String&& value) { SetServiceExecutionRoleUpdate(std::move(value)); return *this;}

    /**
     * <p>Describes updates to the service execution role.</p>
     */
    inline UpdateApplicationRequest& WithServiceExecutionRoleUpdate(const char* value) { SetServiceExecutionRoleUpdate(value); return *this;}


    /**
     * <p>Describes updates to the application's starting parameters.</p>
     */
    inline const RunConfigurationUpdate& GetRunConfigurationUpdate() const{ return m_runConfigurationUpdate; }

    /**
     * <p>Describes updates to the application's starting parameters.</p>
     */
    inline bool RunConfigurationUpdateHasBeenSet() const { return m_runConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes updates to the application's starting parameters.</p>
     */
    inline void SetRunConfigurationUpdate(const RunConfigurationUpdate& value) { m_runConfigurationUpdateHasBeenSet = true; m_runConfigurationUpdate = value; }

    /**
     * <p>Describes updates to the application's starting parameters.</p>
     */
    inline void SetRunConfigurationUpdate(RunConfigurationUpdate&& value) { m_runConfigurationUpdateHasBeenSet = true; m_runConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes updates to the application's starting parameters.</p>
     */
    inline UpdateApplicationRequest& WithRunConfigurationUpdate(const RunConfigurationUpdate& value) { SetRunConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes updates to the application's starting parameters.</p>
     */
    inline UpdateApplicationRequest& WithRunConfigurationUpdate(RunConfigurationUpdate&& value) { SetRunConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes application Amazon CloudWatch logging option updates. You can only
     * update existing CloudWatch logging options with this action. To add a new
     * CloudWatch logging option, use <a>AddApplicationCloudWatchLoggingOption</a>.</p>
     */
    inline const Aws::Vector<CloudWatchLoggingOptionUpdate>& GetCloudWatchLoggingOptionUpdates() const{ return m_cloudWatchLoggingOptionUpdates; }

    /**
     * <p>Describes application Amazon CloudWatch logging option updates. You can only
     * update existing CloudWatch logging options with this action. To add a new
     * CloudWatch logging option, use <a>AddApplicationCloudWatchLoggingOption</a>.</p>
     */
    inline bool CloudWatchLoggingOptionUpdatesHasBeenSet() const { return m_cloudWatchLoggingOptionUpdatesHasBeenSet; }

    /**
     * <p>Describes application Amazon CloudWatch logging option updates. You can only
     * update existing CloudWatch logging options with this action. To add a new
     * CloudWatch logging option, use <a>AddApplicationCloudWatchLoggingOption</a>.</p>
     */
    inline void SetCloudWatchLoggingOptionUpdates(const Aws::Vector<CloudWatchLoggingOptionUpdate>& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates = value; }

    /**
     * <p>Describes application Amazon CloudWatch logging option updates. You can only
     * update existing CloudWatch logging options with this action. To add a new
     * CloudWatch logging option, use <a>AddApplicationCloudWatchLoggingOption</a>.</p>
     */
    inline void SetCloudWatchLoggingOptionUpdates(Aws::Vector<CloudWatchLoggingOptionUpdate>&& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates = std::move(value); }

    /**
     * <p>Describes application Amazon CloudWatch logging option updates. You can only
     * update existing CloudWatch logging options with this action. To add a new
     * CloudWatch logging option, use <a>AddApplicationCloudWatchLoggingOption</a>.</p>
     */
    inline UpdateApplicationRequest& WithCloudWatchLoggingOptionUpdates(const Aws::Vector<CloudWatchLoggingOptionUpdate>& value) { SetCloudWatchLoggingOptionUpdates(value); return *this;}

    /**
     * <p>Describes application Amazon CloudWatch logging option updates. You can only
     * update existing CloudWatch logging options with this action. To add a new
     * CloudWatch logging option, use <a>AddApplicationCloudWatchLoggingOption</a>.</p>
     */
    inline UpdateApplicationRequest& WithCloudWatchLoggingOptionUpdates(Aws::Vector<CloudWatchLoggingOptionUpdate>&& value) { SetCloudWatchLoggingOptionUpdates(std::move(value)); return *this;}

    /**
     * <p>Describes application Amazon CloudWatch logging option updates. You can only
     * update existing CloudWatch logging options with this action. To add a new
     * CloudWatch logging option, use <a>AddApplicationCloudWatchLoggingOption</a>.</p>
     */
    inline UpdateApplicationRequest& AddCloudWatchLoggingOptionUpdates(const CloudWatchLoggingOptionUpdate& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates.push_back(value); return *this; }

    /**
     * <p>Describes application Amazon CloudWatch logging option updates. You can only
     * update existing CloudWatch logging options with this action. To add a new
     * CloudWatch logging option, use <a>AddApplicationCloudWatchLoggingOption</a>.</p>
     */
    inline UpdateApplicationRequest& AddCloudWatchLoggingOptionUpdates(CloudWatchLoggingOptionUpdate&& value) { m_cloudWatchLoggingOptionUpdatesHasBeenSet = true; m_cloudWatchLoggingOptionUpdates.push_back(std::move(value)); return *this; }


    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline const Aws::String& GetConditionalToken() const{ return m_conditionalToken; }

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline bool ConditionalTokenHasBeenSet() const { return m_conditionalTokenHasBeenSet; }

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline void SetConditionalToken(const Aws::String& value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken = value; }

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline void SetConditionalToken(Aws::String&& value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken = std::move(value); }

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline void SetConditionalToken(const char* value) { m_conditionalTokenHasBeenSet = true; m_conditionalToken.assign(value); }

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline UpdateApplicationRequest& WithConditionalToken(const Aws::String& value) { SetConditionalToken(value); return *this;}

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline UpdateApplicationRequest& WithConditionalToken(Aws::String&& value) { SetConditionalToken(std::move(value)); return *this;}

    /**
     * <p>A value you use to implement strong concurrency for application updates. You
     * must provide the <code>CurrentApplicationVersionId</code> or the
     * <code>ConditionalToken</code>. You get the application's current
     * <code>ConditionalToken</code> using <a>DescribeApplication</a>. For better
     * concurrency support, use the <code>ConditionalToken</code> parameter instead of
     * <code>CurrentApplicationVersionId</code>.</p>
     */
    inline UpdateApplicationRequest& WithConditionalToken(const char* value) { SetConditionalToken(value); return *this;}

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
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
