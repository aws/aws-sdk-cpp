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
#include <aws/firehose/model/S3DestinationDescription.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/VpcConfigurationDescription.h>
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
   * <p>The destination description in Amazon OpenSearch Service.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ElasticsearchDestinationDescription">AWS
   * API Reference</a></p>
   */
  class ElasticsearchDestinationDescription
  {
  public:
    AWS_FIREHOSE_API ElasticsearchDestinationDescription() = default;
    AWS_FIREHOSE_API ElasticsearchDestinationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API ElasticsearchDestinationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    ElasticsearchDestinationDescription& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon OpenSearch Service domain. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     * <p>Firehose uses either <code>ClusterEndpoint</code> or <code>DomainARN</code>
     * to send data to Amazon OpenSearch Service.</p>
     */
    inline const Aws::String& GetDomainARN() const { return m_domainARN; }
    inline bool DomainARNHasBeenSet() const { return m_domainARNHasBeenSet; }
    template<typename DomainARNT = Aws::String>
    void SetDomainARN(DomainARNT&& value) { m_domainARNHasBeenSet = true; m_domainARN = std::forward<DomainARNT>(value); }
    template<typename DomainARNT = Aws::String>
    ElasticsearchDestinationDescription& WithDomainARN(DomainARNT&& value) { SetDomainARN(std::forward<DomainARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint to use when communicating with the cluster. Firehose uses either
     * this <code>ClusterEndpoint</code> or the <code>DomainARN</code> field to send
     * data to Amazon OpenSearch Service.</p>
     */
    inline const Aws::String& GetClusterEndpoint() const { return m_clusterEndpoint; }
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }
    template<typename ClusterEndpointT = Aws::String>
    void SetClusterEndpoint(ClusterEndpointT&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::forward<ClusterEndpointT>(value); }
    template<typename ClusterEndpointT = Aws::String>
    ElasticsearchDestinationDescription& WithClusterEndpoint(ClusterEndpointT&& value) { SetClusterEndpoint(std::forward<ClusterEndpointT>(value)); return *this;}
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
    ElasticsearchDestinationDescription& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch type name. This applies to Elasticsearch 6.x and lower
     * versions. For Elasticsearch 7.x and OpenSearch Service 1.x, there's no value for
     * <code>TypeName</code>.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    ElasticsearchDestinationDescription& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch index rotation period</p>
     */
    inline ElasticsearchIndexRotationPeriod GetIndexRotationPeriod() const { return m_indexRotationPeriod; }
    inline bool IndexRotationPeriodHasBeenSet() const { return m_indexRotationPeriodHasBeenSet; }
    inline void SetIndexRotationPeriod(ElasticsearchIndexRotationPeriod value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }
    inline ElasticsearchDestinationDescription& WithIndexRotationPeriod(ElasticsearchIndexRotationPeriod value) { SetIndexRotationPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffering options.</p>
     */
    inline const ElasticsearchBufferingHints& GetBufferingHints() const { return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    template<typename BufferingHintsT = ElasticsearchBufferingHints>
    void SetBufferingHints(BufferingHintsT&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::forward<BufferingHintsT>(value); }
    template<typename BufferingHintsT = ElasticsearchBufferingHints>
    ElasticsearchDestinationDescription& WithBufferingHints(BufferingHintsT&& value) { SetBufferingHints(std::forward<BufferingHintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon OpenSearch Service retry options.</p>
     */
    inline const ElasticsearchRetryOptions& GetRetryOptions() const { return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    template<typename RetryOptionsT = ElasticsearchRetryOptions>
    void SetRetryOptions(RetryOptionsT&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::forward<RetryOptionsT>(value); }
    template<typename RetryOptionsT = ElasticsearchRetryOptions>
    ElasticsearchDestinationDescription& WithRetryOptions(RetryOptionsT&& value) { SetRetryOptions(std::forward<RetryOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline ElasticsearchS3BackupMode GetS3BackupMode() const { return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(ElasticsearchS3BackupMode value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline ElasticsearchDestinationDescription& WithS3BackupMode(ElasticsearchS3BackupMode value) { SetS3BackupMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline const S3DestinationDescription& GetS3DestinationDescription() const { return m_s3DestinationDescription; }
    inline bool S3DestinationDescriptionHasBeenSet() const { return m_s3DestinationDescriptionHasBeenSet; }
    template<typename S3DestinationDescriptionT = S3DestinationDescription>
    void SetS3DestinationDescription(S3DestinationDescriptionT&& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = std::forward<S3DestinationDescriptionT>(value); }
    template<typename S3DestinationDescriptionT = S3DestinationDescription>
    ElasticsearchDestinationDescription& WithS3DestinationDescription(S3DestinationDescriptionT&& value) { SetS3DestinationDescription(std::forward<S3DestinationDescriptionT>(value)); return *this;}
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
    ElasticsearchDestinationDescription& WithProcessingConfiguration(ProcessingConfigurationT&& value) { SetProcessingConfiguration(std::forward<ProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch logging options.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    ElasticsearchDestinationDescription& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the VPC of the Amazon OpenSearch or the Amazon OpenSearch
     * Serverless destination.</p>
     */
    inline const VpcConfigurationDescription& GetVpcConfigurationDescription() const { return m_vpcConfigurationDescription; }
    inline bool VpcConfigurationDescriptionHasBeenSet() const { return m_vpcConfigurationDescriptionHasBeenSet; }
    template<typename VpcConfigurationDescriptionT = VpcConfigurationDescription>
    void SetVpcConfigurationDescription(VpcConfigurationDescriptionT&& value) { m_vpcConfigurationDescriptionHasBeenSet = true; m_vpcConfigurationDescription = std::forward<VpcConfigurationDescriptionT>(value); }
    template<typename VpcConfigurationDescriptionT = VpcConfigurationDescription>
    ElasticsearchDestinationDescription& WithVpcConfigurationDescription(VpcConfigurationDescriptionT&& value) { SetVpcConfigurationDescription(std::forward<VpcConfigurationDescriptionT>(value)); return *this;}
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
    ElasticsearchDestinationDescription& WithDocumentIdOptions(DocumentIdOptionsT&& value) { SetDocumentIdOptions(std::forward<DocumentIdOptionsT>(value)); return *this;}
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

    S3DestinationDescription m_s3DestinationDescription;
    bool m_s3DestinationDescriptionHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    VpcConfigurationDescription m_vpcConfigurationDescription;
    bool m_vpcConfigurationDescriptionHasBeenSet = false;

    DocumentIdOptions m_documentIdOptions;
    bool m_documentIdOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
