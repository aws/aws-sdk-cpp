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
#include <aws/kinesisanalyticsv2/model/RuntimeEnvironment.h>
#include <aws/kinesisanalyticsv2/model/ApplicationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_KINESISANALYTICSV2_API CreateApplicationRequest : public KinesisAnalyticsV2Request
  {
  public:
    CreateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateApplication"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your application (for example, <code>sample-app</code>).</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of your application (for example, <code>sample-app</code>).</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of your application (for example, <code>sample-app</code>).</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of your application (for example, <code>sample-app</code>).</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of your application (for example, <code>sample-app</code>).</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of your application (for example, <code>sample-app</code>).</p>
     */
    inline CreateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of your application (for example, <code>sample-app</code>).</p>
     */
    inline CreateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of your application (for example, <code>sample-app</code>).</p>
     */
    inline CreateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>A summary description of the application.</p>
     */
    inline const Aws::String& GetApplicationDescription() const{ return m_applicationDescription; }

    /**
     * <p>A summary description of the application.</p>
     */
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }

    /**
     * <p>A summary description of the application.</p>
     */
    inline void SetApplicationDescription(const Aws::String& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = value; }

    /**
     * <p>A summary description of the application.</p>
     */
    inline void SetApplicationDescription(Aws::String&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::move(value); }

    /**
     * <p>A summary description of the application.</p>
     */
    inline void SetApplicationDescription(const char* value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription.assign(value); }

    /**
     * <p>A summary description of the application.</p>
     */
    inline CreateApplicationRequest& WithApplicationDescription(const Aws::String& value) { SetApplicationDescription(value); return *this;}

    /**
     * <p>A summary description of the application.</p>
     */
    inline CreateApplicationRequest& WithApplicationDescription(Aws::String&& value) { SetApplicationDescription(std::move(value)); return *this;}

    /**
     * <p>A summary description of the application.</p>
     */
    inline CreateApplicationRequest& WithApplicationDescription(const char* value) { SetApplicationDescription(value); return *this;}


    /**
     * <p>The runtime environment for the application (<code>SQL-1.0</code> or
     * <code>FLINK-1_6</code>).</p>
     */
    inline const RuntimeEnvironment& GetRuntimeEnvironment() const{ return m_runtimeEnvironment; }

    /**
     * <p>The runtime environment for the application (<code>SQL-1.0</code> or
     * <code>FLINK-1_6</code>).</p>
     */
    inline bool RuntimeEnvironmentHasBeenSet() const { return m_runtimeEnvironmentHasBeenSet; }

    /**
     * <p>The runtime environment for the application (<code>SQL-1.0</code> or
     * <code>FLINK-1_6</code>).</p>
     */
    inline void SetRuntimeEnvironment(const RuntimeEnvironment& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = value; }

    /**
     * <p>The runtime environment for the application (<code>SQL-1.0</code> or
     * <code>FLINK-1_6</code>).</p>
     */
    inline void SetRuntimeEnvironment(RuntimeEnvironment&& value) { m_runtimeEnvironmentHasBeenSet = true; m_runtimeEnvironment = std::move(value); }

    /**
     * <p>The runtime environment for the application (<code>SQL-1.0</code> or
     * <code>FLINK-1_6</code>).</p>
     */
    inline CreateApplicationRequest& WithRuntimeEnvironment(const RuntimeEnvironment& value) { SetRuntimeEnvironment(value); return *this;}

    /**
     * <p>The runtime environment for the application (<code>SQL-1.0</code> or
     * <code>FLINK-1_6</code>).</p>
     */
    inline CreateApplicationRequest& WithRuntimeEnvironment(RuntimeEnvironment&& value) { SetRuntimeEnvironment(std::move(value)); return *this;}


    /**
     * <p>The IAM role used by the application to access Kinesis data streams, Kinesis
     * Data Firehose delivery streams, Amazon S3 objects, and other external
     * resources.</p>
     */
    inline const Aws::String& GetServiceExecutionRole() const{ return m_serviceExecutionRole; }

    /**
     * <p>The IAM role used by the application to access Kinesis data streams, Kinesis
     * Data Firehose delivery streams, Amazon S3 objects, and other external
     * resources.</p>
     */
    inline bool ServiceExecutionRoleHasBeenSet() const { return m_serviceExecutionRoleHasBeenSet; }

    /**
     * <p>The IAM role used by the application to access Kinesis data streams, Kinesis
     * Data Firehose delivery streams, Amazon S3 objects, and other external
     * resources.</p>
     */
    inline void SetServiceExecutionRole(const Aws::String& value) { m_serviceExecutionRoleHasBeenSet = true; m_serviceExecutionRole = value; }

    /**
     * <p>The IAM role used by the application to access Kinesis data streams, Kinesis
     * Data Firehose delivery streams, Amazon S3 objects, and other external
     * resources.</p>
     */
    inline void SetServiceExecutionRole(Aws::String&& value) { m_serviceExecutionRoleHasBeenSet = true; m_serviceExecutionRole = std::move(value); }

    /**
     * <p>The IAM role used by the application to access Kinesis data streams, Kinesis
     * Data Firehose delivery streams, Amazon S3 objects, and other external
     * resources.</p>
     */
    inline void SetServiceExecutionRole(const char* value) { m_serviceExecutionRoleHasBeenSet = true; m_serviceExecutionRole.assign(value); }

    /**
     * <p>The IAM role used by the application to access Kinesis data streams, Kinesis
     * Data Firehose delivery streams, Amazon S3 objects, and other external
     * resources.</p>
     */
    inline CreateApplicationRequest& WithServiceExecutionRole(const Aws::String& value) { SetServiceExecutionRole(value); return *this;}

    /**
     * <p>The IAM role used by the application to access Kinesis data streams, Kinesis
     * Data Firehose delivery streams, Amazon S3 objects, and other external
     * resources.</p>
     */
    inline CreateApplicationRequest& WithServiceExecutionRole(Aws::String&& value) { SetServiceExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role used by the application to access Kinesis data streams, Kinesis
     * Data Firehose delivery streams, Amazon S3 objects, and other external
     * resources.</p>
     */
    inline CreateApplicationRequest& WithServiceExecutionRole(const char* value) { SetServiceExecutionRole(value); return *this;}


    /**
     * <p>Use this parameter to configure the application.</p>
     */
    inline const ApplicationConfiguration& GetApplicationConfiguration() const{ return m_applicationConfiguration; }

    /**
     * <p>Use this parameter to configure the application.</p>
     */
    inline bool ApplicationConfigurationHasBeenSet() const { return m_applicationConfigurationHasBeenSet; }

    /**
     * <p>Use this parameter to configure the application.</p>
     */
    inline void SetApplicationConfiguration(const ApplicationConfiguration& value) { m_applicationConfigurationHasBeenSet = true; m_applicationConfiguration = value; }

    /**
     * <p>Use this parameter to configure the application.</p>
     */
    inline void SetApplicationConfiguration(ApplicationConfiguration&& value) { m_applicationConfigurationHasBeenSet = true; m_applicationConfiguration = std::move(value); }

    /**
     * <p>Use this parameter to configure the application.</p>
     */
    inline CreateApplicationRequest& WithApplicationConfiguration(const ApplicationConfiguration& value) { SetApplicationConfiguration(value); return *this;}

    /**
     * <p>Use this parameter to configure the application.</p>
     */
    inline CreateApplicationRequest& WithApplicationConfiguration(ApplicationConfiguration&& value) { SetApplicationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Use this parameter to configure an Amazon CloudWatch log stream to monitor
     * application configuration errors. </p>
     */
    inline const Aws::Vector<CloudWatchLoggingOption>& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }

    /**
     * <p>Use this parameter to configure an Amazon CloudWatch log stream to monitor
     * application configuration errors. </p>
     */
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }

    /**
     * <p>Use this parameter to configure an Amazon CloudWatch log stream to monitor
     * application configuration errors. </p>
     */
    inline void SetCloudWatchLoggingOptions(const Aws::Vector<CloudWatchLoggingOption>& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    /**
     * <p>Use this parameter to configure an Amazon CloudWatch log stream to monitor
     * application configuration errors. </p>
     */
    inline void SetCloudWatchLoggingOptions(Aws::Vector<CloudWatchLoggingOption>&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }

    /**
     * <p>Use this parameter to configure an Amazon CloudWatch log stream to monitor
     * application configuration errors. </p>
     */
    inline CreateApplicationRequest& WithCloudWatchLoggingOptions(const Aws::Vector<CloudWatchLoggingOption>& value) { SetCloudWatchLoggingOptions(value); return *this;}

    /**
     * <p>Use this parameter to configure an Amazon CloudWatch log stream to monitor
     * application configuration errors. </p>
     */
    inline CreateApplicationRequest& WithCloudWatchLoggingOptions(Aws::Vector<CloudWatchLoggingOption>&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}

    /**
     * <p>Use this parameter to configure an Amazon CloudWatch log stream to monitor
     * application configuration errors. </p>
     */
    inline CreateApplicationRequest& AddCloudWatchLoggingOptions(const CloudWatchLoggingOption& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions.push_back(value); return *this; }

    /**
     * <p>Use this parameter to configure an Amazon CloudWatch log stream to monitor
     * application configuration errors. </p>
     */
    inline CreateApplicationRequest& AddCloudWatchLoggingOptions(CloudWatchLoggingOption&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline CreateApplicationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline CreateApplicationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline CreateApplicationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of one or more tags to assign to the application. A tag is a key-value
     * pair that identifies an application. Note that the maximum number of application
     * tags includes system tags. The maximum number of user-defined application tags
     * is 50. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management
     * Guide</i>.</p>
     */
    inline CreateApplicationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_applicationDescription;
    bool m_applicationDescriptionHasBeenSet;

    RuntimeEnvironment m_runtimeEnvironment;
    bool m_runtimeEnvironmentHasBeenSet;

    Aws::String m_serviceExecutionRole;
    bool m_serviceExecutionRoleHasBeenSet;

    ApplicationConfiguration m_applicationConfiguration;
    bool m_applicationConfigurationHasBeenSet;

    Aws::Vector<CloudWatchLoggingOption> m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
