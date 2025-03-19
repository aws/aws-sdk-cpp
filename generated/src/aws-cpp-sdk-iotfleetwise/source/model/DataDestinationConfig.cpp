/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/DataDestinationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

DataDestinationConfig::DataDestinationConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

DataDestinationConfig& DataDestinationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Config"))
  {
    m_s3Config = jsonValue.GetObject("s3Config");
    m_s3ConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timestreamConfig"))
  {
    m_timestreamConfig = jsonValue.GetObject("timestreamConfig");
    m_timestreamConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mqttTopicConfig"))
  {
    m_mqttTopicConfig = jsonValue.GetObject("mqttTopicConfig");
    m_mqttTopicConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue DataDestinationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3ConfigHasBeenSet)
  {
   payload.WithObject("s3Config", m_s3Config.Jsonize());

  }

  if(m_timestreamConfigHasBeenSet)
  {
   payload.WithObject("timestreamConfig", m_timestreamConfig.Jsonize());

  }

  if(m_mqttTopicConfigHasBeenSet)
  {
   payload.WithObject("mqttTopicConfig", m_mqttTopicConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
