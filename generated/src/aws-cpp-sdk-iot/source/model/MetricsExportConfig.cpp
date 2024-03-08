/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/MetricsExportConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

MetricsExportConfig::MetricsExportConfig() : 
    m_mqttTopicHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

MetricsExportConfig::MetricsExportConfig(JsonView jsonValue) : 
    m_mqttTopicHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

MetricsExportConfig& MetricsExportConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mqttTopic"))
  {
    m_mqttTopic = jsonValue.GetString("mqttTopic");

    m_mqttTopicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricsExportConfig::Jsonize() const
{
  JsonValue payload;

  if(m_mqttTopicHasBeenSet)
  {
   payload.WithString("mqttTopic", m_mqttTopic);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
