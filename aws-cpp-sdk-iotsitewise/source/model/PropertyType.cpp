/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PropertyType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

PropertyType::PropertyType() : 
    m_attributeHasBeenSet(false),
    m_measurementHasBeenSet(false),
    m_transformHasBeenSet(false),
    m_metricHasBeenSet(false)
{
}

PropertyType::PropertyType(JsonView jsonValue) : 
    m_attributeHasBeenSet(false),
    m_measurementHasBeenSet(false),
    m_transformHasBeenSet(false),
    m_metricHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyType& PropertyType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attribute"))
  {
    m_attribute = jsonValue.GetObject("attribute");

    m_attributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("measurement"))
  {
    m_measurement = jsonValue.GetObject("measurement");

    m_measurementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transform"))
  {
    m_transform = jsonValue.GetObject("transform");

    m_transformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metric"))
  {
    m_metric = jsonValue.GetObject("metric");

    m_metricHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyType::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithObject("attribute", m_attribute.Jsonize());

  }

  if(m_measurementHasBeenSet)
  {
   payload.WithObject("measurement", m_measurement.Jsonize());

  }

  if(m_transformHasBeenSet)
  {
   payload.WithObject("transform", m_transform.Jsonize());

  }

  if(m_metricHasBeenSet)
  {
   payload.WithObject("metric", m_metric.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
