/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/LoggingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

LoggingConfig::LoggingConfig() : 
    m_cloudWatchConfigHasBeenSet(false),
    m_s3ConfigHasBeenSet(false),
    m_textDataDeliveryEnabled(false),
    m_textDataDeliveryEnabledHasBeenSet(false),
    m_imageDataDeliveryEnabled(false),
    m_imageDataDeliveryEnabledHasBeenSet(false),
    m_embeddingDataDeliveryEnabled(false),
    m_embeddingDataDeliveryEnabledHasBeenSet(false)
{
}

LoggingConfig::LoggingConfig(JsonView jsonValue) : 
    m_cloudWatchConfigHasBeenSet(false),
    m_s3ConfigHasBeenSet(false),
    m_textDataDeliveryEnabled(false),
    m_textDataDeliveryEnabledHasBeenSet(false),
    m_imageDataDeliveryEnabled(false),
    m_imageDataDeliveryEnabledHasBeenSet(false),
    m_embeddingDataDeliveryEnabled(false),
    m_embeddingDataDeliveryEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingConfig& LoggingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudWatchConfig"))
  {
    m_cloudWatchConfig = jsonValue.GetObject("cloudWatchConfig");

    m_cloudWatchConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Config"))
  {
    m_s3Config = jsonValue.GetObject("s3Config");

    m_s3ConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("textDataDeliveryEnabled"))
  {
    m_textDataDeliveryEnabled = jsonValue.GetBool("textDataDeliveryEnabled");

    m_textDataDeliveryEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageDataDeliveryEnabled"))
  {
    m_imageDataDeliveryEnabled = jsonValue.GetBool("imageDataDeliveryEnabled");

    m_imageDataDeliveryEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("embeddingDataDeliveryEnabled"))
  {
    m_embeddingDataDeliveryEnabled = jsonValue.GetBool("embeddingDataDeliveryEnabled");

    m_embeddingDataDeliveryEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchConfigHasBeenSet)
  {
   payload.WithObject("cloudWatchConfig", m_cloudWatchConfig.Jsonize());

  }

  if(m_s3ConfigHasBeenSet)
  {
   payload.WithObject("s3Config", m_s3Config.Jsonize());

  }

  if(m_textDataDeliveryEnabledHasBeenSet)
  {
   payload.WithBool("textDataDeliveryEnabled", m_textDataDeliveryEnabled);

  }

  if(m_imageDataDeliveryEnabledHasBeenSet)
  {
   payload.WithBool("imageDataDeliveryEnabled", m_imageDataDeliveryEnabled);

  }

  if(m_embeddingDataDeliveryEnabledHasBeenSet)
  {
   payload.WithBool("embeddingDataDeliveryEnabled", m_embeddingDataDeliveryEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
