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
#include <aws/firehose/model/ElasticsearchIndexRotationPeriod.h>
#include <aws/firehose/model/ElasticsearchBufferingHints.h>
#include <aws/firehose/model/ElasticsearchRetryOptions.h>
#include <aws/firehose/model/ElasticsearchS3BackupMode.h>
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
   * <p>The destination description in Amazon ES.</p>
   */
  class AWS_FIREHOSE_API ElasticsearchDestinationDescription
  {
  public:
    ElasticsearchDestinationDescription();
    ElasticsearchDestinationDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    ElasticsearchDestinationDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
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
    inline ElasticsearchDestinationDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline ElasticsearchDestinationDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the AWS credentials.</p>
     */
    inline ElasticsearchDestinationDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the Amazon ES domain.</p>
     */
    inline const Aws::String& GetDomainARN() const{ return m_domainARN; }

    /**
     * <p>The ARN of the Amazon ES domain.</p>
     */
    inline void SetDomainARN(const Aws::String& value) { m_domainARNHasBeenSet = true; m_domainARN = value; }

    /**
     * <p>The ARN of the Amazon ES domain.</p>
     */
    inline void SetDomainARN(Aws::String&& value) { m_domainARNHasBeenSet = true; m_domainARN = value; }

    /**
     * <p>The ARN of the Amazon ES domain.</p>
     */
    inline void SetDomainARN(const char* value) { m_domainARNHasBeenSet = true; m_domainARN.assign(value); }

    /**
     * <p>The ARN of the Amazon ES domain.</p>
     */
    inline ElasticsearchDestinationDescription& WithDomainARN(const Aws::String& value) { SetDomainARN(value); return *this;}

    /**
     * <p>The ARN of the Amazon ES domain.</p>
     */
    inline ElasticsearchDestinationDescription& WithDomainARN(Aws::String&& value) { SetDomainARN(value); return *this;}

    /**
     * <p>The ARN of the Amazon ES domain.</p>
     */
    inline ElasticsearchDestinationDescription& WithDomainARN(const char* value) { SetDomainARN(value); return *this;}

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline ElasticsearchDestinationDescription& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline ElasticsearchDestinationDescription& WithIndexName(Aws::String&& value) { SetIndexName(value); return *this;}

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline ElasticsearchDestinationDescription& WithIndexName(const char* value) { SetIndexName(value); return *this;}

    /**
     * <p>The Elasticsearch type name.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The Elasticsearch type name.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The Elasticsearch type name.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The Elasticsearch type name.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The Elasticsearch type name.</p>
     */
    inline ElasticsearchDestinationDescription& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The Elasticsearch type name.</p>
     */
    inline ElasticsearchDestinationDescription& WithTypeName(Aws::String&& value) { SetTypeName(value); return *this;}

    /**
     * <p>The Elasticsearch type name.</p>
     */
    inline ElasticsearchDestinationDescription& WithTypeName(const char* value) { SetTypeName(value); return *this;}

    /**
     * <p>The Elasticsearch index rotation period</p>
     */
    inline const ElasticsearchIndexRotationPeriod& GetIndexRotationPeriod() const{ return m_indexRotationPeriod; }

    /**
     * <p>The Elasticsearch index rotation period</p>
     */
    inline void SetIndexRotationPeriod(const ElasticsearchIndexRotationPeriod& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }

    /**
     * <p>The Elasticsearch index rotation period</p>
     */
    inline void SetIndexRotationPeriod(ElasticsearchIndexRotationPeriod&& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }

    /**
     * <p>The Elasticsearch index rotation period</p>
     */
    inline ElasticsearchDestinationDescription& WithIndexRotationPeriod(const ElasticsearchIndexRotationPeriod& value) { SetIndexRotationPeriod(value); return *this;}

    /**
     * <p>The Elasticsearch index rotation period</p>
     */
    inline ElasticsearchDestinationDescription& WithIndexRotationPeriod(ElasticsearchIndexRotationPeriod&& value) { SetIndexRotationPeriod(value); return *this;}

    /**
     * <p>Buffering options.</p>
     */
    inline const ElasticsearchBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }

    /**
     * <p>Buffering options.</p>
     */
    inline void SetBufferingHints(const ElasticsearchBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    /**
     * <p>Buffering options.</p>
     */
    inline void SetBufferingHints(ElasticsearchBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    /**
     * <p>Buffering options.</p>
     */
    inline ElasticsearchDestinationDescription& WithBufferingHints(const ElasticsearchBufferingHints& value) { SetBufferingHints(value); return *this;}

    /**
     * <p>Buffering options.</p>
     */
    inline ElasticsearchDestinationDescription& WithBufferingHints(ElasticsearchBufferingHints&& value) { SetBufferingHints(value); return *this;}

    /**
     * <p>Elasticsearch retry options.</p>
     */
    inline const ElasticsearchRetryOptions& GetRetryOptions() const{ return m_retryOptions; }

    /**
     * <p>Elasticsearch retry options.</p>
     */
    inline void SetRetryOptions(const ElasticsearchRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    /**
     * <p>Elasticsearch retry options.</p>
     */
    inline void SetRetryOptions(ElasticsearchRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    /**
     * <p>Elasticsearch retry options.</p>
     */
    inline ElasticsearchDestinationDescription& WithRetryOptions(const ElasticsearchRetryOptions& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>Elasticsearch retry options.</p>
     */
    inline ElasticsearchDestinationDescription& WithRetryOptions(ElasticsearchRetryOptions&& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>Amazon S3 backup mode.</p>
     */
    inline const ElasticsearchS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }

    /**
     * <p>Amazon S3 backup mode.</p>
     */
    inline void SetS3BackupMode(const ElasticsearchS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }

    /**
     * <p>Amazon S3 backup mode.</p>
     */
    inline void SetS3BackupMode(ElasticsearchS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }

    /**
     * <p>Amazon S3 backup mode.</p>
     */
    inline ElasticsearchDestinationDescription& WithS3BackupMode(const ElasticsearchS3BackupMode& value) { SetS3BackupMode(value); return *this;}

    /**
     * <p>Amazon S3 backup mode.</p>
     */
    inline ElasticsearchDestinationDescription& WithS3BackupMode(ElasticsearchS3BackupMode&& value) { SetS3BackupMode(value); return *this;}

    
    inline const S3DestinationDescription& GetS3DestinationDescription() const{ return m_s3DestinationDescription; }

    
    inline void SetS3DestinationDescription(const S3DestinationDescription& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = value; }

    
    inline void SetS3DestinationDescription(S3DestinationDescription&& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = value; }

    
    inline ElasticsearchDestinationDescription& WithS3DestinationDescription(const S3DestinationDescription& value) { SetS3DestinationDescription(value); return *this;}

    
    inline ElasticsearchDestinationDescription& WithS3DestinationDescription(S3DestinationDescription&& value) { SetS3DestinationDescription(value); return *this;}

    /**
     * <p>CloudWatch logging options.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }

    /**
     * <p>CloudWatch logging options.</p>
     */
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    /**
     * <p>CloudWatch logging options.</p>
     */
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    /**
     * <p>CloudWatch logging options.</p>
     */
    inline ElasticsearchDestinationDescription& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}

    /**
     * <p>CloudWatch logging options.</p>
     */
    inline ElasticsearchDestinationDescription& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(value); return *this;}

  private:
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
    Aws::String m_domainARN;
    bool m_domainARNHasBeenSet;
    Aws::String m_indexName;
    bool m_indexNameHasBeenSet;
    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;
    ElasticsearchIndexRotationPeriod m_indexRotationPeriod;
    bool m_indexRotationPeriodHasBeenSet;
    ElasticsearchBufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet;
    ElasticsearchRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet;
    ElasticsearchS3BackupMode m_s3BackupMode;
    bool m_s3BackupModeHasBeenSet;
    S3DestinationDescription m_s3DestinationDescription;
    bool m_s3DestinationDescriptionHasBeenSet;
    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
