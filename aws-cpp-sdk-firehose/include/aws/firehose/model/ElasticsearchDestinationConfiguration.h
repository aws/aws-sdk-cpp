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
   * <p>Describes the configuration of a destination in Amazon ES.</p>
   */
  class AWS_FIREHOSE_API ElasticsearchDestinationConfiguration
  {
  public:
    ElasticsearchDestinationConfiguration();
    ElasticsearchDestinationConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    ElasticsearchDestinationConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ARN of the IAM role to be assumed by Firehose for calling the Amazon ES
     * Configuration API and for indexing documents. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Amazon
     * S3 Bucket Access</a>.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the IAM role to be assumed by Firehose for calling the Amazon ES
     * Configuration API and for indexing documents. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Amazon
     * S3 Bucket Access</a>.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role to be assumed by Firehose for calling the Amazon ES
     * Configuration API and for indexing documents. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Amazon
     * S3 Bucket Access</a>.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role to be assumed by Firehose for calling the Amazon ES
     * Configuration API and for indexing documents. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Amazon
     * S3 Bucket Access</a>.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role to be assumed by Firehose for calling the Amazon ES
     * Configuration API and for indexing documents. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Amazon
     * S3 Bucket Access</a>.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role to be assumed by Firehose for calling the Amazon ES
     * Configuration API and for indexing documents. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Amazon
     * S3 Bucket Access</a>.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role to be assumed by Firehose for calling the Amazon ES
     * Configuration API and for indexing documents. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Amazon
     * S3 Bucket Access</a>.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permission
     * for <code>DescribeElasticsearchDomain</code>,
     * <code>DescribeElasticsearchDomains</code> , and
     * <code>DescribeElasticsearchDomainConfig</code> after assuming
     * <b>RoleARN</b>.</p>
     */
    inline const Aws::String& GetDomainARN() const{ return m_domainARN; }

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permission
     * for <code>DescribeElasticsearchDomain</code>,
     * <code>DescribeElasticsearchDomains</code> , and
     * <code>DescribeElasticsearchDomainConfig</code> after assuming
     * <b>RoleARN</b>.</p>
     */
    inline void SetDomainARN(const Aws::String& value) { m_domainARNHasBeenSet = true; m_domainARN = value; }

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permission
     * for <code>DescribeElasticsearchDomain</code>,
     * <code>DescribeElasticsearchDomains</code> , and
     * <code>DescribeElasticsearchDomainConfig</code> after assuming
     * <b>RoleARN</b>.</p>
     */
    inline void SetDomainARN(Aws::String&& value) { m_domainARNHasBeenSet = true; m_domainARN = value; }

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permission
     * for <code>DescribeElasticsearchDomain</code>,
     * <code>DescribeElasticsearchDomains</code> , and
     * <code>DescribeElasticsearchDomainConfig</code> after assuming
     * <b>RoleARN</b>.</p>
     */
    inline void SetDomainARN(const char* value) { m_domainARNHasBeenSet = true; m_domainARN.assign(value); }

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permission
     * for <code>DescribeElasticsearchDomain</code>,
     * <code>DescribeElasticsearchDomains</code> , and
     * <code>DescribeElasticsearchDomainConfig</code> after assuming
     * <b>RoleARN</b>.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithDomainARN(const Aws::String& value) { SetDomainARN(value); return *this;}

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permission
     * for <code>DescribeElasticsearchDomain</code>,
     * <code>DescribeElasticsearchDomains</code> , and
     * <code>DescribeElasticsearchDomainConfig</code> after assuming
     * <b>RoleARN</b>.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithDomainARN(Aws::String&& value) { SetDomainARN(value); return *this;}

    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permission
     * for <code>DescribeElasticsearchDomain</code>,
     * <code>DescribeElasticsearchDomains</code> , and
     * <code>DescribeElasticsearchDomainConfig</code> after assuming
     * <b>RoleARN</b>.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithDomainARN(const char* value) { SetDomainARN(value); return *this;}

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
    inline ElasticsearchDestinationConfiguration& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithIndexName(Aws::String&& value) { SetIndexName(value); return *this;}

    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithIndexName(const char* value) { SetIndexName(value); return *this;}

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
    inline ElasticsearchDestinationConfiguration& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The Elasticsearch type name.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithTypeName(Aws::String&& value) { SetTypeName(value); return *this;}

    /**
     * <p>The Elasticsearch type name.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithTypeName(const char* value) { SetTypeName(value); return *this;}

    /**
     * <p>The Elasticsearch index rotation period. Index rotation appends a timestamp
     * to the IndexName to facilitate expiration of old data. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index
     * Rotation for Amazon Elasticsearch Service Destination</a>. Default value
     * is <code>OneDay</code>.</p>
     */
    inline const ElasticsearchIndexRotationPeriod& GetIndexRotationPeriod() const{ return m_indexRotationPeriod; }

    /**
     * <p>The Elasticsearch index rotation period. Index rotation appends a timestamp
     * to the IndexName to facilitate expiration of old data. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index
     * Rotation for Amazon Elasticsearch Service Destination</a>. Default value
     * is <code>OneDay</code>.</p>
     */
    inline void SetIndexRotationPeriod(const ElasticsearchIndexRotationPeriod& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }

    /**
     * <p>The Elasticsearch index rotation period. Index rotation appends a timestamp
     * to the IndexName to facilitate expiration of old data. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index
     * Rotation for Amazon Elasticsearch Service Destination</a>. Default value
     * is <code>OneDay</code>.</p>
     */
    inline void SetIndexRotationPeriod(ElasticsearchIndexRotationPeriod&& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }

    /**
     * <p>The Elasticsearch index rotation period. Index rotation appends a timestamp
     * to the IndexName to facilitate expiration of old data. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index
     * Rotation for Amazon Elasticsearch Service Destination</a>. Default value
     * is <code>OneDay</code>.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithIndexRotationPeriod(const ElasticsearchIndexRotationPeriod& value) { SetIndexRotationPeriod(value); return *this;}

    /**
     * <p>The Elasticsearch index rotation period. Index rotation appends a timestamp
     * to the IndexName to facilitate expiration of old data. For more information, see
     * <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index
     * Rotation for Amazon Elasticsearch Service Destination</a>. Default value
     * is <code>OneDay</code>.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithIndexRotationPeriod(ElasticsearchIndexRotationPeriod&& value) { SetIndexRotationPeriod(value); return *this;}

    /**
     * <p>Buffering options. If no value is specified,
     * <b>ElasticsearchBufferingHints</b> object default values are used. </p>
     */
    inline const ElasticsearchBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }

    /**
     * <p>Buffering options. If no value is specified,
     * <b>ElasticsearchBufferingHints</b> object default values are used. </p>
     */
    inline void SetBufferingHints(const ElasticsearchBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    /**
     * <p>Buffering options. If no value is specified,
     * <b>ElasticsearchBufferingHints</b> object default values are used. </p>
     */
    inline void SetBufferingHints(ElasticsearchBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    /**
     * <p>Buffering options. If no value is specified,
     * <b>ElasticsearchBufferingHints</b> object default values are used. </p>
     */
    inline ElasticsearchDestinationConfiguration& WithBufferingHints(const ElasticsearchBufferingHints& value) { SetBufferingHints(value); return *this;}

    /**
     * <p>Buffering options. If no value is specified,
     * <b>ElasticsearchBufferingHints</b> object default values are used. </p>
     */
    inline ElasticsearchDestinationConfiguration& WithBufferingHints(ElasticsearchBufferingHints&& value) { SetBufferingHints(value); return *this;}

    /**
     * <p>Configures retry behavior in the event that Firehose is unable to deliver
     * documents to Amazon ES. Default value is 300 (5 minutes).</p>
     */
    inline const ElasticsearchRetryOptions& GetRetryOptions() const{ return m_retryOptions; }

    /**
     * <p>Configures retry behavior in the event that Firehose is unable to deliver
     * documents to Amazon ES. Default value is 300 (5 minutes).</p>
     */
    inline void SetRetryOptions(const ElasticsearchRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    /**
     * <p>Configures retry behavior in the event that Firehose is unable to deliver
     * documents to Amazon ES. Default value is 300 (5 minutes).</p>
     */
    inline void SetRetryOptions(ElasticsearchRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    /**
     * <p>Configures retry behavior in the event that Firehose is unable to deliver
     * documents to Amazon ES. Default value is 300 (5 minutes).</p>
     */
    inline ElasticsearchDestinationConfiguration& WithRetryOptions(const ElasticsearchRetryOptions& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>Configures retry behavior in the event that Firehose is unable to deliver
     * documents to Amazon ES. Default value is 300 (5 minutes).</p>
     */
    inline ElasticsearchDestinationConfiguration& WithRetryOptions(ElasticsearchRetryOptions&& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When set to
     * FailedDocumentsOnly, Firehose writes any documents that could not be indexed to
     * the configured Amazon S3 destination, with elasticsearch-failed/ appended to the
     * key prefix. When set to AllDocuments, Firehose delivers all incoming records to
     * Amazon S3, and also writes failed documents with elasticsearch-failed/ appended
     * to the prefix. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-s3-backup">Amazon
     * S3 Backup for Amazon Elasticsearch Service Destination</a>. Default value is
     * FailedDocumentsOnly.</p>
     */
    inline const ElasticsearchS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When set to
     * FailedDocumentsOnly, Firehose writes any documents that could not be indexed to
     * the configured Amazon S3 destination, with elasticsearch-failed/ appended to the
     * key prefix. When set to AllDocuments, Firehose delivers all incoming records to
     * Amazon S3, and also writes failed documents with elasticsearch-failed/ appended
     * to the prefix. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-s3-backup">Amazon
     * S3 Backup for Amazon Elasticsearch Service Destination</a>. Default value is
     * FailedDocumentsOnly.</p>
     */
    inline void SetS3BackupMode(const ElasticsearchS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When set to
     * FailedDocumentsOnly, Firehose writes any documents that could not be indexed to
     * the configured Amazon S3 destination, with elasticsearch-failed/ appended to the
     * key prefix. When set to AllDocuments, Firehose delivers all incoming records to
     * Amazon S3, and also writes failed documents with elasticsearch-failed/ appended
     * to the prefix. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-s3-backup">Amazon
     * S3 Backup for Amazon Elasticsearch Service Destination</a>. Default value is
     * FailedDocumentsOnly.</p>
     */
    inline void SetS3BackupMode(ElasticsearchS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When set to
     * FailedDocumentsOnly, Firehose writes any documents that could not be indexed to
     * the configured Amazon S3 destination, with elasticsearch-failed/ appended to the
     * key prefix. When set to AllDocuments, Firehose delivers all incoming records to
     * Amazon S3, and also writes failed documents with elasticsearch-failed/ appended
     * to the prefix. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-s3-backup">Amazon
     * S3 Backup for Amazon Elasticsearch Service Destination</a>. Default value is
     * FailedDocumentsOnly.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithS3BackupMode(const ElasticsearchS3BackupMode& value) { SetS3BackupMode(value); return *this;}

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When set to
     * FailedDocumentsOnly, Firehose writes any documents that could not be indexed to
     * the configured Amazon S3 destination, with elasticsearch-failed/ appended to the
     * key prefix. When set to AllDocuments, Firehose delivers all incoming records to
     * Amazon S3, and also writes failed documents with elasticsearch-failed/ appended
     * to the prefix. For more information, see <a
     * href="http://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-s3-backup">Amazon
     * S3 Backup for Amazon Elasticsearch Service Destination</a>. Default value is
     * FailedDocumentsOnly.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithS3BackupMode(ElasticsearchS3BackupMode&& value) { SetS3BackupMode(value); return *this;}

    
    inline const S3DestinationConfiguration& GetS3Configuration() const{ return m_s3Configuration; }

    
    inline void SetS3Configuration(const S3DestinationConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    
    inline void SetS3Configuration(S3DestinationConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    
    inline ElasticsearchDestinationConfiguration& WithS3Configuration(const S3DestinationConfiguration& value) { SetS3Configuration(value); return *this;}

    
    inline ElasticsearchDestinationConfiguration& WithS3Configuration(S3DestinationConfiguration&& value) { SetS3Configuration(value); return *this;}

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
    inline ElasticsearchDestinationConfiguration& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}

    /**
     * <p>Describes CloudWatch logging options for your delivery stream.</p>
     */
    inline ElasticsearchDestinationConfiguration& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(value); return *this;}

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
    S3DestinationConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet;
    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
