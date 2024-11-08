/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/ElasticsearchIndexRotationPeriod.h>
#include <aws/firehose/model/ElasticsearchBufferingHints.h>
#include <aws/firehose/model/ElasticsearchRetryOptions.h>
#include <aws/firehose/model/ElasticsearchS3BackupMode.h>
#include <aws/firehose/model/S3DestinationConfiguration.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/VpcConfiguration.h>
#include <aws/firehose/model/DocumentIdOptions.h>
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
   * <p>Describes the configuration of a destination in Amazon ES.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ElasticsearchDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class ElasticsearchDestinationConfiguration
  {
  public:
    AWS_FIREHOSE_API ElasticsearchDestinationConfiguration();
    AWS_FIREHOSE_API ElasticsearchDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API ElasticsearchDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Firehose for
     * calling the Amazon ES Configuration API and for indexing documents. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant
     * Firehose Access to an Amazon S3 Destination</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline ElasticsearchDestinationConfiguration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline ElasticsearchDestinationConfiguration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon ES domain. The IAM role must have permissions
     * for <code>DescribeDomain</code>, <code>DescribeDomains</code>, and
     * <code>DescribeDomainConfig</code> after assuming the role specified in
     * <b>RoleARN</b>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     * <p>Specify either <code>ClusterEndpoint</code> or <code>DomainARN</code>.</p>
     */
    inline const Aws::String& GetDomainARN() const{ return m_domainARN; }
    inline bool DomainARNHasBeenSet() const { return m_domainARNHasBeenSet; }
    inline void SetDomainARN(const Aws::String& value) { m_domainARNHasBeenSet = true; m_domainARN = value; }
    inline void SetDomainARN(Aws::String&& value) { m_domainARNHasBeenSet = true; m_domainARN = std::move(value); }
    inline void SetDomainARN(const char* value) { m_domainARNHasBeenSet = true; m_domainARN.assign(value); }
    inline ElasticsearchDestinationConfiguration& WithDomainARN(const Aws::String& value) { SetDomainARN(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithDomainARN(Aws::String&& value) { SetDomainARN(std::move(value)); return *this;}
    inline ElasticsearchDestinationConfiguration& WithDomainARN(const char* value) { SetDomainARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * <code>ClusterEndpoint</code> or the <code>DomainARN</code> field.</p>
     */
    inline const Aws::String& GetClusterEndpoint() const{ return m_clusterEndpoint; }
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }
    inline void SetClusterEndpoint(const Aws::String& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = value; }
    inline void SetClusterEndpoint(Aws::String&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::move(value); }
    inline void SetClusterEndpoint(const char* value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint.assign(value); }
    inline ElasticsearchDestinationConfiguration& WithClusterEndpoint(const Aws::String& value) { SetClusterEndpoint(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithClusterEndpoint(Aws::String&& value) { SetClusterEndpoint(std::move(value)); return *this;}
    inline ElasticsearchDestinationConfiguration& WithClusterEndpoint(const char* value) { SetClusterEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline ElasticsearchDestinationConfiguration& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline ElasticsearchDestinationConfiguration& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch type name. For Elasticsearch 6.x, there can be only one
     * type per index. If you try to specify a new type for an existing index that
     * already has another type, Firehose returns an error during run time.</p> <p>For
     * Elasticsearch 7.x, don't specify a <code>TypeName</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline ElasticsearchDestinationConfiguration& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline ElasticsearchDestinationConfiguration& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch index rotation period. Index rotation appends a timestamp
     * to the <code>IndexName</code> to facilitate the expiration of old data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index
     * Rotation for the Amazon ES Destination</a>. The default value
     * is <code>OneDay</code>.</p>
     */
    inline const ElasticsearchIndexRotationPeriod& GetIndexRotationPeriod() const{ return m_indexRotationPeriod; }
    inline bool IndexRotationPeriodHasBeenSet() const { return m_indexRotationPeriodHasBeenSet; }
    inline void SetIndexRotationPeriod(const ElasticsearchIndexRotationPeriod& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }
    inline void SetIndexRotationPeriod(ElasticsearchIndexRotationPeriod&& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = std::move(value); }
    inline ElasticsearchDestinationConfiguration& WithIndexRotationPeriod(const ElasticsearchIndexRotationPeriod& value) { SetIndexRotationPeriod(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithIndexRotationPeriod(ElasticsearchIndexRotationPeriod&& value) { SetIndexRotationPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffering options. If no value is specified, the default values for
     * <code>ElasticsearchBufferingHints</code> are used.</p>
     */
    inline const ElasticsearchBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    inline void SetBufferingHints(const ElasticsearchBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }
    inline void SetBufferingHints(ElasticsearchBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }
    inline ElasticsearchDestinationConfiguration& WithBufferingHints(const ElasticsearchBufferingHints& value) { SetBufferingHints(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithBufferingHints(ElasticsearchBufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry behavior in case Firehose is unable to deliver documents to Amazon
     * ES. The default value is 300 (5 minutes).</p>
     */
    inline const ElasticsearchRetryOptions& GetRetryOptions() const{ return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    inline void SetRetryOptions(const ElasticsearchRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }
    inline void SetRetryOptions(ElasticsearchRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }
    inline ElasticsearchDestinationConfiguration& WithRetryOptions(const ElasticsearchRetryOptions& value) { SetRetryOptions(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithRetryOptions(ElasticsearchRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how documents should be delivered to Amazon S3. When it is set to
     * <code>FailedDocumentsOnly</code>, Firehose writes any documents that could not
     * be indexed to the configured Amazon S3 destination, with
     * <code>AmazonOpenSearchService-failed/</code> appended to the key prefix. When
     * set to <code>AllDocuments</code>, Firehose delivers all incoming records to
     * Amazon S3, and also writes failed documents with
     * <code>AmazonOpenSearchService-failed/</code> appended to the prefix. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-s3-backup">Amazon
     * S3 Backup for the Amazon ES Destination</a>. Default value is
     * <code>FailedDocumentsOnly</code>.</p> <p>You can't change this backup mode after
     * you create the Firehose stream. </p>
     */
    inline const ElasticsearchS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(const ElasticsearchS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline void SetS3BackupMode(ElasticsearchS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }
    inline ElasticsearchDestinationConfiguration& WithS3BackupMode(const ElasticsearchS3BackupMode& value) { SetS3BackupMode(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithS3BackupMode(ElasticsearchS3BackupMode&& value) { SetS3BackupMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the backup Amazon S3 location.</p>
     */
    inline const S3DestinationConfiguration& GetS3Configuration() const{ return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    inline void SetS3Configuration(const S3DestinationConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }
    inline void SetS3Configuration(S3DestinationConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }
    inline ElasticsearchDestinationConfiguration& WithS3Configuration(const S3DestinationConfiguration& value) { SetS3Configuration(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithS3Configuration(S3DestinationConfiguration&& value) { SetS3Configuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data processing configuration.</p>
     */
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }
    inline ElasticsearchDestinationConfiguration& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch logging options for your Firehose stream.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }
    inline ElasticsearchDestinationConfiguration& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the VPC of the Amazon destination.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }
    inline ElasticsearchDestinationConfiguration& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the method for setting up document ID. The supported methods are
     * Firehose generated document ID and OpenSearch Service generated document ID.</p>
     */
    inline const DocumentIdOptions& GetDocumentIdOptions() const{ return m_documentIdOptions; }
    inline bool DocumentIdOptionsHasBeenSet() const { return m_documentIdOptionsHasBeenSet; }
    inline void SetDocumentIdOptions(const DocumentIdOptions& value) { m_documentIdOptionsHasBeenSet = true; m_documentIdOptions = value; }
    inline void SetDocumentIdOptions(DocumentIdOptions&& value) { m_documentIdOptionsHasBeenSet = true; m_documentIdOptions = std::move(value); }
    inline ElasticsearchDestinationConfiguration& WithDocumentIdOptions(const DocumentIdOptions& value) { SetDocumentIdOptions(value); return *this;}
    inline ElasticsearchDestinationConfiguration& WithDocumentIdOptions(DocumentIdOptions&& value) { SetDocumentIdOptions(std::move(value)); return *this;}
    ///@}
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

    ElasticsearchIndexRotationPeriod m_indexRotationPeriod;
    bool m_indexRotationPeriodHasBeenSet = false;

    ElasticsearchBufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet = false;

    ElasticsearchRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    ElasticsearchS3BackupMode m_s3BackupMode;
    bool m_s3BackupModeHasBeenSet = false;

    S3DestinationConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    DocumentIdOptions m_documentIdOptions;
    bool m_documentIdOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
