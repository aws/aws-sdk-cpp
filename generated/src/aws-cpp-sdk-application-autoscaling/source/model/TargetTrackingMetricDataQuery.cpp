/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/TargetTrackingMetricDataQuery.h>
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

TargetTrackingMetricDataQuery::TargetTrackingMetricDataQuery() : 
    m_expressionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_metricStatHasBeenSet(false),
    m_returnData(false),
    m_returnDataHasBeenSet(false)
{
}

TargetTrackingMetricDataQuery::TargetTrackingMetricDataQuery(JsonView jsonValue) : 
    m_expressionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_metricStatHasBeenSet(false),
    m_returnData(false),
    m_returnDataHasBeenSet(false)
{
  *this = jsonValue;
}

TargetTrackingMetricDataQuery& TargetTrackingMetricDataQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");

    m_expressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");

    m_labelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetricStat"))
  {
    m_metricStat = jsonValue.GetObject("MetricStat");

    m_metricStatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReturnData"))
  {
    m_returnData = jsonValue.GetBool("ReturnData");

    m_returnDataHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetTrackingMetricDataQuery::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_metricStatHasBeenSet)
  {
   payload.WithObject("MetricStat", m_metricStat.Jsonize());

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
