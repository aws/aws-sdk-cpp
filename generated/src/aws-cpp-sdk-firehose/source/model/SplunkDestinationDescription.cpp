﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/SplunkDestinationDescription.h>
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

SplunkDestinationDescription::SplunkDestinationDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

SplunkDestinationDescription& SplunkDestinationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HECEndpoint"))
  {
    m_hECEndpoint = jsonValue.GetString("HECEndpoint");
    m_hECEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HECEndpointType"))
  {
    m_hECEndpointType = HECEndpointTypeMapper::GetHECEndpointTypeForName(jsonValue.GetString("HECEndpointType"));
    m_hECEndpointTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HECToken"))
  {
    m_hECToken = jsonValue.GetString("HECToken");
    m_hECTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HECAcknowledgmentTimeoutInSeconds"))
  {
    m_hECAcknowledgmentTimeoutInSeconds = jsonValue.GetInteger("HECAcknowledgmentTimeoutInSeconds");
    m_hECAcknowledgmentTimeoutInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetryOptions"))
  {
    m_retryOptions = jsonValue.GetObject("RetryOptions");
    m_retryOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3BackupMode"))
  {
    m_s3BackupMode = SplunkS3BackupModeMapper::GetSplunkS3BackupModeForName(jsonValue.GetString("S3BackupMode"));
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
  if(jsonValue.ValueExists("BufferingHints"))
  {
    m_bufferingHints = jsonValue.GetObject("BufferingHints");
    m_bufferingHintsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretsManagerConfiguration"))
  {
    m_secretsManagerConfiguration = jsonValue.GetObject("SecretsManagerConfiguration");
    m_secretsManagerConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SplunkDestinationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_hECEndpointHasBeenSet)
  {
   payload.WithString("HECEndpoint", m_hECEndpoint);

  }

  if(m_hECEndpointTypeHasBeenSet)
  {
   payload.WithString("HECEndpointType", HECEndpointTypeMapper::GetNameForHECEndpointType(m_hECEndpointType));
  }

  if(m_hECTokenHasBeenSet)
  {
   payload.WithString("HECToken", m_hECToken);

  }

  if(m_hECAcknowledgmentTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("HECAcknowledgmentTimeoutInSeconds", m_hECAcknowledgmentTimeoutInSeconds);

  }

  if(m_retryOptionsHasBeenSet)
  {
   payload.WithObject("RetryOptions", m_retryOptions.Jsonize());

  }

  if(m_s3BackupModeHasBeenSet)
  {
   payload.WithString("S3BackupMode", SplunkS3BackupModeMapper::GetNameForSplunkS3BackupMode(m_s3BackupMode));
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

  if(m_bufferingHintsHasBeenSet)
  {
   payload.WithObject("BufferingHints", m_bufferingHints.Jsonize());

  }

  if(m_secretsManagerConfigurationHasBeenSet)
  {
   payload.WithObject("SecretsManagerConfiguration", m_secretsManagerConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
