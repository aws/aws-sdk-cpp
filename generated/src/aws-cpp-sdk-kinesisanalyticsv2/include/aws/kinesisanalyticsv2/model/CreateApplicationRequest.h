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
    AWS_KINESISANALYTICSV2_API CreateApplicationRequest() = default;

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
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    CreateApplicationRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary description of the application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const { return m_applicationDescription; }
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }
    template<typename ApplicationDescriptionT = Aws::String>
    void SetApplicationDescription(ApplicationDescriptionT&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::forward<ApplicationDescriptionT>(value); }
    template<typename ApplicationDescriptionT = Aws::String>
    CreateApplicationRequest& WithApplicationDescription(ApplicationDescriptionT&& value) { SetApplicationDescription(std::forward<ApplicationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime environment for the application.</p>
     */
    inline RuntimeEnvironment GetRuntimeEnvironment() const { return m_runtimeEnvironment; }
    inline bool RuntimeEnvironmentHasBeenSet() const { return m_runtimeEnvironmentHasBeenSet; }
    inline void SetRuntimeEnvironment(RuntimeEnvironment value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = value; }
    inline CreateApplicationRequest& WithRuntimeEnvironment(RuntimeEnvironment value) { SetRuntimeEnvironment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role used by the application to access Kinesis data streams, Kinesis
     * Data Firehose delivery streams, Amazon S3 objects, and other external
     * resources.</p>
     */
    inline const Aws::String& GetServiceExecutionRole() const { return m_serviceExecutionRole; }
    inline bool ServiceExecutionRoleHasBeenSet() const { return m_serviceExecutionRoleHasBeenSet; }
    template<typename ServiceExecutionRoleT = Aws::String>
    void SetServiceExecutionRole(ServiceExecutionRoleT&& value) { m_serviceExecutionRoleHasBeenSet = true; m_serviceExecutionRole = std::forward<ServiceExecutionRoleT>(value); }
    template<typename ServiceExecutionRoleT = Aws::String>
    CreateApplicationRequest& WithServiceExecutionRole(ServiceExecutionRoleT&& value) { SetServiceExecutionRole(std::forward<ServiceExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to configure the application.</p>
     */
    inline const ApplicationConfiguration& GetApplicationConfiguration() const { return m_applicationConfiguration; }
    inline bool ApplicationConfigurationHasBeenSet() const { return m_applicationConfigurationHasBeenSet; }
    template<typename ApplicationConfigurationT = ApplicationConfiguration>
    void SetApplicationConfiguration(ApplicationConfigurationT&& value) { m_applicationConfigurationHasBeenSet = true; m_applicationConfiguration = std::forward<ApplicationConfigurationT>(value); }
    template<typename ApplicationConfigurationT = ApplicationConfiguration>
    CreateApplicationRequest& WithApplicationConfiguration(ApplicationConfigurationT&& value) { SetApplicationConfiguration(std::forward<ApplicationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to configure an Amazon CloudWatch log stream to monitor
     * application configuration errors. </p>
     */
    inline const Aws::Vector<CloudWatchLoggingOption>& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = Aws::Vector<CloudWatchLoggingOption>>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = Aws::Vector<CloudWatchLoggingOption>>
    CreateApplicationRequest& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOption>
    CreateApplicationRequest& AddCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions.emplace_back(std::forward<CloudWatchLoggingOptionsT>(value)); return *this; }
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
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateApplicationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateApplicationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use the <code>STREAMING</code> mode to create a Managed Service for Apache
     * Flink application. To create a Managed Service for Apache Flink Studio notebook,
     * use the <code>INTERACTIVE</code> mode.</p>
     */
    inline ApplicationMode GetApplicationMode() const { return m_applicationMode; }
    inline bool ApplicationModeHasBeenSet() const { return m_applicationModeHasBeenSet; }
    inline void SetApplicationMode(ApplicationMode value) { m_applicationModeHasBeenSet = true; m_applicationMode = value; }
    inline CreateApplicationRequest& WithApplicationMode(ApplicationMode value) { SetApplicationMode(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_applicationDescription;
    bool m_applicationDescriptionHasBeenSet = false;

    RuntimeEnvironment m_runtimeEnvironment{RuntimeEnvironment::NOT_SET};
    bool m_runtimeEnvironmentHasBeenSet = false;

    Aws::String m_serviceExecutionRole;
    bool m_serviceExecutionRoleHasBeenSet = false;

    ApplicationConfiguration m_applicationConfiguration;
    bool m_applicationConfigurationHasBeenSet = false;

    Aws::Vector<CloudWatchLoggingOption> m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ApplicationMode m_applicationMode{ApplicationMode::NOT_SET};
    bool m_applicationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
