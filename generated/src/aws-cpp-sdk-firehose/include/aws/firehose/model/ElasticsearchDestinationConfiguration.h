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
   * <p>Describes the configuration of a destination in Amazon OpenSearch
   * Service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ElasticsearchDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class ElasticsearchDestinationConfiguration
  {
  public:
    AWS_FIREHOSE_API ElasticsearchDestinationConfiguration() = default;
    AWS_FIREHOSE_API ElasticsearchDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API ElasticsearchDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Firehose for
     * calling the Amazon OpenSearch Service Configuration API and for indexing
     * documents. For more information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/controlling-access.html#using-iam-s3">Grant
     * Firehose Access to an Amazon S3 Destination</a> and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    ElasticsearchDestinationConfiguration& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon OpenSearch Service domain. The IAM role must have
     * permissions for <code>DescribeDomain</code>, <code>DescribeDomains</code>, and
     * <code>DescribeDomainConfig</code> after assuming the role specified in
     * <b>RoleARN</b>. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     * <p>Specify either <code>ClusterEndpoint</code> or <code>DomainARN</code>.</p>
     */
    inline const Aws::String& GetDomainARN() const { return m_domainARN; }
    inline bool DomainARNHasBeenSet() const { return m_domainARNHasBeenSet; }
    template<typename DomainARNT = Aws::String>
    void SetDomainARN(DomainARNT&& value) { m_domainARNHasBeenSet = true; m_domainARN = std::forward<DomainARNT>(value); }
    template<typename DomainARNT = Aws::String>
    ElasticsearchDestinationConfiguration& WithDomainARN(DomainARNT&& value) { SetDomainARN(std::forward<DomainARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * <code>ClusterEndpoint</code> or the <code>DomainARN</code> field.</p>
     */
    inline const Aws::String& GetClusterEndpoint() const { return m_clusterEndpoint; }
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }
    template<typename ClusterEndpointT = Aws::String>
    void SetClusterEndpoint(ClusterEndpointT&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::forward<ClusterEndpointT>(value); }
    template<typename ClusterEndpointT = Aws::String>
    ElasticsearchDestinationConfiguration& WithClusterEndpoint(ClusterEndpointT&& value) { SetClusterEndpoint(std::forward<ClusterEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch index name.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    ElasticsearchDestinationConfiguration& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch type name. For Elasticsearch 6.x, there can be only one
     * type per index. If you try to specify a new type for an existing index that
     * already has another type, Firehose returns an error during run time.</p> <p>For
     * Elasticsearch 7.x, don't specify a <code>TypeName</code>.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    ElasticsearchDestinationConfiguration& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch index rotation period. Index rotation appends a timestamp
     * to the <code>IndexName</code> to facilitate the expiration of old data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/firehose/latest/dev/basic-deliver.html#es-index-rotation">Index
     * Rotation for the Amazon OpenSearch Service Destination</a>. The default value
     * is <code>OneDay</code>.</p>
     */
    inline ElasticsearchIndexRotationPeriod GetIndexRotationPeriod() const { return m_indexRotationPeriod; }
    inline bool IndexRotationPeriodHasBeenSet() const { return m_indexRotationPeriodHasBeenSet; }
    inline void SetIndexRotationPeriod(ElasticsearchIndexRotationPeriod value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }
    inline ElasticsearchDestinationConfiguration& WithIndexRotationPeriod(ElasticsearchIndexRotationPeriod value) { SetIndexRotationPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffering options. If no value is specified, the default values for
     * <code>ElasticsearchBufferingHints</code> are used.</p>
     */
    inline const ElasticsearchBufferingHints& GetBufferingHints() const { return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    template<typename BufferingHintsT = ElasticsearchBufferingHints>
    void SetBufferingHints(BufferingHintsT&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::forward<BufferingHintsT>(value); }
    template<typename BufferingHintsT = ElasticsearchBufferingHints>
    ElasticsearchDestinationConfiguration& WithBufferingHints(BufferingHintsT&& value) { SetBufferingHints(std::forward<BufferingHintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry behavior in case Firehose is unable to deliver documents to Amazon
     * OpenSearch Service. The default value is 300 (5 minutes).</p>
     */
    inline const ElasticsearchRetryOptions& GetRetryOptions() const { return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    template<typename RetryOptionsT = ElasticsearchRetryOptions>
    void SetRetryOptions(RetryOptionsT&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::forward<RetryOptionsT>(value); }
    template<typename RetryOptionsT = ElasticsearchRetryOptions>
    ElasticsearchDestinationConfiguration& WithRetryOptions(RetryOptionsT&& value) { SetRetryOptions(std::forward<RetryOptionsT>(value)); return *this;}
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
     * S3 Backup for the Amazon OpenSearch Service Destination</a>. Default value is
     * <code>FailedDocumentsOnly</code>.</p> <p>You can't change this backup mode after
     * you create the Firehose stream. </p>
     */
    inline ElasticsearchS3BackupMode GetS3BackupMode() const { return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(ElasticsearchS3BackupMode value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline ElasticsearchDestinationConfiguration& WithS3BackupMode(ElasticsearchS3BackupMode value) { SetS3BackupMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the backup Amazon S3 location.</p>
     */
    inline const S3DestinationConfiguration& GetS3Configuration() const { return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    template<typename S3ConfigurationT = S3DestinationConfiguration>
    void SetS3Configuration(S3ConfigurationT&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::forward<S3ConfigurationT>(value); }
    template<typename S3ConfigurationT = S3DestinationConfiguration>
    ElasticsearchDestinationConfiguration& WithS3Configuration(S3ConfigurationT&& value) { SetS3Configuration(std::forward<S3ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data processing configuration.</p>
     */
    inline const ProcessingConfiguration& GetProcessingConfiguration() const { return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    void SetProcessingConfiguration(ProcessingConfigurationT&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::forward<ProcessingConfigurationT>(value); }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    ElasticsearchDestinationConfiguration& WithProcessingConfiguration(ProcessingConfigurationT&& value) { SetProcessingConfiguration(std::forward<ProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch logging options for your Firehose stream.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    ElasticsearchDestinationConfiguration& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the VPC of the Amazon destination.</p>
     */
    inline const VpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = VpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = VpcConfiguration>
    ElasticsearchDestinationConfiguration& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the method for setting up document ID. The supported methods are
     * Firehose generated document ID and OpenSearch Service generated document ID.</p>
     */
    inline const DocumentIdOptions& GetDocumentIdOptions() const { return m_documentIdOptions; }
    inline bool DocumentIdOptionsHasBeenSet() const { return m_documentIdOptionsHasBeenSet; }
    template<typename DocumentIdOptionsT = DocumentIdOptions>
    void SetDocumentIdOptions(DocumentIdOptionsT&& value) { m_documentIdOptionsHasBeenSet = true; m_documentIdOptions = std::forward<DocumentIdOptionsT>(value); }
    template<typename DocumentIdOptionsT = DocumentIdOptions>
    ElasticsearchDestinationConfiguration& WithDocumentIdOptions(DocumentIdOptionsT&& value) { SetDocumentIdOptions(std::forward<DocumentIdOptionsT>(value)); return *this;}
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

    ElasticsearchIndexRotationPeriod m_indexRotationPeriod{ElasticsearchIndexRotationPeriod::NOT_SET};
    bool m_indexRotationPeriodHasBeenSet = false;

    ElasticsearchBufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet = false;

    ElasticsearchRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    ElasticsearchS3BackupMode m_s3BackupMode{ElasticsearchS3BackupMode::NOT_SET};
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
