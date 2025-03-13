/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/PredictiveScalingMetricDataQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

PredictiveScalingMetricDataQuery::PredictiveScalingMetricDataQuery(JsonView jsonValue)
{
  *this = jsonValue;
}

PredictiveScalingMetricDataQuery& PredictiveScalingMetricDataQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");
    m_expressionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricStat"))
  {
    m_metricStat = jsonValue.GetObject("MetricStat");
    m_metricStatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");
    m_labelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReturnData"))
  {
    m_returnData = jsonValue.GetBool("ReturnData");
    m_returnDataHasBeenSet = true;
  }
  return *this;
}

JsonValue PredictiveScalingMetricDataQuery::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_metricStatHasBeenSet)
  {
   payload.WithObject("MetricStat", m_metricStat.Jsonize());

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_returnDataHasBeenSet)
  {
   payload.WithBool("ReturnData", m_returnData);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
