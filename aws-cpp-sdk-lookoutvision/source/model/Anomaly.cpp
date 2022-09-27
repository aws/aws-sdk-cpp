/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/Anomaly.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

Anomaly::Anomaly() : 
    m_nameHasBeenSet(false),
    m_pixelAnomalyHasBeenSet(false)
{
}

Anomaly::Anomaly(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_pixelAnomalyHasBeenSet(false)
{
  *this = jsonValue;
}

Anomaly& Anomaly::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PixelAnomaly"))
  {
    m_pixelAnomaly = jsonValue.GetObject("PixelAnomaly");

    m_pixelAnomalyHasBeenSet = true;
  }

  return *this;
}

JsonValue Anomaly::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_pixelAnomalyHasBeenSet)
  {
   payload.WithObject("PixelAnomaly", m_pixelAnomaly.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
