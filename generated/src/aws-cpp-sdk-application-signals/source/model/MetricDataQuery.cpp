/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/MetricDataQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

MetricDataQuery::MetricDataQuery(JsonView jsonValue)
{
  *this = jsonValue;
}

MetricDataQuery& MetricDataQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetricStat"))
  {
    m_metricStat = jsonValue.GetObject("MetricStat");
    m_metricStatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Expression"))
  {
    m_expression = jsonValue.GetString("Expression");
    m_expressionHasBeenSet = true;
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
  if(jsonValue.ValueExists("Period"))
  {
    m_period = jsonValue.GetInteger("Period");
    m_periodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");
    m_accountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MetricDataQuery::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_metricStatHasBeenSet)
  {
   payload.WithObject("MetricStat", m_metricStat.Jsonize());

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_returnDataHasBeenSet)
  {
   payload.WithBool("ReturnData", m_returnData);

  }

  if(m_periodHasBeenSet)
  {
   payload.WithInteger("Period", m_period);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
