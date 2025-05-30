﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/PrometheusInfo.h>
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

PrometheusInfo::PrometheusInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

PrometheusInfo& PrometheusInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jmxExporter"))
  {
    m_jmxExporter = jsonValue.GetObject("jmxExporter");
    m_jmxExporterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeExporter"))
  {
    m_nodeExporter = jsonValue.GetObject("nodeExporter");
    m_nodeExporterHasBeenSet = true;
  }
  return *this;
}

JsonValue PrometheusInfo::Jsonize() const
{
  JsonValue payload;

  if(m_jmxExporterHasBeenSet)
  {
   payload.WithObject("jmxExporter", m_jmxExporter.Jsonize());

  }

  if(m_nodeExporterHasBeenSet)
  {
   payload.WithObject("nodeExporter", m_nodeExporter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
