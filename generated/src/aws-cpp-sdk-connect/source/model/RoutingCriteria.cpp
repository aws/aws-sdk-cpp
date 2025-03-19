/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RoutingCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

RoutingCriteria::RoutingCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

RoutingCriteria& RoutingCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Steps"))
  {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("Steps");
    for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
    {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActivationTimestamp"))
  {
    m_activationTimestamp = jsonValue.GetDouble("ActivationTimestamp");
    m_activationTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetInteger("Index");
    m_indexHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_stepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("Steps", std::move(stepsJsonList));

  }

  if(m_activationTimestampHasBeenSet)
  {
   payload.WithDouble("ActivationTimestamp", m_activationTimestamp.SecondsWithMSPrecision());
  }

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("Index", m_index);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
