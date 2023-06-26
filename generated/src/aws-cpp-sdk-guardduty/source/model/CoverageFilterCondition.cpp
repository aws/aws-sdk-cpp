/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CoverageFilterCondition.h>
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

CoverageFilterCondition::CoverageFilterCondition() : 
    m_equalsHasBeenSet(false),
    m_notEqualsHasBeenSet(false)
{
}

CoverageFilterCondition::CoverageFilterCondition(JsonView jsonValue) : 
    m_equalsHasBeenSet(false),
    m_notEqualsHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageFilterCondition& CoverageFilterCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("equals"))
  {
    Aws::Utils::Array<JsonView> equalsJsonList = jsonValue.GetArray("equals");
    for(unsigned equalsIndex = 0; equalsIndex < equalsJsonList.GetLength(); ++equalsIndex)
    {
      m_equals.push_back(equalsJsonList[equalsIndex].AsString());
    }
    m_equalsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notEquals"))
  {
    Aws::Utils::Array<JsonView> notEqualsJsonList = jsonValue.GetArray("notEquals");
    for(unsigned notEqualsIndex = 0; notEqualsIndex < notEqualsJsonList.GetLength(); ++notEqualsIndex)
    {
      m_notEquals.push_back(notEqualsJsonList[notEqualsIndex].AsString());
    }
    m_notEqualsHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageFilterCondition::Jsonize() const
{
  JsonValue payload;

  if(m_equalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> equalsJsonList(m_equals.size());
   for(unsigned equalsIndex = 0; equalsIndex < equalsJsonList.GetLength(); ++equalsIndex)
   {
     equalsJsonList[equalsIndex].AsString(m_equals[equalsIndex]);
   }
   payload.WithArray("equals", std::move(equalsJsonList));

  }

  if(m_notEqualsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notEqualsJsonList(m_notEquals.size());
   for(unsigned notEqualsIndex = 0; notEqualsIndex < notEqualsJsonList.GetLength(); ++notEqualsIndex)
   {
     notEqualsJsonList[notEqualsIndex].AsString(m_notEquals[notEqualsIndex]);
   }
   payload.WithArray("notEquals", std::move(notEqualsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
