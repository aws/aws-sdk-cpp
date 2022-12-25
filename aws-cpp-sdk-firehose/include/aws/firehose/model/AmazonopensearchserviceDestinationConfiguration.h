/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/AmazonopensearchserviceIndexRotationPeriod.h>
#include <aws/firehose/model/AmazonopensearchserviceBufferingHints.h>
#include <aws/firehose/model/AmazonopensearchserviceRetryOptions.h>
#include <aws/firehose/model/AmazonopensearchserviceS3BackupMode.h>
#include <aws/firehose/model/S3DestinationConfiguration.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/VpcConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p>Describes the configuration of a destination in Amazon OpenSearch
   * Service</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/AmazonopensearchserviceDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class AmazonopensearchserviceDestinationConfiguration
  {
  public:
    AWS_FIREHOSE_API AmazonopensearchserviceDestinationConfiguration();
    AWS_FIREHOSE_API AmazonopensearchserviceDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API AmazonopensearchserviceDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon OpenSearch Service Configuration API and for
     * indexing documents.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon OpenSearch Service Configuration API and for
     * indexing documents.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon OpenSearch Service Configuration API and for
     * indexing documents.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon OpenSearch Service Configuration API and for
     * indexing documents.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon OpenSearch Service Configuration API and for
     * indexing documents.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon OpenSearch Service Configuration API and for
     * indexing documents.</p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon OpenSearch Service Configuration API and for
     * indexing documents.</p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Amazon OpenSearch Service Configuration API and for
     * indexing documents.</p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>The ARN of the Amazon OpenSearch Service domain. The IAM role must have
     * permissions for DescribeElasticsearchDomain, DescribeElasticsearchDomains, and
     * DescribeElasticsearchDomainConfig after assuming the role specified in RoleARN.
     * </p>
     */
    inline const Aws::String& GetDomainARN() const{ return m_domainARN; }

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain. The IAM role must have
     * permissions for DescribeElasticsearchDomain, DescribeElasticsearchDomains, and
     * DescribeElasticsearchDomainConfig after assuming the role specified in RoleARN.
     * </p>
     */
    inline bool DomainARNHasBeenSet() const { return m_domainARNHasBeenSet; }

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain. The IAM role must have
     * permissions for DescribeElasticsearchDomain, DescribeElasticsearchDomains, and
     * DescribeElasticsearchDomainConfig after assuming the role specified in RoleARN.
     * </p>
     */
    inline void SetDomainARN(const Aws::String& value) { m_domainARNHasBeenSet = true; m_domainARN = value; }

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain. The IAM role must have
     * permissions for DescribeElasticsearchDomain, DescribeElasticsearchDomains, and
     * DescribeElasticsearchDomainConfig after assuming the role specified in RoleARN.
     * </p>
     */
    inline void SetDomainARN(Aws::String&& value) { m_domainARNHasBeenSet = true; m_domainARN = std::move(value); }

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain. The IAM role must have
     * permissions for DescribeElasticsearchDomain, DescribeElasticsearchDomains, and
     * DescribeElasticsearchDomainConfig after assuming the role specified in RoleARN.
     * </p>
     */
    inline void SetDomainARN(const char* value) { m_domainARNHasBeenSet = true; m_domainARN.assign(value); }

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain. The IAM role must have
     * permissions for DescribeElasticsearchDomain, DescribeElasticsearchDomains, and
     * DescribeElasticsearchDomainConfig after assuming the role specified in RoleARN.
     * </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithDomainARN(const Aws::String& value) { SetDomainARN(value); return *this;}

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain. The IAM role must have
     * permissions for DescribeElasticsearchDomain, DescribeElasticsearchDomains, and
     * DescribeElasticsearchDomainConfig after assuming the role specified in RoleARN.
     * </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithDomainARN(Aws::String&& value) { SetDomainARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain. The IAM role must have
     * permissions for DescribeElasticsearchDomain, DescribeElasticsearchDomains, and
     * DescribeElasticsearchDomainConfig after assuming the role specified in RoleARN.
     * </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithDomainARN(const char* value) { SetDomainARN(value); return *this;}


    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * ClusterEndpoint or the DomainARN field. </p>
     */
    inline const Aws::String& GetClusterEndpoint() const{ return m_clusterEndpoint; }

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * ClusterEndpoint or the DomainARN field. </p>
     */
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * ClusterEndpoint or the DomainARN field. </p>
     */
    inline void SetClusterEndpoint(const Aws::String& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = value; }

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * ClusterEndpoint or the DomainARN field. </p>
     */
    inline void SetClusterEndpoint(Aws::String&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::move(value); }

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * ClusterEndpoint or the DomainARN field. </p>
     */
    inline void SetClusterEndpoint(const char* value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint.assign(value); }

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * ClusterEndpoint or the DomainARN field. </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithClusterEndpoint(const Aws::String& value) { SetClusterEndpoint(value); return *this;}

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * ClusterEndpoint or the DomainARN field. </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithClusterEndpoint(Aws::String&& value) { SetClusterEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * ClusterEndpoint or the DomainARN field. </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithClusterEndpoint(const char* value) { SetClusterEndpoint(value); return *this;}


    /**
     * <p>The ElasticsearAmazon OpenSearch Service index name.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The ElasticsearAmazon OpenSearch Service index name.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The ElasticsearAmazon OpenSearch Service index name.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The ElasticsearAmazon OpenSearch Service index name.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The ElasticsearAmazon OpenSearch Service index name.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The ElasticsearAmazon OpenSearch Service index name.</p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The ElasticsearAmazon OpenSearch Service index name.</p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The ElasticsearAmazon OpenSearch Service index name.</p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The Amazon OpenSearch Service type name. For Elasticsearch 6.x, there can be
     * only one type per index. If you try to specify a new type for an existing index
     * that already has another type, Kinesis Data Firehose returns an error during run
     * time. </p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The Amazon OpenSearch Service type name. For Elasticsearch 6.x, there can be
     * only one type per index. If you try to specify a new type for an existing index
     * that already has another type, Kinesis Data Firehose returns an error during run
     * time. </p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The Amazon OpenSearch Service type name. For Elasticsearch 6.x, there can be
     * only one type per index. If you try to specify a new type for an existing index
     * that already has another type, Kinesis Data Firehose returns an error during run
     * time. </p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The Amazon OpenSearch Service type name. For Elasticsearch 6.x, there can be
     * only one type per index. If you try to specify a new type for an existing index
     * that already has another type, Kinesis Data Firehose returns an error during run
     * time. </p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The Amazon OpenSearch Service type name. For Elasticsearch 6.x, there can be
     * only one type per index. If you try to specify a new type for an existing index
     * that already has another type, Kinesis Data Firehose returns an error during run
     * time. </p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The Amazon OpenSearch Service type name. For Elasticsearch 6.x, there can be
     * only one type per index. If you try to specify a new type for an existing index
     * that already has another type, Kinesis Data Firehose returns an error during run
     * time. </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The Amazon OpenSearch Service type name. For Elasticsearch 6.x, there can be
     * only one type per index. If you try to specify a new type for an existing index
     * that already has another type, Kinesis Data Firehose returns an error during run
     * time. </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The Amazon OpenSearch Service type name. For Elasticsearch 6.x, there can be
     * only one type per index. If you try to specify a new type for an existing index
     * that already has another type, Kinesis Data Firehose returns an error during run
     * time. </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The Amazon OpenSearch Service index rotation period. Index rotation appends a
     * timestamp to the IndexName to facilitate the expiration of old data.</p>
     */
    inline const AmazonopensearchserviceIndexRotationPeriod& GetIndexRotationPeriod() const{ return m_indexRotationPeriod; }

    /**
     * <p>The Amazon OpenSearch Service index rotation period. Index rotation appends a
     * timestamp to the IndexName to facilitate the expiration of old data.</p>
     */
    inline bool IndexRotationPeriodHasBeenSet() const { return m_indexRotationPeriodHasBeenSet; }

    /**
     * <p>The Amazon OpenSearch Service index rotation period. Index rotation appends a
     * timestamp to the IndexName to facilitate the expiration of old data.</p>
     */
    inline void SetIndexRotationPeriod(const AmazonopensearchserviceIndexRotationPeriod& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }

    /**
     * <p>The Amazon OpenSearch Service index rotation period. Index rotation appends a
     * timestamp to the IndexName to facilitate the expiration of old data.</p>
     */
    inline void SetIndexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod&& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = std::move(value); }

    /**
     * <p>The Amazon OpenSearch Service index rotation period. Index rotation appends a
     * timestamp to the IndexName to facilitate the expiration of old data.</p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithIndexRotationPeriod(const AmazonopensearchserviceIndexRotationPeriod& value) { SetIndexRotationPeriod(value); return *this;}

    /**
     * <p>The Amazon OpenSearch Service index rotation period. Index rotation appends a
     * timestamp to the IndexName to facilitate the expiration of old data.</p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithIndexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod&& value) { SetIndexRotationPeriod(std::move(value)); return *this;}


    /**
     * <p>The buffering options. If no value is specified, the default values for
     * AmazonopensearchserviceBufferingHints are used. </p>
     */
    inline const AmazonopensearchserviceBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }

    /**
     * <p>The buffering options. If no value is specified, the default values for
     * AmazonopensearchserviceBufferingHints are used. </p>
     */
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }

    /**
     * <p>The buffering options. If no value is specified, the default values for
     * AmazonopensearchserviceBufferingHints are used. </p>
     */
    inline void SetBufferingHints(const AmazonopensearchserviceBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    /**
     * <p>The buffering options. If no value is specified, the default values for
     * AmazonopensearchserviceBufferingHints are used. </p>
     */
    inline void SetBufferingHints(AmazonopensearchserviceBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }

    /**
     * <p>The buffering options. If no value is specified, the default values for
     * AmazonopensearchserviceBufferingHints are used. </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithBufferingHints(const AmazonopensearchserviceBufferingHints& value) { SetBufferingHints(value); return *this;}

    /**
     * <p>The buffering options. If no value is specified, the default values for
     * AmazonopensearchserviceBufferingHints are used. </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithBufferingHints(AmazonopensearchserviceBufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}


    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to Amazon OpenSearch Service. The default value is 300 (5 minutes).
     * </p>
     */
    inline const AmazonopensearchserviceRetryOptions& GetRetryOptions() const{ return m_retryOptions; }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to Amazon OpenSearch Service. The default value is 300 (5 minutes).
     * </p>
     */
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to Amazon OpenSearch Service. The default value is 300 (5 minutes).
     * </p>
     */
    inline void SetRetryOptions(const AmazonopensearchserviceRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to Amazon OpenSearch Service. The default value is 300 (5 minutes).
     * </p>
     */
    inline void SetRetryOptions(AmazonopensearchserviceRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to Amazon OpenSearch Service. The default value is 300 (5 minutes).
     * </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithRetryOptions(const AmazonopensearchserviceRetryOptions& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to Amazon OpenSearch Service. The default value is 300 (5 minutes).
     * </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithRetryOptions(AmazonopensearchserviceRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}


    /**
     * <p>Defines how documents should be delivered to Amazon S3. When it is set to
     * FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not
     * be indexed to the configured Amazon S3 destination, with
     * AmazonOpenSearchService-failed/ appended to the key prefix. When set to
     * AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3,
     * and also writes failed documents with AmazonOpenSearchService-failed/ appended
     * to the prefix. </p>
     */
    inline const AmazonopensearchserviceS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When it is set to
     * FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not
     * be indexed to the configured Amazon S3 destination, with
     * AmazonOpenSearchService-failed/ appended to the key prefix. When set to
     * AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3,
     * and also writes failed documents with AmazonOpenSearchService-failed/ appended
     * to the prefix. </p>
     */
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When it is set to
     * FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not
     * be indexed to the configured Amazon S3 destination, with
     * AmazonOpenSearchService-failed/ appended to the key prefix. When set to
     * AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3,
     * and also writes failed documents with AmazonOpenSearchService-failed/ appended
     * to the prefix. </p>
     */
    inline void SetS3BackupMode(const AmazonopensearchserviceS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When it is set to
     * FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not
     * be indexed to the configured Amazon S3 destination, with
     * AmazonOpenSearchService-failed/ appended to the key prefix. When set to
     * AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3,
     * and also writes failed documents with AmazonOpenSearchService-failed/ appended
     * to the prefix. </p>
     */
    inline void SetS3BackupMode(AmazonopensearchserviceS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When it is set to
     * FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not
     * be indexed to the configured Amazon S3 destination, with
     * AmazonOpenSearchService-failed/ appended to the key prefix. When set to
     * AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3,
     * and also writes failed documents with AmazonOpenSearchService-failed/ appended
     * to the prefix. </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithS3BackupMode(const AmazonopensearchserviceS3BackupMode& value) { SetS3BackupMode(value); return *this;}

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When it is set to
     * FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not
     * be indexed to the configured Amazon S3 destination, with
     * AmazonOpenSearchService-failed/ appended to the key prefix. When set to
     * AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3,
     * and also writes failed documents with AmazonOpenSearchService-failed/ appended
     * to the prefix. </p>
     */
    inline AmazonopensearchserviceDestinationConfiguration& WithS3BackupMode(AmazonopensearchserviceS3BackupMode&& value) { SetS3BackupMode(std::move(value)); return *this;}


    
    inline const S3DestinationConfiguration& GetS3Configuration() const{ return m_s3Configuration; }

    
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }

    
    inline void SetS3Configuration(const S3DestinationConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    
    inline void SetS3Configuration(S3DestinationConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }

    
    inline AmazonopensearchserviceDestinationConfiguration& WithS3Configuration(const S3DestinationConfiguration& value) { SetS3Configuration(value); return *this;}

    
    inline AmazonopensearchserviceDestinationConfiguration& WithS3Configuration(S3DestinationConfiguration&& value) { SetS3Configuration(std::move(value)); return *this;}


    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }

    
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }

    
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }

    
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }

    
    inline AmazonopensearchserviceDestinationConfiguration& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}

    
    inline AmazonopensearchserviceDestinationConfiguration& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}


    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }

    
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }

    
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }

    
    inline AmazonopensearchserviceDestinationConfiguration& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}

    
    inline AmazonopensearchserviceDestinationConfiguration& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}


    
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    
    inline AmazonopensearchserviceDestinationConfiguration& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    
    inline AmazonopensearchserviceDestinationConfiguration& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::String m_domainARN;
    bool m_domainARNHasBeenSet = false;

    Aws::String m_clusterEndpoint;
    bool m_clusterEndpointHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    AmazonopensearchserviceIndexRotationPeriod m_indexRotationPeriod;
    bool m_indexRotationPeriodHasBeenSet = false;

    AmazonopensearchserviceBufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet = false;

    AmazonopensearchserviceRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    AmazonopensearchserviceS3BackupMode m_s3BackupMode;
    bool m_s3BackupModeHasBeenSet = false;

    S3DestinationConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
