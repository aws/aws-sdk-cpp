/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/MetricTransformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

MetricTransformation::MetricTransformation() : 
    m_metricNameHasBeenSet(false),
    m_metricNamespaceHasBeenSet(false),
    m_metricValueHasBeenSet(false),
    m_defaultValue(0.0),
    m_defaultValueHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_unit(StandardUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

MetricTransformation::MetricTransformation(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_metricNamespaceHasBeenSet(false),
    m_metricValueHasBeenSet(false),
    m_defaultValue(0.0),
    m_defaultValueHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_unit(StandardUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

MetricTransformation& MetricTransformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricNamespace"))
  {
    m_metricNamespace = jsonValue.GetString("metricNamespace");

    m_metricNamespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricValue"))
  {
    m_metricValue = jsonValue.GetString("metricValue");

    m_metricValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetDouble("defaultValue");

    m_defaultValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dimensions"))
  {
    Aws::Map<Aws::String, JsonView> dimensionsJsonMap = jsonValue.GetObject("dimensions").GetAllObjects();
    for(auto& dimensionsItem : dimensionsJsonMap)
    {
      m_dimensions[dimensionsItem.first] = dimensionsItem.second.AsString();
    }
    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unit"))
  {
    m_unit = StandardUnitMapper::GetStandardUnitForName(jsonValue.GetString("unit"));

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricTransformation::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", m_metricName);

  }

  if(m_metricNamespaceHasBeenSet)
  {
   payload.WithString("metricNamespace", m_metricNamespace);

  }

  if(m_metricValueHasBeenSet)
  {
   payload.WithString("metricValue", m_metricValue);

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithDouble("defaultValue", m_defaultValue);

  }

  if(m_dimensionsHasBeenSet)
  {
   JsonValue dimensionsJsonMap;
   for(auto& dimensionsItem : m_dimensions)
   {
     dimensionsJsonMap.WithString(dimensionsItem.first, dimensionsItem.second);
   }
   payload.WithObject("dimensions", std::move(dimensionsJsonMap));

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", StandardUnitMapper::GetNameForStandardUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
