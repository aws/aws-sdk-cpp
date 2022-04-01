/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/KinesisStreamSourceDescription.h>
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

KinesisStreamSourceDescription::KinesisStreamSourceDescription() : 
    m_kinesisStreamARNHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_deliveryStartTimestampHasBeenSet(false)
{
}

KinesisStreamSourceDescription::KinesisStreamSourceDescription(JsonView jsonValue) : 
    m_kinesisStreamARNHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_deliveryStartTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisStreamSourceDescription& KinesisStreamSourceDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KinesisStreamARN"))
  {
    m_kinesisStreamARN = jsonValue.GetString("KinesisStreamARN");

    m_kinesisStreamARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");

    m_roleARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeliveryStartTimestamp"))
  {
    m_deliveryStartTimestamp = jsonValue.GetDouble("DeliveryStartTimestamp");

    m_deliveryStartTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisStreamSourceDescription::Jsonize() const
{
  JsonValue payload;

  if(m_kinesisStreamARNHasBeenSet)
  {
   payload.WithString("KinesisStreamARN", m_kinesisStreamARN);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_deliveryStartTimestampHasBeenSet)
  {
   payload.WithDouble("DeliveryStartTimestamp", m_deliveryStartTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
