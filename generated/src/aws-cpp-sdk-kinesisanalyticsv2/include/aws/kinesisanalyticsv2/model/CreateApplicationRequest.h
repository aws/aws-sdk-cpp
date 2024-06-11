/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/RuntimeEnvironment.h>
#include <aws/kinesisanalyticsv2/model/ApplicationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/ApplicationMode.h>
#include <aws/kinesisanalyticsv2/model/CloudWatchLoggingOption.h>
#include <aws/kinesisanalyticsv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class CreateApplicationRequest : public KinesisAnalyticsV2Request
  {
  public:
    AWS_KINESISANALYTICSV2_API CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of your application (for example, <code>sample-app</code>).</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline CreateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline CreateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary description of the application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const{ return m_applicationDescription; }
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }
    inline void SetApplicationDescription(const Aws::String& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = value; }
    inline void SetApplicationDescription(Aws::String&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::move(value); }
    inline void SetApplicationDescription(const char* value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription.assign(value); }
    inline CreateApplicationRequest& WithApplicationDescription(const Aws::String& value) { SetApplicationDescription(value); return *this;}
    inline CreateApplicationRequest& WithApplicationDescription(Aws::String&& value) { SetApplicationDescription(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithApplicationDescription(const char* value) { SetApplicationDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime environment for the application.</p>
     */
    inline const RuntimeEnvironment& GetRuntimeEnvironment() const{ return m_runtimeEnvironment; }
    inline bool RuntimeEnvironmentHasBeenSet() const { return m_runtimeEnvironmentHasBeenSet; }
    inline void SetRuntimeEnvironment(const RuntimeEnvironment& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = value; }
    inline void SetRuntimeEnvironment(RuntimeEnvironment&& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = std::move(value); }
    inline CreateApplicationRequest& WithRuntimeEnvironment(const RuntimeEnvironment& value) { SetRuntimeEnvironment(value); return *this;}
    inline CreateApplicationRequest& WithRuntimeEnvironment(RuntimeEnvironment&& value) { SetRuntimeEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role used by the application to access Kinesis data streams, Kinesis
     * Data Firehose delivery streams, Amazon S3 objects, and other external
     * resources.</p>
     */
    inline const Aws::String& GetServiceExecutionRole() const{ return m_serviceExecutionRole; }
    inline bool ServiceExecutionRoleHasBeenSet() const { return m_serviceExecutionRoleHasBeenSet; }
    inline void SetServiceExecutionRole(const Aws::String& value) { m_serviceExecutionRoleHasBeenSet = true; m_serviceExecutionRole = value; }
    inline void SetServiceExecutionRole(Aws::String&& value) { m_serviceExecutionRoleHasBeenSet = true; m_serviceExecutionRole = std::move(value); }
    inline void SetServiceExecutionRole(const char* value) { m_serviceExecutionRoleHasBeenSet = true; m_serviceExecutionRole.assign(value); }
    inline CreateApplicationRequest& WithServiceExecutionRole(const Aws::String& value) { SetServiceExecutionRole(value); return *this;}
    inline CreateApplicationRequest& WithServiceExecutionRole(Aws::String&& value) { SetServiceExecutionRole(std::move(value)); return *this;}
    inline CreateApplicationRequest& WithServiceExecutionRole(const char* value) { SetServiceExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to configure the application.</p>
     */
    inline const ApplicationConfiguration& GetApplicationConfiguration() const{ return m_applicationConfiguration; }
    inline bool ApplicationConfigurationHasBeenSet() const { return m_applicationConfigurationHasBeenSet; }
    inline void SetApplicationConfiguration(const ApplicationConfiguration& value) { m_applicationConfigurationHasBeenSet = true; m_applicationConfiguration = value; }
    inline void SetApplicationConfiguration(ApplicationConfiguration&& value) { m_applicationConfigurationHasBeenSet = true; m_applicationConfiguration = std::move(value); }
    inline CreateApplicationRequest& WithApplicationConfiguration(const ApplicationConfiguration& value) { SetApplicationConfiguration(value); return *this;}
    inline CreateApplicationRequest& WithApplicationConfiguration(ApplicationConfiguration&& value) { SetApplicationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to configure an Amazon CloudWatch log stream to monitor
     * application configuration errors. </p>
     */
    inline const Aws::Vector<CloudWatchLoggingOption>& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    inline void SetCloudWatchLoggingOptions(const Aws::Vector<CloudWatchLoggingOption>& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }
    inline void SetCloudWatchLoggingOptions(Aws::Vector<CloudWatchLoggingOption>&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }
    inline CreateApplicationRequest& WithCloudWatchLoggingOptions(const Aws::Vector<CloudWatchLoggingOption>& value) { SetCloudWatchLoggingOptions(value); return *this;}
    inline CreateApplicationRequest& WithCloudWatchLoggingOptions(Aws::Vector<CloudWatchLoggingOption>&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddCloudWatchLoggingOptions(const CloudWatchLoggingOption& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions.push_back(value); return *this; }
    inline CreateApplicationRequest& AddCloudWatchLoggingOptions(CloudWatchLoggingOption&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/java/how-tagging.html">Using
     * Tagging</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateApplicationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateApplicationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateApplicationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateApplicationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use the <code>STREAMING</code> mode to create a Managed Service for Apache
     * Flink application. To create a Managed Service for Apache Flink Studio notebook,
     * use the <code>INTERACTIVE</code> mode.</p>
     */
    inline const ApplicationMode& GetApplicationMode() const{ return m_applicationMode; }
    inline bool ApplicationModeHasBeenSet() const { return m_applicationModeHasBeenSet; }
    inline void SetApplicationMode(const ApplicationMode& value) { m_applicationModeHasBeenSet = true; m_applicationMode = value; }
    inline void SetApplicationMode(ApplicationMode&& value) { m_applicationModeHasBeenSet = true; m_applicationMode = std::move(value); }
    inline CreateApplicationRequest& WithApplicationMode(const ApplicationMode& value) { SetApplicationMode(value); return *this;}
    inline CreateApplicationRequest& WithApplicationMode(ApplicationMode&& value) { SetApplicationMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_applicationDescription;
    bool m_applicationDescriptionHasBeenSet = false;

    RuntimeEnvironment m_runtimeEnvironment;
    bool m_runtimeEnvironmentHasBeenSet = false;

    Aws::String m_serviceExecutionRole;
    bool m_serviceExecutionRoleHasBeenSet = false;

    ApplicationConfiguration m_applicationConfiguration;
    bool m_applicationConfigurationHasBeenSet = false;

    Aws::Vector<CloudWatchLoggingOption> m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ApplicationMode m_applicationMode;
    bool m_applicationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
