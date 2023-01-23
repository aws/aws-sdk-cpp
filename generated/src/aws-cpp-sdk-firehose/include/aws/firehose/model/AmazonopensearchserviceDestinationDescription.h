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
#include <aws/firehose/model/AmazonopensearchserviceS3BackupMode.h>
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
   * <p>The destination description in Amazon OpenSearch Service.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/AmazonopensearchserviceDestinationDescription">AWS
   * API Reference</a></p>
   */
  class AmazonopensearchserviceDestinationDescription
  {
  public:
    AWS_FIREHOSE_API AmazonopensearchserviceDestinationDescription();
    AWS_FIREHOSE_API AmazonopensearchserviceDestinationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API AmazonopensearchserviceDestinationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. </p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. </p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. </p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. </p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. </p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. </p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. </p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services credentials. </p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>The ARN of the Amazon OpenSearch Service domain.</p>
     */
    inline const Aws::String& GetDomainARN() const{ return m_domainARN; }

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain.</p>
     */
    inline bool DomainARNHasBeenSet() const { return m_domainARNHasBeenSet; }

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain.</p>
     */
    inline void SetDomainARN(const Aws::String& value) { m_domainARNHasBeenSet = true; m_domainARN = value; }

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain.</p>
     */
    inline void SetDomainARN(Aws::String&& value) { m_domainARNHasBeenSet = true; m_domainARN = std::move(value); }

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain.</p>
     */
    inline void SetDomainARN(const char* value) { m_domainARNHasBeenSet = true; m_domainARN.assign(value); }

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain.</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithDomainARN(const Aws::String& value) { SetDomainARN(value); return *this;}

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain.</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithDomainARN(Aws::String&& value) { SetDomainARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon OpenSearch Service domain.</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithDomainARN(const char* value) { SetDomainARN(value); return *this;}


    /**
     * <p>The endpoint to use when communicating with the cluster. Kinesis Data
     * Firehose uses either this ClusterEndpoint or the DomainARN field to send data to
     * Amazon OpenSearch Service. </p>
     */
    inline const Aws::String& GetClusterEndpoint() const{ return m_clusterEndpoint; }

    /**
     * <p>The endpoint to use when communicating with the cluster. Kinesis Data
     * Firehose uses either this ClusterEndpoint or the DomainARN field to send data to
     * Amazon OpenSearch Service. </p>
     */
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }

    /**
     * <p>The endpoint to use when communicating with the cluster. Kinesis Data
     * Firehose uses either this ClusterEndpoint or the DomainARN field to send data to
     * Amazon OpenSearch Service. </p>
     */
    inline void SetClusterEndpoint(const Aws::String& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = value; }

    /**
     * <p>The endpoint to use when communicating with the cluster. Kinesis Data
     * Firehose uses either this ClusterEndpoint or the DomainARN field to send data to
     * Amazon OpenSearch Service. </p>
     */
    inline void SetClusterEndpoint(Aws::String&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::move(value); }

    /**
     * <p>The endpoint to use when communicating with the cluster. Kinesis Data
     * Firehose uses either this ClusterEndpoint or the DomainARN field to send data to
     * Amazon OpenSearch Service. </p>
     */
    inline void SetClusterEndpoint(const char* value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint.assign(value); }

    /**
     * <p>The endpoint to use when communicating with the cluster. Kinesis Data
     * Firehose uses either this ClusterEndpoint or the DomainARN field to send data to
     * Amazon OpenSearch Service. </p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithClusterEndpoint(const Aws::String& value) { SetClusterEndpoint(value); return *this;}

    /**
     * <p>The endpoint to use when communicating with the cluster. Kinesis Data
     * Firehose uses either this ClusterEndpoint or the DomainARN field to send data to
     * Amazon OpenSearch Service. </p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithClusterEndpoint(Aws::String&& value) { SetClusterEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint to use when communicating with the cluster. Kinesis Data
     * Firehose uses either this ClusterEndpoint or the DomainARN field to send data to
     * Amazon OpenSearch Service. </p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithClusterEndpoint(const char* value) { SetClusterEndpoint(value); return *this;}


    /**
     * <p>The Amazon OpenSearch Service index name.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The Amazon OpenSearch Service index name.</p>
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The Amazon OpenSearch Service index name.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The Amazon OpenSearch Service index name.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The Amazon OpenSearch Service index name.</p>
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The Amazon OpenSearch Service index name.</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The Amazon OpenSearch Service index name.</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The Amazon OpenSearch Service index name.</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The Amazon OpenSearch Service type name. This applies to Elasticsearch 6.x
     * and lower versions. For Elasticsearch 7.x and OpenSearch Service 1.x, there's no
     * value for TypeName. </p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The Amazon OpenSearch Service type name. This applies to Elasticsearch 6.x
     * and lower versions. For Elasticsearch 7.x and OpenSearch Service 1.x, there's no
     * value for TypeName. </p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The Amazon OpenSearch Service type name. This applies to Elasticsearch 6.x
     * and lower versions. For Elasticsearch 7.x and OpenSearch Service 1.x, there's no
     * value for TypeName. </p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The Amazon OpenSearch Service type name. This applies to Elasticsearch 6.x
     * and lower versions. For Elasticsearch 7.x and OpenSearch Service 1.x, there's no
     * value for TypeName. </p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The Amazon OpenSearch Service type name. This applies to Elasticsearch 6.x
     * and lower versions. For Elasticsearch 7.x and OpenSearch Service 1.x, there's no
     * value for TypeName. </p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The Amazon OpenSearch Service type name. This applies to Elasticsearch 6.x
     * and lower versions. For Elasticsearch 7.x and OpenSearch Service 1.x, there's no
     * value for TypeName. </p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The Amazon OpenSearch Service type name. This applies to Elasticsearch 6.x
     * and lower versions. For Elasticsearch 7.x and OpenSearch Service 1.x, there's no
     * value for TypeName. </p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The Amazon OpenSearch Service type name. This applies to Elasticsearch 6.x
     * and lower versions. For Elasticsearch 7.x and OpenSearch Service 1.x, there's no
     * value for TypeName. </p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The Amazon OpenSearch Service index rotation period</p>
     */
    inline const AmazonopensearchserviceIndexRotationPeriod& GetIndexRotationPeriod() const{ return m_indexRotationPeriod; }

    /**
     * <p>The Amazon OpenSearch Service index rotation period</p>
     */
    inline bool IndexRotationPeriodHasBeenSet() const { return m_indexRotationPeriodHasBeenSet; }

    /**
     * <p>The Amazon OpenSearch Service index rotation period</p>
     */
    inline void SetIndexRotationPeriod(const AmazonopensearchserviceIndexRotationPeriod& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }

    /**
     * <p>The Amazon OpenSearch Service index rotation period</p>
     */
    inline void SetIndexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod&& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = std::move(value); }

    /**
     * <p>The Amazon OpenSearch Service index rotation period</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithIndexRotationPeriod(const AmazonopensearchserviceIndexRotationPeriod& value) { SetIndexRotationPeriod(value); return *this;}

    /**
     * <p>The Amazon OpenSearch Service index rotation period</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithIndexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod&& value) { SetIndexRotationPeriod(std::move(value)); return *this;}


    /**
     * <p>The buffering options.</p>
     */
    inline const AmazonopensearchserviceBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }

    /**
     * <p>The buffering options.</p>
     */
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }

    /**
     * <p>The buffering options.</p>
     */
    inline void SetBufferingHints(const AmazonopensearchserviceBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    /**
     * <p>The buffering options.</p>
     */
    inline void SetBufferingHints(AmazonopensearchserviceBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }

    /**
     * <p>The buffering options.</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithBufferingHints(const AmazonopensearchserviceBufferingHints& value) { SetBufferingHints(value); return *this;}

    /**
     * <p>The buffering options.</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithBufferingHints(AmazonopensearchserviceBufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}


    /**
     * <p>The Amazon OpenSearch Service retry options.</p>
     */
    inline const AmazonopensearchserviceRetryOptions& GetRetryOptions() const{ return m_retryOptions; }

    /**
     * <p>The Amazon OpenSearch Service retry options.</p>
     */
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }

    /**
     * <p>The Amazon OpenSearch Service retry options.</p>
     */
    inline void SetRetryOptions(const AmazonopensearchserviceRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    /**
     * <p>The Amazon OpenSearch Service retry options.</p>
     */
    inline void SetRetryOptions(AmazonopensearchserviceRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }

    /**
     * <p>The Amazon OpenSearch Service retry options.</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithRetryOptions(const AmazonopensearchserviceRetryOptions& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>The Amazon OpenSearch Service retry options.</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithRetryOptions(AmazonopensearchserviceRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline const AmazonopensearchserviceS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }

    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }

    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline void SetS3BackupMode(const AmazonopensearchserviceS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }

    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline void SetS3BackupMode(AmazonopensearchserviceS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }

    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithS3BackupMode(const AmazonopensearchserviceS3BackupMode& value) { SetS3BackupMode(value); return *this;}

    /**
     * <p>The Amazon S3 backup mode.</p>
     */
    inline AmazonopensearchserviceDestinationDescription& WithS3BackupMode(AmazonopensearchserviceS3BackupMode&& value) { SetS3BackupMode(std::move(value)); return *this;}


    
    inline const S3DestinationDescription& GetS3DestinationDescription() const{ return m_s3DestinationDescription; }

    
    inline bool S3DestinationDescriptionHasBeenSet() const { return m_s3DestinationDescriptionHasBeenSet; }

    
    inline void SetS3DestinationDescription(const S3DestinationDescription& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = value; }

    
    inline void SetS3DestinationDescription(S3DestinationDescription&& value) { m_s3DestinationDescriptionHasBeenSet = true; m_s3DestinationDescription = std::move(value); }

    
    inline AmazonopensearchserviceDestinationDescription& WithS3DestinationDescription(const S3DestinationDescription& value) { SetS3DestinationDescription(value); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithS3DestinationDescription(S3DestinationDescription&& value) { SetS3DestinationDescription(std::move(value)); return *this;}


    
    inline const ProcessingConfiguration& GetProcessingConfiguration() const{ return m_processingConfiguration; }

    
    inline bool ProcessingConfigurationHasBeenSet() const { return m_processingConfigurationHasBeenSet; }

    
    inline void SetProcessingConfiguration(const ProcessingConfiguration& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = value; }

    
    inline void SetProcessingConfiguration(ProcessingConfiguration&& value) { m_processingConfigurationHasBeenSet = true; m_processingConfiguration = std::move(value); }

    
    inline AmazonopensearchserviceDestinationDescription& WithProcessingConfiguration(const ProcessingConfiguration& value) { SetProcessingConfiguration(value); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithProcessingConfiguration(ProcessingConfiguration&& value) { SetProcessingConfiguration(std::move(value)); return *this;}


    
    inline const CloudWatchLoggingOptions& GetCloudWatchLoggingOptions() const{ return m_cloudWatchLoggingOptions; }

    
    inline bool CloudWatchLoggingOptionsHasBeenSet() const { return m_cloudWatchLoggingOptionsHasBeenSet; }

    
    inline void SetCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = value; }

    
    inline void SetCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { m_cloudWatchLoggingOptionsHasBeenSet = true; m_cloudWatchLoggingOptions = std::move(value); }

    
    inline AmazonopensearchserviceDestinationDescription& WithCloudWatchLoggingOptions(const CloudWatchLoggingOptions& value) { SetCloudWatchLoggingOptions(value); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithCloudWatchLoggingOptions(CloudWatchLoggingOptions&& value) { SetCloudWatchLoggingOptions(std::move(value)); return *this;}


    
    inline const VpcConfigurationDescription& GetVpcConfigurationDescription() const{ return m_vpcConfigurationDescription; }

    
    inline bool VpcConfigurationDescriptionHasBeenSet() const { return m_vpcConfigurationDescriptionHasBeenSet; }

    
    inline void SetVpcConfigurationDescription(const VpcConfigurationDescription& value) { m_vpcConfigurationDescriptionHasBeenSet = true; m_vpcConfigurationDescription = value; }

    
    inline void SetVpcConfigurationDescription(VpcConfigurationDescription&& value) { m_vpcConfigurationDescriptionHasBeenSet = true; m_vpcConfigurationDescription = std::move(value); }

    
    inline AmazonopensearchserviceDestinationDescription& WithVpcConfigurationDescription(const VpcConfigurationDescription& value) { SetVpcConfigurationDescription(value); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithVpcConfigurationDescription(VpcConfigurationDescription&& value) { SetVpcConfigurationDescription(std::move(value)); return *this;}

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

    AmazonopensearchserviceS3BackupMode m_s3BackupMode;
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
