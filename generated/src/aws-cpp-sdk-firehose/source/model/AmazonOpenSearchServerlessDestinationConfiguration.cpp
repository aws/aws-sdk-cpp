﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/AmazonOpenSearchServerlessDestinationConfiguration.h>
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

AmazonOpenSearchServerlessDestinationConfiguration::AmazonOpenSearchServerlessDestinationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AmazonOpenSearchServerlessDestinationConfiguration& AmazonOpenSearchServerlessDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");
    m_roleARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CollectionEndpoint"))
  {
    m_collectionEndpoint = jsonValue.GetString("CollectionEndpoint");
    m_collectionEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");
    m_indexNameHasBeenSet = true;
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
    m_s3BackupMode = AmazonOpenSearchServerlessS3BackupModeMapper::GetAmazonOpenSearchServerlessS3BackupModeForName(jsonValue.GetString("S3BackupMode"));
    m_s3BackupModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("S3Configuration");
    m_s3ConfigurationHasBeenSet = true;
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
  if(jsonValue.ValueExists("VpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("VpcConfiguration");
    m_vpcConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AmazonOpenSearchServerlessDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_collectionEndpointHasBeenSet)
  {
   payload.WithString("CollectionEndpoint", m_collectionEndpoint);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

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
   payload.WithString("S3BackupMode", AmazonOpenSearchServerlessS3BackupModeMapper::GetNameForAmazonOpenSearchServerlessS3BackupMode(m_s3BackupMode));
  }

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("S3Configuration", m_s3Configuration.Jsonize());

  }

  if(m_processingConfigurationHasBeenSet)
  {
   payload.WithObject("ProcessingConfiguration", m_processingConfiguration.Jsonize());

  }

  if(m_cloudWatchLoggingOptionsHasBeenSet)
  {
   payload.WithObject("CloudWatchLoggingOptions", m_cloudWatchLoggingOptions.Jsonize());

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
