/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/FleetMetricNameAndArn.h>
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

FleetMetricNameAndArn::FleetMetricNameAndArn() : 
    m_metricNameHasBeenSet(false),
    m_metricArnHasBeenSet(false)
{
}

FleetMetricNameAndArn::FleetMetricNameAndArn(JsonView jsonValue) : 
    m_metricNameHasBeenSet(false),
    m_metricArnHasBeenSet(false)
{
  *this = jsonValue;
}

FleetMetricNameAndArn& FleetMetricNameAndArn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = jsonValue.GetString("metricName");

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricArn"))
  {
    m_metricArn = jsonValue.GetString("metricArn");

    m_metricArnHasBeenSet = true;
  }

  return *this;
}

JsonValue FleetMetricNameAndArn::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", m_metricName);

  }

  if(m_metricArnHasBeenSet)
  {
   payload.WithString("metricArn", m_metricArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
