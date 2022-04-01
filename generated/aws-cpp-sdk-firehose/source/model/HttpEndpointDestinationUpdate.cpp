/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/HttpEndpointDestinationUpdate.h>
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

HttpEndpointDestinationUpdate::HttpEndpointDestinationUpdate() : 
    m_endpointConfigurationHasBeenSet(false),
    m_bufferingHintsHasBeenSet(false),
    m_cloudWatchLoggingOptionsHasBeenSet(false),
    m_requestConfigurationHasBeenSet(false),
    m_processingConfigurationHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_retryOptionsHasBeenSet(false),
    m_s3BackupMode(HttpEndpointS3BackupMode::NOT_SET),
    m_s3BackupModeHasBeenSet(false),
    m_s3UpdateHasBeenSet(false)
{
}

HttpEndpointDestinationUpdate::HttpEndpointDestinationUpdate(JsonView jsonValue) : 
    m_endpointConfigurationHasBeenSet(false),
    m_bufferingHintsHasBeenSet(false),
    m_cloudWatchLoggingOptionsHasBeenSet(false),
    m_requestConfigurationHasBeenSet(false),
    m_processingConfigurationHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_retryOptionsHasBeenSet(false),
    m_s3BackupMode(HttpEndpointS3BackupMode::NOT_SET),
    m_s3BackupModeHasBeenSet(false),
    m_s3UpdateHasBeenSet(false)
{
  *this = jsonValue;
}

HttpEndpointDestinationUpdate& HttpEndpointDestinationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointConfiguration"))
  {
    m_endpointConfiguration = jsonValue.GetObject("EndpointConfiguration");

    m_endpointConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BufferingHints"))
  {
    m_bufferingHints = jsonValue.GetObject("BufferingHints");

    m_bufferingHintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLoggingOptions"))
  {
    m_cloudWatchLoggingOptions = jsonValue.GetObject("CloudWatchLoggingOptions");

    m_cloudWatchLoggingOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestConfiguration"))
  {
    m_requestConfiguration = jsonValue.GetObject("RequestConfiguration");

    m_requestConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingConfiguration"))
  {
    m_processingConfiguration = jsonValue.GetObject("ProcessingConfiguration");

    m_processingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");

    m_roleARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetryOptions"))
  {
    m_retryOptions = jsonValue.GetObject("RetryOptions");

    m_retryOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BackupMode"))
  {
    m_s3BackupMode = HttpEndpointS3BackupModeMapper::GetHttpEndpointS3BackupModeForName(jsonValue.GetString("S3BackupMode"));

    m_s3BackupModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Update"))
  {
    m_s3Update = jsonValue.GetObject("S3Update");

    m_s3UpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue HttpEndpointDestinationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_endpointConfigurationHasBeenSet)
  {
   payload.WithObject("EndpointConfiguration", m_endpointConfiguration.Jsonize());

  }

  if(m_bufferingHintsHasBeenSet)
  {
   payload.WithObject("BufferingHints", m_bufferingHints.Jsonize());

  }

  if(m_cloudWatchLoggingOptionsHasBeenSet)
  {
   payload.WithObject("CloudWatchLoggingOptions", m_cloudWatchLoggingOptions.Jsonize());

  }

  if(m_requestConfigurationHasBeenSet)
  {
   payload.WithObject("RequestConfiguration", m_requestConfiguration.Jsonize());

  }

  if(m_processingConfigurationHasBeenSet)
  {
   payload.WithObject("ProcessingConfiguration", m_processingConfiguration.Jsonize());

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_retryOptionsHasBeenSet)
  {
   payload.WithObject("RetryOptions", m_retryOptions.Jsonize());

  }

  if(m_s3BackupModeHasBeenSet)
  {
   payload.WithString("S3BackupMode", HttpEndpointS3BackupModeMapper::GetNameForHttpEndpointS3BackupMode(m_s3BackupMode));
  }

  if(m_s3UpdateHasBeenSet)
  {
   payload.WithObject("S3Update", m_s3Update.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
