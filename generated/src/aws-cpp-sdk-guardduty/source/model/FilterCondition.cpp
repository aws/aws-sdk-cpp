/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/FilterCondition.h>
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

FilterCondition::FilterCondition() : 
    m_equalsValueHasBeenSet(false),
    m_greaterThan(0),
    m_greaterThanHasBeenSet(false),
    m_lessThan(0),
    m_lessThanHasBeenSet(false)
{
}

FilterCondition::FilterCondition(JsonView jsonValue) : 
    m_equalsValueHasBeenSet(false),
    m_greaterThan(0),
    m_greaterThanHasBeenSet(false),
    m_lessThan(0),
    m_lessThanHasBeenSet(false)
{
  *this = jsonValue;
}

FilterCondition& FilterCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("equalsValue"))
  {
    m_equalsValue = jsonValue.GetString("equalsValue");

    m_equalsValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greaterThan"))
  {
    m_greaterThan = jsonValue.GetInt64("greaterThan");

    m_greaterThanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lessThan"))
  {
    m_lessThan = jsonValue.GetInt64("lessThan");

    m_lessThanHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterCondition::Jsonize() const
{
  JsonValue payload;

  if(m_equalsValueHasBeenSet)
  {
   payload.WithString("equalsValue", m_equalsValue);

  }

  if(m_greaterThanHasBeenSet)
  {
   payload.WithInt64("greaterThan", m_greaterThan);

  }

  if(m_lessThanHasBeenSet)
  {
   payload.WithInt64("lessThan", m_lessThan);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
