/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityObservation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DataQualityObservation::DataQualityObservation() : 
    m_descriptionHasBeenSet(false),
    m_metricBasedObservationHasBeenSet(false)
{
}

DataQualityObservation::DataQualityObservation(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_metricBasedObservationHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityObservation& DataQualityObservation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricBasedObservation"))
  {
    m_metricBasedObservation = jsonValue.GetObject("MetricBasedObservation");

    m_metricBasedObservationHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityObservation::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_metricBasedObservationHasBeenSet)
  {
   payload.WithObject("MetricBasedObservation", m_metricBasedObservation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
