/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/AmazonOpenSearchServerlessBufferingHints.h>
#include <aws/firehose/model/AmazonOpenSearchServerlessRetryOptions.h>
#include <aws/firehose/model/AmazonOpenSearchServerlessS3BackupMode.h>
#include <aws/firehose/model/S3DestinationDescription.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/VpcConfigurationDescription.h>
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
   * <p>The destination description in the Serverless offering for Amazon OpenSearch
   * Service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/AmazonOpenSearchServerlessDestinationDescription">AWS
   * API Reference</a></p>
   */
  class AmazonOpenSearchServerlessDestinationDescription
  {
  public:
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationDescription() = default;
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    AmazonOpenSearchServerlessDestinationDescription& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
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
    AmazonOpenSearchServerlessDestinationDescription& WithCollectionEndpoint(CollectionEndpointT&& value) { SetCollectionEndpoint(std::forward<CollectionEndpointT>(value)); return *this;}
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
    AmazonOpenSearchServerlessDestinationDescription& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The buffering options.</p>
     */
    inline const AmazonOpenSearchServerlessBufferingHints& GetBufferingHints() const { return m_bufferingHints; }
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }
    template<typename BufferingHintsT = AmazonOpenSearchServerlessBufferingHints>
    void SetBufferingHints(BufferingHintsT&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::forward<BufferingHintsT>(value); }
    template<typename BufferingHintsT = AmazonOpenSearchServerlessBufferingHints>
    AmazonOpenSearchServerlessDestinationDescription& WithBufferingHints(BufferingHintsT&& value) { SetBufferingHints(std::forward<BufferingHintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Serverless offering for Amazon OpenSearch Service retry options.</p>
     */
    inline const AmazonOpenSearchServerlessRetryOptions& GetRetryOptions() const { return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    template<typename RetryOptionsT = AmazonOpenSearchServerlessRetryOptions>
    void SetRetryOptions(RetryOptionsT&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::forward<RetryOptionsT>(value); }
    template<typename RetryOptionsT = AmazonOpenSearchServerlessRetryOptions>
    AmazonOpenSearchServerlessDestinationDescription& WithRetryOptions(RetryOptionsT&& value) { SetRetryOptions(std::forward<RetryOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline AmazonOpenSearchServerlessS3BackupMode GetS3BackupMode() const { return m_s3BackupMode; }
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }
    inline void SetS3BackupMode(AmazonOpenSearchServerlessS3BackupMode value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }
    inline AmazonOpenSearchServerlessDestinationDescription& WithS3BackupMode(AmazonOpenSearchServerlessS3BackupMode value) { SetS3BackupMode(value); return *this;}
    ///@}

    ///@{
    
    inline const S3DestinationDescription& GetS3DestinationDescription() const { return m_s3DestinationDescription; }
    inline bool S3DestinationDescriptionHasBeenSet() const { return m_s3DestinationDescriptionHasBeenSet; }
    template<typename S3DestinationDescriptionT = S3DestinationDescription>
    void SetS3DestinationDescription(S3DestinationDescriptionT&& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = std::forward<S3DestinationDescriptionT>(value); }
    template<typename S3DestinationDescriptionT = S3DestinationDescription>
    AmazonOpenSearchServerlessDestinationDescription& WithS3DestinationDescription(S3DestinationDescriptionT&& value) { SetS3DestinationDescription(std::forward<S3DestinationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const { return m_processingConfiguration; }
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    void SetProcessingConfiguration(ProcessingConfigurationT&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::forward<ProcessingConfigurationT>(value); }
    template<typename ProcessingConfigurationT = ProcessingConfiguration>
    AmazonOpenSearchServerlessDestinationDescription& WithProcessingConfiguration(ProcessingConfigurationT&& value) { SetProcessingConfiguration(std::forward<ProcessingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const { return m_cloudWatchLoggingOptions; }
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    void SetCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::forward<CloudWatchLoggingOptionsT>(value); }
    template<typename CloudWatchLoggingOptionsT = CloudWatchLoggingOptions>
    AmazonOpenSearchServerlessDestinationDescription& WithCloudWatchLoggingOptions(CloudWatchLoggingOptionsT&& value) { SetCloudWatchLoggingOptions(std::forward<CloudWatchLoggingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VpcConfigurationDescription& GetVpcConfigurationDescription() const { return m_vpcConfigurationDescription; }
    inline bool VpcConfigurationDescriptionHasBeenSet() const { return m_vpcConfigurationDescriptionHasBeenSet; }
    template<typename VpcConfigurationDescriptionT = VpcConfigurationDescription>
    void SetVpcConfigurationDescription(VpcConfigurationDescriptionT&& value) { m_vpcConfigurationDescriptionHasBeenSet = true; m_vpcConfigurationDescription = std::forward<VpcConfigurationDescriptionT>(value); }
    template<typename VpcConfigurationDescriptionT = VpcConfigurationDescription>
    AmazonOpenSearchServerlessDestinationDescription& WithVpcConfigurationDescription(VpcConfigurationDescriptionT&& value) { SetVpcConfigurationDescription(std::forward<VpcConfigurationDescriptionT>(value)); return *this;}
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

    AmazonOpenSearchServerlessS3BackupMode m_s3BackupMode{AmazonOpenSearchServerlessS3BackupMode::NOT_SET};
    bool m_s3BackupModeHasBeenSet = false;

    S3DestinationDescription m_s3DestinationDescription;
    bool m_s3DestinationDescriptionHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    VpcConfigurationDescription m_vpcConfigurationDescription;
    bool m_vpcConfigurationDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
