/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/KinesisVideoStreamConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

KinesisVideoStreamConfig::KinesisVideoStreamConfig() : 
    m_prefixHasBeenSet(false),
    m_retentionPeriodHours(0),
    m_retentionPeriodHoursHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false)
{
}

KinesisVideoStreamConfig::KinesisVideoStreamConfig(JsonView jsonValue) : 
    m_prefixHasBeenSet(false),
    m_retentionPeriodHours(0),
    m_retentionPeriodHoursHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisVideoStreamConfig& KinesisVideoStreamConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RetentionPeriodHours"))
  {
    m_retentionPeriodHours = jsonValue.GetInteger("RetentionPeriodHours");

    m_retentionPeriodHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionConfig"))
  {
    m_encryptionConfig = jsonValue.GetObject("EncryptionConfig");

    m_encryptionConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisVideoStreamConfig::Jsonize() const
{
  JsonValue payload;

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_retentionPeriodHoursHasBeenSet)
  {
   payload.WithInteger("RetentionPeriodHours", m_retentionPeriodHours);

  }

  if(m_encryptionConfigHasBeenSet)
  {
   payload.WithObject("EncryptionConfig", m_encryptionConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
