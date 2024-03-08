/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/UtilizationPreference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

UtilizationPreference::UtilizationPreference() : 
    m_metricName(CustomizableMetricName::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_metricParametersHasBeenSet(false)
{
}

UtilizationPreference::UtilizationPreference(JsonView jsonValue) : 
    m_metricName(CustomizableMetricName::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_metricParametersHasBeenSet(false)
{
  *this = jsonValue;
}

UtilizationPreference& UtilizationPreference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metricName"))
  {
    m_metricName = CustomizableMetricNameMapper::GetCustomizableMetricNameForName(jsonValue.GetString("metricName"));

    m_metricNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricParameters"))
  {
    m_metricParameters = jsonValue.GetObject("metricParameters");

    m_metricParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue UtilizationPreference::Jsonize() const
{
  JsonValue payload;

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", CustomizableMetricNameMapper::GetNameForCustomizableMetricName(m_metricName));
  }

  if(m_metricParametersHasBeenSet)
  {
   payload.WithObject("metricParameters", m_metricParameters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
