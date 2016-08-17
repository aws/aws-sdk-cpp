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
#include <aws/firehose/model/S3DestinationDescription.h>
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
   * <p>Describes a destination in Amazon Redshift.</p>
   */
  class AWS_FIREHOSE_API RedshiftDestinationDescription
  {
  public:
    RedshiftDestinationDescription();
    RedshiftDestinationDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    RedshiftDestinationDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline RedshiftDestinationDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline RedshiftDestinationDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline RedshiftDestinationDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

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
    inline RedshiftDestinationDescription& WithClusterJDBCURL(const Aws::String& value) { SetClusterJDBCURL(value); return *this;}

    /**
     * <p>The database connection string.</p>
     */
    inline RedshiftDestinationDescription& WithClusterJDBCURL(Aws::String&& value) { SetClusterJDBCURL(value); return *this;}

    /**
     * <p>The database connection string.</p>
     */
    inline RedshiftDestinationDescription& WithClusterJDBCURL(const char* value) { SetClusterJDBCURL(value); return *this;}

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
    inline RedshiftDestinationDescription& WithCopyCommand(const CopyCommand& value) { SetCopyCommand(value); return *this;}

    /**
     * <p>The <code>COPY</code> command.</p>
     */
    inline RedshiftDestinationDescription& WithCopyCommand(CopyCommand&& value) { SetCopyCommand(value); return *this;}

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
    inline RedshiftDestinationDescription& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline RedshiftDestinationDescription& WithUsername(Aws::String&& value) { SetUsername(value); return *this;}

    /**
     * <p>The name of the user.</p>
     */
    inline RedshiftDestinationDescription& WithUsername(const char* value) { SetUsername(value); return *this;}

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
    inline RedshiftDestinationDescription& WithRetryOptions(const RedshiftRetryOptions& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>Configures retry behavior in the event that Firehose is unable to deliver
     * documents to Amazon Redshift. Default value is 3600 (60 minutes).</p>
     */
    inline RedshiftDestinationDescription& WithRetryOptions(RedshiftRetryOptions&& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline const S3DestinationDescription& GetS3DestinationDescription() const{ return m_s3DestinationDescription; }

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline void SetS3DestinationDescription(const S3DestinationDescription& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = value; }

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline void SetS3DestinationDescription(S3DestinationDescription&& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = value; }

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline RedshiftDestinationDescription& WithS3DestinationDescription(const S3DestinationDescription& value) { SetS3DestinationDescription(value); return *this;}

    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline RedshiftDestinationDescription& WithS3DestinationDescription(S3DestinationDescription&& value) { SetS3DestinationDescription(value); return *this;}

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
    inline RedshiftDestinationDescription& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}

    /**
     * <p>Describes CloudWatch logging options for your delivery stream.</p>
     */
    inline RedshiftDestinationDescription& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(value); return *this;}

  private:
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    Aws::String m_clusterJDBCURL;
    bool m_clusterJDBCURLHasBeenSet;
    CopyCommand m_copyCommand;
    bool m_copyCommandHasBeenSet;
    Aws::String m_username;
    bool m_usernameHasBeenSet;
    RedshiftRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet;
    S3DestinationDescription m_s3DestinationDescription;
    bool m_s3DestinationDescriptionHasBeenSet;
    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
