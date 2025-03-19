/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/AmazonOpenSearchServerlessBufferingHints.h>
#include <aws/firehose/model/AmazonOpenSearchServerlessRetryOptions.h>
#include <aws/firehose/model/S3DestinationUpdate.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
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
   * <p>Describes an update for a destination in the Serverless offering for Amazon
   * OpenSearch Service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/AmazonOpenSearchServerlessDestinationUpdate">AWS
   * API Reference</a></p>
   */
  class AmazonOpenSearchServerlessDestinationUpdate
  {
  public:
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationUpdate() = default;
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Firehose for
     * calling the Serverless offering for Amazon OpenSearch Service Configuration API
     * and for indexing documents.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    AmazonOpenSearchServerlessDestinationUpdate& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint to use when communicating with the collection in the Serverless
     * offering for Amazon OpenSearch Service.</p>
     */
    inline const Aws::String& GetCollectionEndpoint() const { return m_collectionEndpoint; }
    inline bool CollectionEndpointHasBeenSet() const { return m_collectionEndpointHasBeenSet; }
    template<typename CollectionEndpointT = Aws::String>
    void SetCollectionEndpoint(CollectionEndpointT&& value) { m_collectionEndpointHasBeenSet = true; m_collectionEndpoint = std::forward<CollectionEndpointT>(value); }
    template<typename CollectionEndpointT = Aws::String>
    AmazonOpenSearchServerlessDestinationUpdate& WithCollectionEndpoint(CollectionEndpointT&& value) { SetCollectionEndpoint(std::forward<CollectionEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    AmazonOpenSearchServerlessDestinationUpdate& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffering options. If no value is specified,
     * AmazonopensearchBufferingHints object default values are used.</p>
     */
    inline const AmazonOpenSearchServerlessBufferingHints& GetBufferingHints() const { return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    template<typename BufferingHintsT = AmazonOpenSearchServerlessBufferingHints>
    void SetBufferingHints(BufferingHintsT&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::forward<BufferingHintsT>(value); }
    template<typename BufferingHintsT = AmazonOpenSearchServerlessBufferingHints>
    AmazonOpenSearchServerlessDestinationUpdate& WithBufferingHints(BufferingHintsT&& value) { SetBufferingHints(std::forward<BufferingHintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry behavior in case Firehose is unable to deliver documents to the
     * Serverless offering for Amazon OpenSearch Service. The default value is 300 (5
     * minutes).</p>
     */
    inline const AmazonOpenSearchServerlessRetryOptions& GetRetryOptions() const { return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    template<typename RetryOptionsT = AmazonOpenSearchServerlessRetryOptions>
    void SetRetryOptions(RetryOptionsT&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::forward<RetryOptionsT>(value); }
    template<typename RetryOptionsT = AmazonOpenSearchServerlessRetryOptions>
    AmazonOpenSearchServerlessDestinationUpdate& WithRetryOptions(RetryOptionsT&& value) { SetRetryOptions(std::forward<RetryOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3DestinationUpdate& GetS3Update() const { return m_s3Update; }
    inline bool S3UpdateHasBeenSet() const { return m_s3UpdateHasBeenSet; }
    template<typename S3UpdateT = S3DestinationUpdate>
    void SetS3Update(S3UpdateT&& value) { m_s3UpdateHasBeenSet = true; m_s3Update = std::forward<S3UpdateT>(value); }
    template<typename S3UpdateT = S3DestinationUpdate>
    AmazonOpenSearchServerlessDestinationUpdate& WithS3Update(S3UpdateT&& value) { SetS3Update(std::forward<S3UpdateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const { return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    void SetProcessingConfiguration(ProcessingConfigurationT&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::forward<ProcessingConfigurationT>(value); }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    AmazonOpenSearchServerlessDestinationUpdate& WithProcessingConfiguration(ProcessingConfigurationT&& value) { SetProcessingConfiguration(std::forward<ProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    AmazonOpenSearchServerlessDestinationUpdate& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::String m_collectionEndpoint;
    bool m_collectionEndpointHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    AmazonOpenSearchServerlessBufferingHints m_bufferingHints;
    bool m_bufferingHintsHasBeenSet = false;

    AmazonOpenSearchServerlessRetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    S3DestinationUpdate m_s3Update;
    bool m_s3UpdateHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
