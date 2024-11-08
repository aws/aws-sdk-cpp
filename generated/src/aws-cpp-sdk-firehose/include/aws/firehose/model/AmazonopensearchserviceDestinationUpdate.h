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
    AWS_FIREHOSE_API AmazonopensearchserviceDestinationUpdate();
    AWS_FIREHOSE_API AmazonopensearchserviceDestinationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API AmazonopensearchserviceDestinationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Firehose for
     * calling the Amazon OpenSearch Service Configuration API and for indexing
     * documents. </p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline AmazonopensearchserviceDestinationUpdate& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon OpenSearch Service domain. The IAM role must have
     * permissions for DescribeDomain, DescribeDomains, and DescribeDomainConfig after
     * assuming the IAM role specified in RoleARN.</p>
     */
    inline const Aws::String& GetDomainARN() const{ return m_domainARN; }
    inline bool DomainARNHasBeenSet() const { return m_domainARNHasBeenSet; }
    inline void SetDomainARN(const Aws::String& value) { m_domainARNHasBeenSet = true; m_domainARN = value; }
    inline void SetDomainARN(Aws::String&& value) { m_domainARNHasBeenSet = true; m_domainARN = std::move(value); }
    inline void SetDomainARN(const char* value) { m_domainARNHasBeenSet = true; m_domainARN.assign(value); }
    inline AmazonopensearchserviceDestinationUpdate& WithDomainARN(const Aws::String& value) { SetDomainARN(value); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithDomainARN(Aws::String&& value) { SetDomainARN(std::move(value)); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithDomainARN(const char* value) { SetDomainARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint to use when communicating with the cluster. Specify either this
     * ClusterEndpoint or the DomainARN field. </p>
     */
    inline const Aws::String& GetClusterEndpoint() const{ return m_clusterEndpoint; }
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }
    inline void SetClusterEndpoint(const Aws::String& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = value; }
    inline void SetClusterEndpoint(Aws::String&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::move(value); }
    inline void SetClusterEndpoint(const char* value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint.assign(value); }
    inline AmazonopensearchserviceDestinationUpdate& WithClusterEndpoint(const Aws::String& value) { SetClusterEndpoint(value); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithClusterEndpoint(Aws::String&& value) { SetClusterEndpoint(std::move(value)); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithClusterEndpoint(const char* value) { SetClusterEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon OpenSearch Service index name.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline AmazonopensearchserviceDestinationUpdate& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithIndexName(const char* value) { SetIndexName(value); return *this;}
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
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline AmazonopensearchserviceDestinationUpdate& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon OpenSearch Service index rotation period. Index rotation appends a
     * timestamp to IndexName to facilitate the expiration of old data.</p>
     */
    inline const AmazonopensearchserviceIndexRotationPeriod& GetIndexRotationPeriod() const{ return m_indexRotationPeriod; }
    inline bool IndexRotationPeriodHasBeenSet() const { return m_indexRotationPeriodHasBeenSet; }
    inline void SetIndexRotationPeriod(const AmazonopensearchserviceIndexRotationPeriod& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }
    inline void SetIndexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod&& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = std::move(value); }
    inline AmazonopensearchserviceDestinationUpdate& WithIndexRotationPeriod(const AmazonopensearchserviceIndexRotationPeriod& value) { SetIndexRotationPeriod(value); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithIndexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod&& value) { SetIndexRotationPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffering options. If no value is specified,
     * AmazonopensearchBufferingHints object default values are used. </p>
     */
    inline const AmazonopensearchserviceBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    inline void SetBufferingHints(const AmazonopensearchserviceBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }
    inline void SetBufferingHints(AmazonopensearchserviceBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }
    inline AmazonopensearchserviceDestinationUpdate& WithBufferingHints(const AmazonopensearchserviceBufferingHints& value) { SetBufferingHints(value); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithBufferingHints(AmazonopensearchserviceBufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry behavior in case Firehose is unable to deliver documents to Amazon
     * OpenSearch Service. The default value is 300 (5 minutes). </p>
     */
    inline const AmazonopensearchserviceRetryOptions& GetRetryOptions() const{ return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    inline void SetRetryOptions(const AmazonopensearchserviceRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }
    inline void SetRetryOptions(AmazonopensearchserviceRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }
    inline AmazonopensearchserviceDestinationUpdate& WithRetryOptions(const AmazonopensearchserviceRetryOptions& value) { SetRetryOptions(value); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithRetryOptions(AmazonopensearchserviceRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3DestinationUpdate& GetS3Update() const{ return m_s3Update; }
    inline bool S3UpdateHasBeenSet() const { return m_s3UpdateHasBeenSet; }
    inline void SetS3Update(const S3DestinationUpdate& value) { m_s3UpdateHasBeenSet = true; m_s3Update = value; }
    inline void SetS3Update(S3DestinationUpdate&& value) { m_s3UpdateHasBeenSet = true; m_s3Update = std::move(value); }
    inline AmazonopensearchserviceDestinationUpdate& WithS3Update(const S3DestinationUpdate& value) { SetS3Update(value); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithS3Update(S3DestinationUpdate&& value) { SetS3Update(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }
    inline AmazonopensearchserviceDestinationUpdate& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }
    inline AmazonopensearchserviceDestinationUpdate& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}
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
    inline AmazonopensearchserviceDestinationUpdate& WithDocumentIdOptions(const DocumentIdOptions& value) { SetDocumentIdOptions(value); return *this;}
    inline AmazonopensearchserviceDestinationUpdate& WithDocumentIdOptions(DocumentIdOptions&& value) { SetDocumentIdOptions(std::move(value)); return *this;}
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

    AmazonopensearchserviceIndexRotationPeriod m_indexRotationPeriod;
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
