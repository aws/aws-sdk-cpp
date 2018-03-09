/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/guardduty/model/Condition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Condition::Condition() : 
    m_eqHasBeenSet(false),
    m_gt(0),
    m_gtHasBeenSet(false),
    m_gte(0),
    m_gteHasBeenSet(false),
    m_lt(0),
    m_ltHasBeenSet(false),
    m_lte(0),
    m_lteHasBeenSet(false),
    m_neqHasBeenSet(false)
{
}

Condition::Condition(const JsonValue& jsonValue) : 
    m_eqHasBeenSet(false),
    m_gt(0),
    m_gtHasBeenSet(false),
    m_gte(0),
    m_gteHasBeenSet(false),
    m_lt(0),
    m_ltHasBeenSet(false),
    m_lte(0),
    m_lteHasBeenSet(false),
    m_neqHasBeenSet(false)
{
  *this = jsonValue;
}

Condition& Condition::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("eq"))
  {
    Array<JsonValue> eqJsonList = jsonValue.GetArray("eq");
    for(unsigned eqIndex = 0; eqIndex < eqJsonList.GetLength(); ++eqIndex)
    {
      m_eq.push_back(eqJsonList[eqIndex].AsString());
    }
    m_eqHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gt"))
  {
    m_gt = jsonValue.GetInteger("gt");

    m_gtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gte"))
  {
    m_gte = jsonValue.GetInteger("gte");

    m_gteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lt"))
  {
    m_lt = jsonValue.GetInteger("lt");

    m_ltHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lte"))
  {
    m_lte = jsonValue.GetInteger("lte");

    m_lteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("neq"))
  {
    Array<JsonValue> neqJsonList = jsonValue.GetArray("neq");
    for(unsigned neqIndex = 0; neqIndex < neqJsonList.GetLength(); ++neqIndex)
    {
      m_neq.push_back(neqJsonList[neqIndex].AsString());
    }
    m_neqHasBeenSet = true;
  }

  return *this;
}

JsonValue Condition::Jsonize() const
{
  JsonValue payload;

  if(m_eqHasBeenSet)
  {
   Array<JsonValue> eqJsonList(m_eq.size());
   for(unsigned eqIndex = 0; eqIndex < eqJsonList.GetLength(); ++eqIndex)
   {
     eqJsonList[eqIndex].AsString(m_eq[eqIndex]);
   }
   payload.WithArray("eq", std::move(eqJsonList));

  }

  if(m_gtHasBeenSet)
  {
   payload.WithInteger("gt", m_gt);

  }

  if(m_gteHasBeenSet)
  {
   payload.WithInteger("gte", m_gte);

  }

  if(m_ltHasBeenSet)
  {
   payload.WithInteger("lt", m_lt);

  }

  if(m_lteHasBeenSet)
  {
   payload.WithInteger("lte", m_lte);

  }

  if(m_neqHasBeenSet)
  {
   Array<JsonValue> neqJsonList(m_neq.size());
   for(unsigned neqIndex = 0; neqIndex < neqJsonList.GetLength(); ++neqIndex)
   {
     neqJsonList[neqIndex].AsString(m_neq[neqIndex]);
   }
   payload.WithArray("neq", std::move(neqJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
