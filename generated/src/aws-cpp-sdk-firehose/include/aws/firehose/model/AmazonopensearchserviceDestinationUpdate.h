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
#include <aws/firehose/model/S3DestinationUpdate.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
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
   * <p>Describes an update for a destination in Amazon OpenSearch
   * Service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/AmazonopensearchserviceDestinationUpdate">AWS
   * API Reference</a></p>
   */
  class AmazonopensearchserviceDestinationUpdate
  {
  public:
    AWS_FIREHOSE_API AmazonopensearchserviceDestinationUpdate() = default;
    AWS_FIREHOSE_API AmazonopensearchserviceDestinationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API AmazonopensearchserviceDestinationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Firehose for
     * calling the Amazon OpenSearch Service Configuration API and for indexing
     * documents. </p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    AmazonopensearchserviceDestinationUpdate& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon OpenSearch Service domain. The IAM role must have
     * permissions for DescribeDomain, DescribeDomains, and DescribeDomainConfig after
     * assuming the IAM role specified in RoleARN.</p>
     */
    inline const Aws::String& GetDomainARN() const { return m_domainARN; }
    inline bool DomainARNHasBeenSet() const { return m_domainARNHasBeenSet; }
    template<typename DomainARNT = Aws::String>
    void SetDomainARN(DomainARNT&& value) { m_domainARNHasBeenSet = true; m_domainARN = std::forward<DomainARNT>(value); }
    template<typename DomainARNT = Aws::String>
    AmazonopensearchserviceDestinationUpdate& WithDomainARN(DomainARNT&& value) { SetDomainARN(std::forward<DomainARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * ClusterEndpoint or the DomainARN field. </p>
     */
    inline const Aws::String& GetClusterEndpoint() const { return m_clusterEndpoint; }
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }
    template<typename ClusterEndpointT = Aws::String>
    void SetClusterEndpoint(ClusterEndpointT&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::forward<ClusterEndpointT>(value); }
    template<typename ClusterEndpointT = Aws::String>
    AmazonopensearchserviceDestinationUpdate& WithClusterEndpoint(ClusterEndpointT&& value) { SetClusterEndpoint(std::forward<ClusterEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon OpenSearch Service index name.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    AmazonopensearchserviceDestinationUpdate& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon OpenSearch Service type name. For Elasticsearch 6.x, there can be
     * only one type per index. If you try to specify a new type for an existing index
     * that already has another type, Firehose returns an error during runtime. </p>
     * <p>If you upgrade Elasticsearch from 6.x to 7.x and don’t update your Firehose
     * stream, Firehose still delivers data to Elasticsearch with the old index name
     * and type name. If you want to update your Firehose stream with a new index name,
     * provide an empty string for TypeName. </p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    AmazonopensearchserviceDestinationUpdate& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon OpenSearch Service index rotation period. Index rotation appends a
     * timestamp to IndexName to facilitate the expiration of old data.</p>
     */
    inline AmazonopensearchserviceIndexRotationPeriod GetIndexRotationPeriod() const { return m_indexRotationPeriod; }
    inline bool IndexRotationPeriodHasBeenSet() const { return m_indexRotationPeriodHasBeenSet; }
    inline void SetIndexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }
    inline AmazonopensearchserviceDestinationUpdate& WithIndexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod value) { SetIndexRotationPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffering options. If no value is specified,
     * AmazonopensearchBufferingHints object default values are used. </p>
     */
    inline const AmazonopensearchserviceBufferingHints& GetBufferingHints() const { return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    template<typename BufferingHintsT = AmazonopensearchserviceBufferingHints>
    void SetBufferingHints(BufferingHintsT&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::forward<BufferingHintsT>(value); }
    template<typename BufferingHintsT = AmazonopensearchserviceBufferingHints>
    AmazonopensearchserviceDestinationUpdate& WithBufferingHints(BufferingHintsT&& value) { SetBufferingHints(std::forward<BufferingHintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry behavior in case Firehose is unable to deliver documents to Amazon
     * OpenSearch Service. The default value is 300 (5 minutes). </p>
     */
    inline const AmazonopensearchserviceRetryOptions& GetRetryOptions() const { return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    template<typename RetryOptionsT = AmazonopensearchserviceRetryOptions>
    void SetRetryOptions(RetryOptionsT&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::forward<RetryOptionsT>(value); }
    template<typename RetryOptionsT = AmazonopensearchserviceRetryOptions>
    AmazonopensearchserviceDestinationUpdate& WithRetryOptions(RetryOptionsT&& value) { SetRetryOptions(std::forward<RetryOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3DestinationUpdate& GetS3Update() const { return m_s3Update; }
    inline bool S3UpdateHasBeenSet() const { return m_s3UpdateHasBeenSet; }
    template<typename S3UpdateT = S3DestinationUpdate>
    void SetS3Update(S3UpdateT&& value) { m_s3UpdateHasBeenSet = true; m_s3Update = std::forward<S3UpdateT>(value); }
    template<typename S3UpdateT = S3DestinationUpdate>
    AmazonopensearchserviceDestinationUpdate& WithS3Update(S3UpdateT&& value) { SetS3Update(std::forward<S3UpdateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const { return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    void SetProcessingConfiguration(ProcessingConfigurationT&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::forward<ProcessingConfigurationT>(value); }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    AmazonopensearchserviceDestinationUpdate& WithProcessingConfiguration(ProcessingConfigurationT&& value) { SetProcessingConfiguration(std::forward<ProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    AmazonopensearchserviceDestinationUpdate& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
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
    AmazonopensearchserviceDestinationUpdate& WithDocumentIdOptions(DocumentIdOptionsT&& value) { SetDocumentIdOptions(std::forward<DocumentIdOptionsT>(value)); return *this;}
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

    AmazonopensearchserviceIndexRotationPeriod m_indexRotationPeriod{AmazonopensearchserviceIndexRotationPeriod::NOT_SET};
    bool m_indexRotationPeriodHasBeenSet = false;

    AmazonopensearchserviceBufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet = false;

    AmazonopensearchserviceRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    S3DestinationUpdate m_s3Update;
    bool m_s3UpdateHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    DocumentIdOptions m_documentIdOptions;
    bool m_documentIdOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
