﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/AmazonopensearchserviceDestinationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

AmazonopensearchserviceDestinationDescription::AmazonopensearchserviceDestinationDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

AmazonopensearchserviceDestinationDescription& AmazonopensearchserviceDestinationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");
    m_roleARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DomainARN"))
  {
    m_domainARN = jsonValue.GetString("DomainARN");
    m_domainARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClusterEndpoint"))
  {
    m_clusterEndpoint = jsonValue.GetString("ClusterEndpoint");
    m_clusterEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");
    m_indexNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TypeName"))
  {
    m_typeName = jsonValue.GetString("TypeName");
    m_typeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexRotationPeriod"))
  {
    m_indexRotationPeriod = AmazonopensearchserviceIndexRotationPeriodMapper::GetAmazonopensearchserviceIndexRotationPeriodForName(jsonValue.GetString("IndexRotationPeriod"));
    m_indexRotationPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BufferingHints"))
  {
    m_bufferingHints = jsonValue.GetObject("BufferingHints");
    m_bufferingHintsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetryOptions"))
  {
    m_retryOptions = jsonValue.GetObject("RetryOptions");
    m_retryOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3BackupMode"))
  {
    m_s3BackupMode = AmazonopensearchserviceS3BackupModeMapper::GetAmazonopensearchserviceS3BackupModeForName(jsonValue.GetString("S3BackupMode"));
    m_s3BackupModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3DestinationDescription"))
  {
    m_s3DestinationDescription = jsonValue.GetObject("S3DestinationDescription");
    m_s3DestinationDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProcessingConfiguration"))
  {
    m_processingConfiguration = jsonValue.GetObject("ProcessingConfiguration");
    m_processingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CloudWatchLoggingOptions"))
  {
    m_cloudWatchLoggingOptions = jsonValue.GetObject("CloudWatchLoggingOptions");
    m_cloudWatchLoggingOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcConfigurationDescription"))
  {
    m_vpcConfigurationDescription = jsonValue.GetObject("VpcConfigurationDescription");
    m_vpcConfigurationDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DocumentIdOptions"))
  {
    m_documentIdOptions = jsonValue.GetObject("DocumentIdOptions");
    m_documentIdOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AmazonopensearchserviceDestinationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_domainARNHasBeenSet)
  {
   payload.WithString("DomainARN", m_domainARN);

  }

  if(m_clusterEndpointHasBeenSet)
  {
   payload.WithString("ClusterEndpoint", m_clusterEndpoint);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_typeNameHasBeenSet)
  {
   payload.WithString("TypeName", m_typeName);

  }

  if(m_indexRotationPeriodHasBeenSet)
  {
   payload.WithString("IndexRotationPeriod", AmazonopensearchserviceIndexRotationPeriodMapper::GetNameForAmazonopensearchserviceIndexRotationPeriod(m_indexRotationPeriod));
  }

  if(m_bufferingHintsHasBeenSet)
  {
   payload.WithObject("BufferingHints", m_bufferingHints.Jsonize());

  }

  if(m_retryOptionsHasBeenSet)
  {
   payload.WithObject("RetryOptions", m_retryOptions.Jsonize());

  }

  if(m_s3BackupModeHasBeenSet)
  {
   payload.WithString("S3BackupMode", AmazonopensearchserviceS3BackupModeMapper::GetNameForAmazonopensearchserviceS3BackupMode(m_s3BackupMode));
  }

  if(m_s3DestinationDescriptionHasBeenSet)
  {
   payload.WithObject("S3DestinationDescription", m_s3DestinationDescription.Jsonize());

  }

  if(m_processingConfigurationHasBeenSet)
  {
   payload.WithObject("ProcessingConfiguration", m_processingConfiguration.Jsonize());

  }

  if(m_cloudWatchLoggingOptionsHasBeenSet)
  {
   payload.WithObject("CloudWatchLoggingOptions", m_cloudWatchLoggingOptions.Jsonize());

  }

  if(m_vpcConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("VpcConfigurationDescription", m_vpcConfigurationDescription.Jsonize());

  }

  if(m_documentIdOptionsHasBeenSet)
  {
   payload.WithObject("DocumentIdOptions", m_documentIdOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
