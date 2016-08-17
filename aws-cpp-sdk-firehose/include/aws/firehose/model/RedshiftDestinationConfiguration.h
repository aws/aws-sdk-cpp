/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/CopyCommand.h>
#include <aws/firehose/model/RedshiftRetryOptions.h>
#include <aws/firehose/model/S3DestinationConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes the configuration of a destination in Amazon Redshift.</p>
   */
  class AWS_FIREHOSE_API RedshiftDestinationConfiguration
  {
  public:
    RedshiftDestinationConfiguration();
    RedshiftDestinationConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    RedshiftDestinationConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline RedshiftDestinationConfiguration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline RedshiftDestinationConfiguration& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline RedshiftDestinationConfiguration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>The database connection string.</p>
     */
    inline const Aws::String& GetClusterJDBCURL() const{ return m_clusterJDBCURL; }

    /**
     * <p>The database connection string.</p>
     */
    inline void SetClusterJDBCURL(const Aws::String& value) { m_clusterJDBCURLHasBeenSet = true; m_clusterJDBCURL = value; }

    /**
     * <p>The database connection string.</p>
     */
    inline void SetClusterJDBCURL(Aws::String&& value) { m_clusterJDBCURLHasBeenSet = true; m_clusterJDBCURL = value; }

    /**
     * <p>The database connection string.</p>
     */
    inline void SetClusterJDBCURL(const char* value) { m_clusterJDBCURLHasBeenSet = true; m_clusterJDBCURL.assign(value); }

    /**
     * <p>The database connection string.</p>
     */
    inline RedshiftDestinationConfiguration& WithClusterJDBCURL(const Aws::String& value) { SetClusterJDBCURL(value); return *this;}

    /**
     * <p>The database connection string.</p>
     */
    inline RedshiftDestinationConfiguration& WithClusterJDBCURL(Aws::String&& value) { SetClusterJDBCURL(value); return *this;}

    /**
     * <p>The database connection string.</p>
     */
    inline RedshiftDestinationConfiguration& WithClusterJDBCURL(const char* value) { SetClusterJDBCURL(value); return *this;}

    /**
     * <p>The <code>COPY</code> command.</p>
     */
    inline const CopyCommand& GetCopyCommand() const{ return m_copyCommand; }

    /**
     * <p>The <code>COPY</code> command.</p>
     */
    inline void SetCopyCommand(const CopyCommand& value) { m_copyCommandHasBeenSet = true; m_copyCommand = value; }

    /**
     * <p>The <code>COPY</code> command.</p>
     */
    inline void SetCopyCommand(CopyCommand&& value) { m_copyCommandHasBeenSet = true; m_copyCommand = value; }

    /**
     * <p>The <code>COPY</code> command.</p>
     */
    inline RedshiftDestinationConfiguration& WithCopyCommand(const CopyCommand& value) { SetCopyCommand(value); return *this;}

    /**
     * <p>The <code>COPY</code> command.</p>
     */
    inline RedshiftDestinationConfiguration& WithCopyCommand(CopyCommand&& value) { SetCopyCommand(value); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The name of the user.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The name of the user.</p>
     */
    inline RedshiftDestinationConfiguration& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline RedshiftDestinationConfiguration& WithUsername(Aws::String&& value) { SetUsername(value); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline RedshiftDestinationConfiguration& WithUsername(const char* value) { SetUsername(value); return *this;}

    /**
     * <p>The user password.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The user password.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The user password.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The user password.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The user password.</p>
     */
    inline RedshiftDestinationConfiguration& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The user password.</p>
     */
    inline RedshiftDestinationConfiguration& WithPassword(Aws::String&& value) { SetPassword(value); return *this;}

    /**
     * <p>The user password.</p>
     */
    inline RedshiftDestinationConfiguration& WithPassword(const char* value) { SetPassword(value); return *this;}

    /**
     * <p>Configures retry behavior in the event that Firehose is unable to deliver
     * documents to Amazon Redshift. Default value is 3600 (60 minutes).</p>
     */
    inline const RedshiftRetryOptions& GetRetryOptions() const{ return m_retryOptions; }

    /**
     * <p>Configures retry behavior in the event that Firehose is unable to deliver
     * documents to Amazon Redshift. Default value is 3600 (60 minutes).</p>
     */
    inline void SetRetryOptions(const RedshiftRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    /**
     * <p>Configures retry behavior in the event that Firehose is unable to deliver
     * documents to Amazon Redshift. Default value is 3600 (60 minutes).</p>
     */
    inline void SetRetryOptions(RedshiftRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    /**
     * <p>Configures retry behavior in the event that Firehose is unable to deliver
     * documents to Amazon Redshift. Default value is 3600 (60 minutes).</p>
     */
    inline RedshiftDestinationConfiguration& WithRetryOptions(const RedshiftRetryOptions& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>Configures retry behavior in the event that Firehose is unable to deliver
     * documents to Amazon Redshift. Default value is 3600 (60 minutes).</p>
     */
    inline RedshiftDestinationConfiguration& WithRetryOptions(RedshiftRetryOptions&& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>The S3 configuration for the intermediate location from which Amazon Redshift
     * obtains data. Restrictions are described in the topic for
     * <a>CreateDeliveryStream</a>.</p> <p>The compression formats <code>SNAPPY</code>
     * or <code>ZIP</code> cannot be specified in
     * <b>RedshiftDestinationConfiguration.S3Configuration</b> because the Amazon
     * Redshift <code>COPY</code> operation that reads from the S3 bucket doesn't
     * support these compression formats.</p>
     */
    inline const S3DestinationConfiguration& GetS3Configuration() const{ return m_s3Configuration; }

    /**
     * <p>The S3 configuration for the intermediate location from which Amazon Redshift
     * obtains data. Restrictions are described in the topic for
     * <a>CreateDeliveryStream</a>.</p> <p>The compression formats <code>SNAPPY</code>
     * or <code>ZIP</code> cannot be specified in
     * <b>RedshiftDestinationConfiguration.S3Configuration</b> because the Amazon
     * Redshift <code>COPY</code> operation that reads from the S3 bucket doesn't
     * support these compression formats.</p>
     */
    inline void SetS3Configuration(const S3DestinationConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    /**
     * <p>The S3 configuration for the intermediate location from which Amazon Redshift
     * obtains data. Restrictions are described in the topic for
     * <a>CreateDeliveryStream</a>.</p> <p>The compression formats <code>SNAPPY</code>
     * or <code>ZIP</code> cannot be specified in
     * <b>RedshiftDestinationConfiguration.S3Configuration</b> because the Amazon
     * Redshift <code>COPY</code> operation that reads from the S3 bucket doesn't
     * support these compression formats.</p>
     */
    inline void SetS3Configuration(S3DestinationConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    /**
     * <p>The S3 configuration for the intermediate location from which Amazon Redshift
     * obtains data. Restrictions are described in the topic for
     * <a>CreateDeliveryStream</a>.</p> <p>The compression formats <code>SNAPPY</code>
     * or <code>ZIP</code> cannot be specified in
     * <b>RedshiftDestinationConfiguration.S3Configuration</b> because the Amazon
     * Redshift <code>COPY</code> operation that reads from the S3 bucket doesn't
     * support these compression formats.</p>
     */
    inline RedshiftDestinationConfiguration& WithS3Configuration(const S3DestinationConfiguration& value) { SetS3Configuration(value); return *this;}

    /**
     * <p>The S3 configuration for the intermediate location from which Amazon Redshift
     * obtains data. Restrictions are described in the topic for
     * <a>CreateDeliveryStream</a>.</p> <p>The compression formats <code>SNAPPY</code>
     * or <code>ZIP</code> cannot be specified in
     * <b>RedshiftDestinationConfiguration.S3Configuration</b> because the Amazon
     * Redshift <code>COPY</code> operation that reads from the S3 bucket doesn't
     * support these compression formats.</p>
     */
    inline RedshiftDestinationConfiguration& WithS3Configuration(S3DestinationConfiguration&& value) { SetS3Configuration(value); return *this;}

    /**
     * <p>Describes CloudWatch logging options for your delivery stream.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }

    /**
     * <p>Describes CloudWatch logging options for your delivery stream.</p>
     */
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    /**
     * <p>Describes CloudWatch logging options for your delivery stream.</p>
     */
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    /**
     * <p>Describes CloudWatch logging options for your delivery stream.</p>
     */
    inline RedshiftDestinationConfiguration& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}

    /**
     * <p>Describes CloudWatch logging options for your delivery stream.</p>
     */
    inline RedshiftDestinationConfiguration& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(value); return *this;}

  private:
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    Aws::String m_clusterJDBCURL;
    bool m_clusterJDBCURLHasBeenSet;
    CopyCommand m_copyCommand;
    bool m_copyCommandHasBeenSet;
    Aws::String m_username;
    bool m_usernameHasBeenSet;
    Aws::String m_password;
    bool m_passwordHasBeenSet;
    RedshiftRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet;
    S3DestinationConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet;
    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
