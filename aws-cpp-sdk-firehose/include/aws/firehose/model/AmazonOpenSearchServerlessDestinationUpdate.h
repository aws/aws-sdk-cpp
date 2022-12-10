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
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationUpdate();
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Serverless offering for Amazon OpenSearch Service
     * Configuration API and for indexing documents.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Serverless offering for Amazon OpenSearch Service
     * Configuration API and for indexing documents.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Serverless offering for Amazon OpenSearch Service
     * Configuration API and for indexing documents.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Serverless offering for Amazon OpenSearch Service
     * Configuration API and for indexing documents.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Serverless offering for Amazon OpenSearch Service
     * Configuration API and for indexing documents.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Serverless offering for Amazon OpenSearch Service
     * Configuration API and for indexing documents.</p>
     */
    inline AmazonOpenSearchServerlessDestinationUpdate& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Serverless offering for Amazon OpenSearch Service
     * Configuration API and for indexing documents.</p>
     */
    inline AmazonOpenSearchServerlessDestinationUpdate& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Serverless offering for Amazon OpenSearch Service
     * Configuration API and for indexing documents.</p>
     */
    inline AmazonOpenSearchServerlessDestinationUpdate& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


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
    inline AmazonOpenSearchServerlessDestinationUpdate& WithCollectionEndpoint(const Aws::String& value) { SetCollectionEndpoint(value); return *this;}

    /**
     * <p>The endpoint to use when communicating with the collection in the Serverless
     * offering for Amazon OpenSearch Service.</p>
     */
    inline AmazonOpenSearchServerlessDestinationUpdate& WithCollectionEndpoint(Aws::String&& value) { SetCollectionEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint to use when communicating with the collection in the Serverless
     * offering for Amazon OpenSearch Service.</p>
     */
    inline AmazonOpenSearchServerlessDestinationUpdate& WithCollectionEndpoint(const char* value) { SetCollectionEndpoint(value); return *this;}


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
    inline AmazonOpenSearchServerlessDestinationUpdate& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
     */
    inline AmazonOpenSearchServerlessDestinationUpdate& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
     */
    inline AmazonOpenSearchServerlessDestinationUpdate& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The buffering options. If no value is specified,
     * AmazonopensearchBufferingHints object default values are used.</p>
     */
    inline const AmazonOpenSearchServerlessBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }

    /**
     * <p>The buffering options. If no value is specified,
     * AmazonopensearchBufferingHints object default values are used.</p>
     */
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }

    /**
     * <p>The buffering options. If no value is specified,
     * AmazonopensearchBufferingHints object default values are used.</p>
     */
    inline void SetBufferingHints(const AmazonOpenSearchServerlessBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    /**
     * <p>The buffering options. If no value is specified,
     * AmazonopensearchBufferingHints object default values are used.</p>
     */
    inline void SetBufferingHints(AmazonOpenSearchServerlessBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }

    /**
     * <p>The buffering options. If no value is specified,
     * AmazonopensearchBufferingHints object default values are used.</p>
     */
    inline AmazonOpenSearchServerlessDestinationUpdate& WithBufferingHints(const AmazonOpenSearchServerlessBufferingHints& value) { SetBufferingHints(value); return *this;}

    /**
     * <p>The buffering options. If no value is specified,
     * AmazonopensearchBufferingHints object default values are used.</p>
     */
    inline AmazonOpenSearchServerlessDestinationUpdate& WithBufferingHints(AmazonOpenSearchServerlessBufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}


    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to the Serverless offering for Amazon OpenSearch Service. The default
     * value is 300 (5 minutes).</p>
     */
    inline const AmazonOpenSearchServerlessRetryOptions& GetRetryOptions() const{ return m_retryOptions; }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to the Serverless offering for Amazon OpenSearch Service. The default
     * value is 300 (5 minutes).</p>
     */
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to the Serverless offering for Amazon OpenSearch Service. The default
     * value is 300 (5 minutes).</p>
     */
    inline void SetRetryOptions(const AmazonOpenSearchServerlessRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to the Serverless offering for Amazon OpenSearch Service. The default
     * value is 300 (5 minutes).</p>
     */
    inline void SetRetryOptions(AmazonOpenSearchServerlessRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to the Serverless offering for Amazon OpenSearch Service. The default
     * value is 300 (5 minutes).</p>
     */
    inline AmazonOpenSearchServerlessDestinationUpdate& WithRetryOptions(const AmazonOpenSearchServerlessRetryOptions& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to the Serverless offering for Amazon OpenSearch Service. The default
     * value is 300 (5 minutes).</p>
     */
    inline AmazonOpenSearchServerlessDestinationUpdate& WithRetryOptions(AmazonOpenSearchServerlessRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}


    
    inline const S3DestinationUpdate& GetS3Update() const{ return m_s3Update; }

    
    inline bool S3UpdateHasBeenSet() const { return m_s3UpdateHasBeenSet; }

    
    inline void SetS3Update(const S3DestinationUpdate& value) { m_s3UpdateHasBeenSet = true; m_s3Update = value; }

    
    inline void SetS3Update(S3DestinationUpdate&& value) { m_s3UpdateHasBeenSet = true; m_s3Update = std::move(value); }

    
    inline AmazonOpenSearchServerlessDestinationUpdate& WithS3Update(const S3DestinationUpdate& value) { SetS3Update(value); return *this;}

    
    inline AmazonOpenSearchServerlessDestinationUpdate& WithS3Update(S3DestinationUpdate&& value) { SetS3Update(std::move(value)); return *this;}


    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }

    
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }

    
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }

    
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }

    
    inline AmazonOpenSearchServerlessDestinationUpdate& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}

    
    inline AmazonOpenSearchServerlessDestinationUpdate& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}


    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }

    
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }

    
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }

    
    inline AmazonOpenSearchServerlessDestinationUpdate& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}

    
    inline AmazonOpenSearchServerlessDestinationUpdate& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}

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
