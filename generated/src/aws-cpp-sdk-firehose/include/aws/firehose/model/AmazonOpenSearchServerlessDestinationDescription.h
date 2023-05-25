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
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationDescription();
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS credentials.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>The endpoint to use when communicating with the collection in the Serverless
     * offering for Amazon OpenSearch Service.</p>
     */
    inline const Aws::String& GetCollectionEndpoint() const{ return m_collectionEndpoint; }

    /**
     * <p>The endpoint to use when communicating with the collection in the Serverless
     * offering for Amazon OpenSearch Service.</p>
     */
    inline bool CollectionEndpointHasBeenSet() const { return m_collectionEndpointHasBeenSet; }

    /**
     * <p>The endpoint to use when communicating with the collection in the Serverless
     * offering for Amazon OpenSearch Service.</p>
     */
    inline void SetCollectionEndpoint(const Aws::String& value) { m_collectionEndpointHasBeenSet = true; m_collectionEndpoint = value; }

    /**
     * <p>The endpoint to use when communicating with the collection in the Serverless
     * offering for Amazon OpenSearch Service.</p>
     */
    inline void SetCollectionEndpoint(Aws::String&& value) { m_collectionEndpointHasBeenSet = true; m_collectionEndpoint = std::move(value); }

    /**
     * <p>The endpoint to use when communicating with the collection in the Serverless
     * offering for Amazon OpenSearch Service.</p>
     */
    inline void SetCollectionEndpoint(const char* value) { m_collectionEndpointHasBeenSet = true; m_collectionEndpoint.assign(value); }

    /**
     * <p>The endpoint to use when communicating with the collection in the Serverless
     * offering for Amazon OpenSearch Service.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithCollectionEndpoint(const Aws::String& value) { SetCollectionEndpoint(value); return *this;}

    /**
     * <p>The endpoint to use when communicating with the collection in the Serverless
     * offering for Amazon OpenSearch Service.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithCollectionEndpoint(Aws::String&& value) { SetCollectionEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint to use when communicating with the collection in the Serverless
     * offering for Amazon OpenSearch Service.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithCollectionEndpoint(const char* value) { SetCollectionEndpoint(value); return *this;}


    /**
     * <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The buffering options.</p>
     */
    inline const AmazonOpenSearchServerlessBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }

    /**
     * <p>The buffering options.</p>
     */
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }

    /**
     * <p>The buffering options.</p>
     */
    inline void SetBufferingHints(const AmazonOpenSearchServerlessBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    /**
     * <p>The buffering options.</p>
     */
    inline void SetBufferingHints(AmazonOpenSearchServerlessBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }

    /**
     * <p>The buffering options.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithBufferingHints(const AmazonOpenSearchServerlessBufferingHints& value) { SetBufferingHints(value); return *this;}

    /**
     * <p>The buffering options.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithBufferingHints(AmazonOpenSearchServerlessBufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}


    /**
     * <p>The Serverless offering for Amazon OpenSearch Service retry options.</p>
     */
    inline const AmazonOpenSearchServerlessRetryOptions& GetRetryOptions() const{ return m_retryOptions; }

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service retry options.</p>
     */
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service retry options.</p>
     */
    inline void SetRetryOptions(const AmazonOpenSearchServerlessRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service retry options.</p>
     */
    inline void SetRetryOptions(AmazonOpenSearchServerlessRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service retry options.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithRetryOptions(const AmazonOpenSearchServerlessRetryOptions& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service retry options.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithRetryOptions(AmazonOpenSearchServerlessRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline const AmazonOpenSearchServerlessS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }

    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }

    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline void SetS3BackupMode(const AmazonOpenSearchServerlessS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }

    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline void SetS3BackupMode(AmazonOpenSearchServerlessS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }

    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithS3BackupMode(const AmazonOpenSearchServerlessS3BackupMode& value) { SetS3BackupMode(value); return *this;}

    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline AmazonOpenSearchServerlessDestinationDescription& WithS3BackupMode(AmazonOpenSearchServerlessS3BackupMode&& value) { SetS3BackupMode(std::move(value)); return *this;}


    
    inline const S3DestinationDescription& GetS3DestinationDescription() const{ return m_s3DestinationDescription; }

    
    inline bool S3DestinationDescriptionHasBeenSet() const { return m_s3DestinationDescriptionHasBeenSet; }

    
    inline void SetS3DestinationDescription(const S3DestinationDescription& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = value; }

    
    inline void SetS3DestinationDescription(S3DestinationDescription&& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = std::move(value); }

    
    inline AmazonOpenSearchServerlessDestinationDescription& WithS3DestinationDescription(const S3DestinationDescription& value) { SetS3DestinationDescription(value); return *this;}

    
    inline AmazonOpenSearchServerlessDestinationDescription& WithS3DestinationDescription(S3DestinationDescription&& value) { SetS3DestinationDescription(std::move(value)); return *this;}


    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }

    
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }

    
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }

    
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }

    
    inline AmazonOpenSearchServerlessDestinationDescription& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}

    
    inline AmazonOpenSearchServerlessDestinationDescription& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}


    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }

    
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }

    
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }

    
    inline AmazonOpenSearchServerlessDestinationDescription& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}

    
    inline AmazonOpenSearchServerlessDestinationDescription& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}


    
    inline const VpcConfigurationDescription& GetVpcConfigurationDescription() const{ return m_vpcConfigurationDescription; }

    
    inline bool VpcConfigurationDescriptionHasBeenSet() const { return m_vpcConfigurationDescriptionHasBeenSet; }

    
    inline void SetVpcConfigurationDescription(const VpcConfigurationDescription& value) { m_vpcConfigurationDescriptionHasBeenSet = true; m_vpcConfigurationDescription = value; }

    
    inline void SetVpcConfigurationDescription(VpcConfigurationDescription&& value) { m_vpcConfigurationDescriptionHasBeenSet = true; m_vpcConfigurationDescription = std::move(value); }

    
    inline AmazonOpenSearchServerlessDestinationDescription& WithVpcConfigurationDescription(const VpcConfigurationDescription& value) { SetVpcConfigurationDescription(value); return *this;}

    
    inline AmazonOpenSearchServerlessDestinationDescription& WithVpcConfigurationDescription(VpcConfigurationDescription&& value) { SetVpcConfigurationDescription(std::move(value)); return *this;}

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

    AmazonOpenSearchServerlessS3BackupMode m_s3BackupMode;
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
