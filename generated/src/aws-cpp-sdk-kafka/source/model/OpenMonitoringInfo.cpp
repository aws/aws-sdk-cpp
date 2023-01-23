/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/OpenMonitoringInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

OpenMonitoringInfo::OpenMonitoringInfo() : 
    m_prometheusHasBeenSet(false)
{
}

OpenMonitoringInfo::OpenMonitoringInfo(JsonView jsonValue) : 
    m_prometheusHasBeenSet(false)
{
  *this = jsonValue;
}

OpenMonitoringInfo& OpenMonitoringInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("prometheus"))
  {
    m_prometheus = jsonValue.GetObject("prometheus");

    m_prometheusHasBeenSet = true;
  }

  return *this;
}

JsonValue OpenMonitoringInfo::Jsonize() const
{
  JsonValue payload;

  if(m_prometheusHasBeenSet)
  {
   payload.WithObject("prometheus", m_prometheus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
