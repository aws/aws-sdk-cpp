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
   * <p>The destination description in Amazon ES.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ElasticsearchDestinationDescription">AWS
   * API Reference</a></p>
   */
  class ElasticsearchDestinationDescription
  {
  public:
    AWS_FIREHOSE_API ElasticsearchDestinationDescription();
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
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline ElasticsearchDestinationDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline ElasticsearchDestinationDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline ElasticsearchDestinationDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon ES domain. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and Amazon Web Services Service Namespaces</a>.</p>
     * <p>Firehose uses either <code>ClusterEndpoint</code> or <code>DomainARN</code>
     * to send data to Amazon ES.</p>
     */
    inline const Aws::String& GetDomainARN() const{ return m_domainARN; }
    inline bool DomainARNHasBeenSet() const { return m_domainARNHasBeenSet; }
    inline void SetDomainARN(const Aws::String& value) { m_domainARNHasBeenSet = true; m_domainARN = value; }
    inline void SetDomainARN(Aws::String&& value) { m_domainARNHasBeenSet = true; m_domainARN = std::move(value); }
    inline void SetDomainARN(const char* value) { m_domainARNHasBeenSet = true; m_domainARN.assign(value); }
    inline ElasticsearchDestinationDescription& WithDomainARN(const Aws::String& value) { SetDomainARN(value); return *this;}
    inline ElasticsearchDestinationDescription& WithDomainARN(Aws::String&& value) { SetDomainARN(std::move(value)); return *this;}
    inline ElasticsearchDestinationDescription& WithDomainARN(const char* value) { SetDomainARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint to use when communicating with the cluster. Firehose uses either
     * this <code>ClusterEndpoint</code> or the <code>DomainARN</code> field to send
     * data to Amazon ES.</p>
     */
    inline const Aws::String& GetClusterEndpoint() const{ return m_clusterEndpoint; }
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }
    inline void SetClusterEndpoint(const Aws::String& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = value; }
    inline void SetClusterEndpoint(Aws::String&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::move(value); }
    inline void SetClusterEndpoint(const char* value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint.assign(value); }
    inline ElasticsearchDestinationDescription& WithClusterEndpoint(const Aws::String& value) { SetClusterEndpoint(value); return *this;}
    inline ElasticsearchDestinationDescription& WithClusterEndpoint(Aws::String&& value) { SetClusterEndpoint(std::move(value)); return *this;}
    inline ElasticsearchDestinationDescription& WithClusterEndpoint(const char* value) { SetClusterEndpoint(value); return *this;}
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
    inline ElasticsearchDestinationDescription& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline ElasticsearchDestinationDescription& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline ElasticsearchDestinationDescription& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch type name. This applies to Elasticsearch 6.x and lower
     * versions. For Elasticsearch 7.x and OpenSearch Service 1.x, there's no value for
     * <code>TypeName</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline ElasticsearchDestinationDescription& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline ElasticsearchDestinationDescription& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline ElasticsearchDestinationDescription& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch index rotation period</p>
     */
    inline const ElasticsearchIndexRotationPeriod& GetIndexRotationPeriod() const{ return m_indexRotationPeriod; }
    inline bool IndexRotationPeriodHasBeenSet() const { return m_indexRotationPeriodHasBeenSet; }
    inline void SetIndexRotationPeriod(const ElasticsearchIndexRotationPeriod& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }
    inline void SetIndexRotationPeriod(ElasticsearchIndexRotationPeriod&& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = std::move(value); }
    inline ElasticsearchDestinationDescription& WithIndexRotationPeriod(const ElasticsearchIndexRotationPeriod& value) { SetIndexRotationPeriod(value); return *this;}
    inline ElasticsearchDestinationDescription& WithIndexRotationPeriod(ElasticsearchIndexRotationPeriod&& value) { SetIndexRotationPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffering options.</p>
     */
    inline const ElasticsearchBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    inline void SetBufferingHints(const ElasticsearchBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }
    inline void SetBufferingHints(ElasticsearchBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }
    inline ElasticsearchDestinationDescription& WithBufferingHints(const ElasticsearchBufferingHints& value) { SetBufferingHints(value); return *this;}
    inline ElasticsearchDestinationDescription& WithBufferingHints(ElasticsearchBufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon ES retry options.</p>
     */
    inline const ElasticsearchRetryOptions& GetRetryOptions() const{ return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    inline void SetRetryOptions(const ElasticsearchRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }
    inline void SetRetryOptions(ElasticsearchRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }
    inline ElasticsearchDestinationDescription& WithRetryOptions(const ElasticsearchRetryOptions& value) { SetRetryOptions(value); return *this;}
    inline ElasticsearchDestinationDescription& WithRetryOptions(ElasticsearchRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline const ElasticsearchS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(const ElasticsearchS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline void SetS3BackupMode(ElasticsearchS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }
    inline ElasticsearchDestinationDescription& WithS3BackupMode(const ElasticsearchS3BackupMode& value) { SetS3BackupMode(value); return *this;}
    inline ElasticsearchDestinationDescription& WithS3BackupMode(ElasticsearchS3BackupMode&& value) { SetS3BackupMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 destination.</p>
     */
    inline const S3DestinationDescription& GetS3DestinationDescription() const{ return m_s3DestinationDescription; }
    inline bool S3DestinationDescriptionHasBeenSet() const { return m_s3DestinationDescriptionHasBeenSet; }
    inline void SetS3DestinationDescription(const S3DestinationDescription& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = value; }
    inline void SetS3DestinationDescription(S3DestinationDescription&& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = std::move(value); }
    inline ElasticsearchDestinationDescription& WithS3DestinationDescription(const S3DestinationDescription& value) { SetS3DestinationDescription(value); return *this;}
    inline ElasticsearchDestinationDescription& WithS3DestinationDescription(S3DestinationDescription&& value) { SetS3DestinationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data processing configuration.</p>
     */
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }
    inline ElasticsearchDestinationDescription& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}
    inline ElasticsearchDestinationDescription& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon CloudWatch logging options.</p>
     */
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }
    inline ElasticsearchDestinationDescription& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}
    inline ElasticsearchDestinationDescription& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the VPC of the Amazon OpenSearch or the Amazon OpenSearch
     * Serverless destination.</p>
     */
    inline const VpcConfigurationDescription& GetVpcConfigurationDescription() const{ return m_vpcConfigurationDescription; }
    inline bool VpcConfigurationDescriptionHasBeenSet() const { return m_vpcConfigurationDescriptionHasBeenSet; }
    inline void SetVpcConfigurationDescription(const VpcConfigurationDescription& value) { m_vpcConfigurationDescriptionHasBeenSet = true; m_vpcConfigurationDescription = value; }
    inline void SetVpcConfigurationDescription(VpcConfigurationDescription&& value) { m_vpcConfigurationDescriptionHasBeenSet = true; m_vpcConfigurationDescription = std::move(value); }
    inline ElasticsearchDestinationDescription& WithVpcConfigurationDescription(const VpcConfigurationDescription& value) { SetVpcConfigurationDescription(value); return *this;}
    inline ElasticsearchDestinationDescription& WithVpcConfigurationDescription(VpcConfigurationDescription&& value) { SetVpcConfigurationDescription(std::move(value)); return *this;}
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
    inline ElasticsearchDestinationDescription& WithDocumentIdOptions(const DocumentIdOptions& value) { SetDocumentIdOptions(value); return *this;}
    inline ElasticsearchDestinationDescription& WithDocumentIdOptions(DocumentIdOptions&& value) { SetDocumentIdOptions(std::move(value)); return *this;}
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
