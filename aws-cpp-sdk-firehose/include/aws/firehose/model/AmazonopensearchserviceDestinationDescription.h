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

  class AWS_FIREHOSE_API AmazonopensearchserviceDestinationDescription
  {
  public:
    AmazonopensearchserviceDestinationDescription();
    AmazonopensearchserviceDestinationDescription(Aws::Utils::Json::JsonView jsonValue);
    AmazonopensearchserviceDestinationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    
    inline AmazonopensearchserviceDestinationDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    
    inline const Aws::String& GetDomainARN() const{ return m_domainARN; }

    
    inline bool DomainARNHasBeenSet() const { return m_domainARNHasBeenSet; }

    
    inline void SetDomainARN(const Aws::String& value) { m_domainARNHasBeenSet = true; m_domainARN = value; }

    
    inline void SetDomainARN(Aws::String&& value) { m_domainARNHasBeenSet = true; m_domainARN = std::move(value); }

    
    inline void SetDomainARN(const char* value) { m_domainARNHasBeenSet = true; m_domainARN.assign(value); }

    
    inline AmazonopensearchserviceDestinationDescription& WithDomainARN(const Aws::String& value) { SetDomainARN(value); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithDomainARN(Aws::String&& value) { SetDomainARN(std::move(value)); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithDomainARN(const char* value) { SetDomainARN(value); return *this;}


    
    inline const Aws::String& GetClusterEndpoint() const{ return m_clusterEndpoint; }

    
    inline bool ClusterEndpointHasBeenSet() const { return m_clusterEndpointHasBeenSet; }

    
    inline void SetClusterEndpoint(const Aws::String& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = value; }

    
    inline void SetClusterEndpoint(Aws::String&& value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint = std::move(value); }

    
    inline void SetClusterEndpoint(const char* value) { m_clusterEndpointHasBeenSet = true; m_clusterEndpoint.assign(value); }

    
    inline AmazonopensearchserviceDestinationDescription& WithClusterEndpoint(const Aws::String& value) { SetClusterEndpoint(value); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithClusterEndpoint(Aws::String&& value) { SetClusterEndpoint(std::move(value)); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithClusterEndpoint(const char* value) { SetClusterEndpoint(value); return *this;}


    
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    
    inline AmazonopensearchserviceDestinationDescription& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    
    inline AmazonopensearchserviceDestinationDescription& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    
    inline const AmazonopensearchserviceIndexRotationPeriod& GetIndexRotationPeriod() const{ return m_indexRotationPeriod; }

    
    inline bool IndexRotationPeriodHasBeenSet() const { return m_indexRotationPeriodHasBeenSet; }

    
    inline void SetIndexRotationPeriod(const AmazonopensearchserviceIndexRotationPeriod& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = value; }

    
    inline void SetIndexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod&& value) { m_indexRotationPeriodHasBeenSet = true; m_indexRotationPeriod = std::move(value); }

    
    inline AmazonopensearchserviceDestinationDescription& WithIndexRotationPeriod(const AmazonopensearchserviceIndexRotationPeriod& value) { SetIndexRotationPeriod(value); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithIndexRotationPeriod(AmazonopensearchserviceIndexRotationPeriod&& value) { SetIndexRotationPeriod(std::move(value)); return *this;}


    
    inline const AmazonopensearchserviceBufferingHints& GetBufferingHints() const{ return m_bufferingHints; }

    
    inline bool BufferingHintsHasBeenSet() const { return m_bufferingHintsHasBeenSet; }

    
    inline void SetBufferingHints(const AmazonopensearchserviceBufferingHints& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = value; }

    
    inline void SetBufferingHints(AmazonopensearchserviceBufferingHints&& value) { m_bufferingHintsHasBeenSet = true; m_bufferingHints = std::move(value); }

    
    inline AmazonopensearchserviceDestinationDescription& WithBufferingHints(const AmazonopensearchserviceBufferingHints& value) { SetBufferingHints(value); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithBufferingHints(AmazonopensearchserviceBufferingHints&& value) { SetBufferingHints(std::move(value)); return *this;}


    
    inline const AmazonopensearchserviceRetryOptions& GetRetryOptions() const{ return m_retryOptions; }

    
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }

    
    inline void SetRetryOptions(const AmazonopensearchserviceRetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    
    inline void SetRetryOptions(AmazonopensearchserviceRetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }

    
    inline AmazonopensearchserviceDestinationDescription& WithRetryOptions(const AmazonopensearchserviceRetryOptions& value) { SetRetryOptions(value); return *this;}

    
    inline AmazonopensearchserviceDestinationDescription& WithRetryOptions(AmazonopensearchserviceRetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}


    
    inline const AmazonopensearchserviceS3BackupMode& GetS3BackupMode() const{ return m_s3BackupMode; }

    
    inline bool S3BackupModeHasBeenSet() const { return m_s3BackupModeHasBeenSet; }

    
    inline void SetS3BackupMode(const AmazonopensearchserviceS3BackupMode& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = value; }

    
    inline void SetS3BackupMode(AmazonopensearchserviceS3BackupMode&& value) { m_s3BackupModeHasBeenSet = true; m_s3BackupMode = std::move(value); }

    
    inline AmazonopensearchserviceDestinationDescription& WithS3BackupMode(const AmazonopensearchserviceS3BackupMode& value) { SetS3BackupMode(value); return *this;}

    
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
