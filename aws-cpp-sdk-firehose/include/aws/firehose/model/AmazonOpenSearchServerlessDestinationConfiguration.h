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
#include <aws/firehose/model/S3DestinationConfiguration.h>
#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/firehose/model/CloudWatchLoggingOptions.h>
#include <aws/firehose/model/VpcConfiguration.h>
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
   * <p>Describes the configuration of a destination in the Serverless offering for
   * Amazon OpenSearch Service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/AmazonOpenSearchServerlessDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class AmazonOpenSearchServerlessDestinationConfiguration
  {
  public:
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationConfiguration();
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API AmazonOpenSearchServerlessDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Serverless offering for Amazon OpenSearch Service
     * Configuration API and for indexing documents.</p>
     */
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to be assumed by Kinesis Data
     * Firehose for calling the Serverless offering for Amazon OpenSearch Service
     * Configuration API and for indexing documents.</p>
     */
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


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
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithCollectionEndpoint(const Aws::String& value) { SetCollectionEndpoint(value); return *this;}

    /**
     * <p>The endpoint to use when communicating with the collection in the Serverless
     * offering for Amazon OpenSearch Service.</p>
     */
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithCollectionEndpoint(Aws::String&& value) { SetCollectionEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint to use when communicating with the collection in the Serverless
     * offering for Amazon OpenSearch Service.</p>
     */
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithCollectionEndpoint(const char* value) { SetCollectionEndpoint(value); return *this;}


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
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
     */
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The Serverless offering for Amazon OpenSearch Service index name.</p>
     */
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The buffering options. If no value is specified, the default values for
     * AmazonopensearchserviceBufferingHints are used.</p>
     */
    inline const AmazonOpenSearchServerlessBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }

    /**
     * <p>The buffering options. If no value is specified, the default values for
     * AmazonopensearchserviceBufferingHints are used.</p>
     */
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }

    /**
     * <p>The buffering options. If no value is specified, the default values for
     * AmazonopensearchserviceBufferingHints are used.</p>
     */
    inline void SetBufferingHints(const AmazonOpenSearchServerlessBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    /**
     * <p>The buffering options. If no value is specified, the default values for
     * AmazonopensearchserviceBufferingHints are used.</p>
     */
    inline void SetBufferingHints(AmazonOpenSearchServerlessBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }

    /**
     * <p>The buffering options. If no value is specified, the default values for
     * AmazonopensearchserviceBufferingHints are used.</p>
     */
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithBufferingHints(const AmazonOpenSearchServerlessBufferingHints& value) { SetBufferingHints(value); return *this;}

    /**
     * <p>The buffering options. If no value is specified, the default values for
     * AmazonopensearchserviceBufferingHints are used.</p>
     */
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithBufferingHints(AmazonOpenSearchServerlessBufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}


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
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithRetryOptions(const AmazonOpenSearchServerlessRetryOptions& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver
     * documents to the Serverless offering for Amazon OpenSearch Service. The default
     * value is 300 (5 minutes).</p>
     */
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithRetryOptions(AmazonOpenSearchServerlessRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}


    /**
     * <p>Defines how documents should be delivered to Amazon S3. When it is set to
     * FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not
     * be indexed to the configured Amazon S3 destination, with
     * AmazonOpenSearchService-failed/ appended to the key prefix. When set to
     * AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3,
     * and also writes failed documents with AmazonOpenSearchService-failed/ appended
     * to the prefix.</p>
     */
    inline const AmazonOpenSearchServerlessS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When it is set to
     * FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not
     * be indexed to the configured Amazon S3 destination, with
     * AmazonOpenSearchService-failed/ appended to the key prefix. When set to
     * AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3,
     * and also writes failed documents with AmazonOpenSearchService-failed/ appended
     * to the prefix.</p>
     */
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When it is set to
     * FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not
     * be indexed to the configured Amazon S3 destination, with
     * AmazonOpenSearchService-failed/ appended to the key prefix. When set to
     * AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3,
     * and also writes failed documents with AmazonOpenSearchService-failed/ appended
     * to the prefix.</p>
     */
    inline void SetS3BackupMode(const AmazonOpenSearchServerlessS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When it is set to
     * FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not
     * be indexed to the configured Amazon S3 destination, with
     * AmazonOpenSearchService-failed/ appended to the key prefix. When set to
     * AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3,
     * and also writes failed documents with AmazonOpenSearchService-failed/ appended
     * to the prefix.</p>
     */
    inline void SetS3BackupMode(AmazonOpenSearchServerlessS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When it is set to
     * FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not
     * be indexed to the configured Amazon S3 destination, with
     * AmazonOpenSearchService-failed/ appended to the key prefix. When set to
     * AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3,
     * and also writes failed documents with AmazonOpenSearchService-failed/ appended
     * to the prefix.</p>
     */
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithS3BackupMode(const AmazonOpenSearchServerlessS3BackupMode& value) { SetS3BackupMode(value); return *this;}

    /**
     * <p>Defines how documents should be delivered to Amazon S3. When it is set to
     * FailedDocumentsOnly, Kinesis Data Firehose writes any documents that could not
     * be indexed to the configured Amazon S3 destination, with
     * AmazonOpenSearchService-failed/ appended to the key prefix. When set to
     * AllDocuments, Kinesis Data Firehose delivers all incoming records to Amazon S3,
     * and also writes failed documents with AmazonOpenSearchService-failed/ appended
     * to the prefix.</p>
     */
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithS3BackupMode(AmazonOpenSearchServerlessS3BackupMode&& value) { SetS3BackupMode(std::move(value)); return *this;}


    
    inline const S3DestinationConfiguration& GetS3Configuration() const{ return m_s3Configuration; }

    
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }

    
    inline void SetS3Configuration(const S3DestinationConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    
    inline void SetS3Configuration(S3DestinationConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }

    
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithS3Configuration(const S3DestinationConfiguration& value) { SetS3Configuration(value); return *this;}

    
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithS3Configuration(S3DestinationConfiguration&& value) { SetS3Configuration(std::move(value)); return *this;}


    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }

    
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }

    
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }

    
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }

    
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}

    
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}


    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }

    
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }

    
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }

    
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}

    
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}


    
    inline const VpcConfiguration& GetVpcConfiguration() const{ return m_vpcConfiguration; }

    
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }

    
    inline void SetVpcConfiguration(const VpcConfiguration& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = value; }

    
    inline void SetVpcConfiguration(VpcConfiguration&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::move(value); }

    
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithVpcConfiguration(const VpcConfiguration& value) { SetVpcConfiguration(value); return *this;}

    
    inline AmazonOpenSearchServerlessDestinationConfiguration& WithVpcConfiguration(VpcConfiguration&& value) { SetVpcConfiguration(std::move(value)); return *this;}

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

    S3DestinationConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    ProcessingConfiguration m_processingConfiguration;
    bool m_processingConfigurationHasBeenSet = false;

    CloudWatchLoggingOptions m_cloudWatchLoggingOptions;
    bool m_cloudWatchLoggingOptionsHasBeenSet = false;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
