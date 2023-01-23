/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_equalsHasBeenSet(false),
    m_notEqualsHasBeenSet(false),
    m_greaterThan(0),
    m_greaterThanHasBeenSet(false),
    m_greaterThanOrEqual(0),
    m_greaterThanOrEqualHasBeenSet(false),
    m_lessThan(0),
    m_lessThanHasBeenSet(false),
    m_lessThanOrEqual(0),
    m_lessThanOrEqualHasBeenSet(false)
{
}

Condition::Condition(JsonView jsonValue) : 
    m_equalsHasBeenSet(false),
    m_notEqualsHasBeenSet(false),
    m_greaterThan(0),
    m_greaterThanHasBeenSet(false),
    m_greaterThanOrEqual(0),
    m_greaterThanOrEqualHasBeenSet(false),
    m_lessThan(0),
    m_lessThanHasBeenSet(false),
    m_lessThanOrEqual(0),
    m_lessThanOrEqualHasBeenSet(false)
{
  *this = jsonValue;
}

Condition& Condition::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("greaterThan"))
  {
    m_greaterThan = jsonValue.GetInt64("greaterThan");

    m_greaterThanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greaterThanOrEqual"))
  {
    m_greaterThanOrEqual = jsonValue.GetInt64("greaterThanOrEqual");

    m_greaterThanOrEqualHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lessThan"))
  {
    m_lessThan = jsonValue.GetInt64("lessThan");

    m_lessThanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lessThanOrEqual"))
  {
    m_lessThanOrEqual = jsonValue.GetInt64("lessThanOrEqual");

    m_lessThanOrEqualHasBeenSet = true;
  }

  return *this;
}

JsonValue Condition::Jsonize() const
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

  if(m_greaterThanHasBeenSet)
  {
   payload.WithInt64("greaterThan", m_greaterThan);

  }

  if(m_greaterThanOrEqualHasBeenSet)
  {
   payload.WithInt64("greaterThanOrEqual", m_greaterThanOrEqual);

  }

  if(m_lessThanHasBeenSet)
  {
   payload.WithInt64("lessThan", m_lessThan);

  }

  if(m_lessThanOrEqualHasBeenSet)
  {
   payload.WithInt64("lessThanOrEqual", m_lessThanOrEqual);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
