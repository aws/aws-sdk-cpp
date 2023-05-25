/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/OutlierDetection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

OutlierDetection::OutlierDetection() : 
    m_baseEjectionDurationHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_maxEjectionPercent(0),
    m_maxEjectionPercentHasBeenSet(false),
    m_maxServerErrors(0),
    m_maxServerErrorsHasBeenSet(false)
{
}

OutlierDetection::OutlierDetection(JsonView jsonValue) : 
    m_baseEjectionDurationHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_maxEjectionPercent(0),
    m_maxEjectionPercentHasBeenSet(false),
    m_maxServerErrors(0),
    m_maxServerErrorsHasBeenSet(false)
{
  *this = jsonValue;
}

OutlierDetection& OutlierDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("baseEjectionDuration"))
  {
    m_baseEjectionDuration = jsonValue.GetObject("baseEjectionDuration");

    m_baseEjectionDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interval"))
  {
    m_interval = jsonValue.GetObject("interval");

    m_intervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxEjectionPercent"))
  {
    m_maxEjectionPercent = jsonValue.GetInteger("maxEjectionPercent");

    m_maxEjectionPercentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxServerErrors"))
  {
    m_maxServerErrors = jsonValue.GetInt64("maxServerErrors");

    m_maxServerErrorsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutlierDetection::Jsonize() const
{
  JsonValue payload;

  if(m_baseEjectionDurationHasBeenSet)
  {
   payload.WithObject("baseEjectionDuration", m_baseEjectionDuration.Jsonize());

  }

  if(m_intervalHasBeenSet)
  {
   payload.WithObject("interval", m_interval.Jsonize());

  }

  if(m_maxEjectionPercentHasBeenSet)
  {
   payload.WithInteger("maxEjectionPercent", m_maxEjectionPercent);

  }

  if(m_maxServerErrorsHasBeenSet)
  {
   payload.WithInt64("maxServerErrors", m_maxServerErrors);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
