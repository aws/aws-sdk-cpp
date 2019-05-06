/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_KINESISANALYTICSV2_API UpdateApplicationRequest : public KinesisAnalyticsV2Request
  {
  public:
    UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The current application version ID. You can retrieve the application version
     * ID using <a>DescribeApplication</a>.</p>
     */
    inline long long GetCurrentApplicationVersionId() const{ return m_currentApplicationVersionId; }

    /**
     * <p>The current application version ID. You can retrieve the application version
     * ID using <a>DescribeApplication</a>.</p>
     */
    inline bool CurrentApplicationVersionIdHasBeenSet() const { return m_currentApplicationVersionIdHasBeenSet; }

    /**
     * <p>The current application version ID. You can retrieve the application version
     * ID using <a>DescribeApplication</a>.</p>
     */
    inline void SetCurrentApplicationVersionId(long long value) { m_currentApplicationVersionIdHasBeenSet = true; m_currentApplicationVersionId = value; }

    /**
     * <p>The current application version ID. You can retrieve the application version
     * ID using <a>DescribeApplication</a>.</p>
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

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    long long m_currentApplicationVersionId;
    bool m_currentApplicationVersionIdHasBeenSet;

    ApplicationConfigurationUpdate m_applicationConfigurationUpdate;
    bool m_applicationConfigurationUpdateHasBeenSet;

    Aws::String m_serviceExecutionRoleUpdate;
    bool m_serviceExecutionRoleUpdateHasBeenSet;

    RunConfigurationUpdate m_runConfigurationUpdate;
    bool m_runConfigurationUpdateHasBeenSet;

    Aws::Vector<CloudWatchLoggingOptionUpdate> m_cloudWatchLoggingOptionUpdates;
    bool m_cloudWatchLoggingOptionUpdatesHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
