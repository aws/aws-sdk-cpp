/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/Condition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

Condition::Condition() : 
    m_afterHasBeenSet(false),
    m_beforeHasBeenSet(false),
    m_equalsHasBeenSet(false)
{
}

Condition::Condition(JsonView jsonValue) : 
    m_afterHasBeenSet(false),
    m_beforeHasBeenSet(false),
    m_equalsHasBeenSet(false)
{
  *this = jsonValue;
}

Condition& Condition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("after"))
  {
    m_after = jsonValue.GetDouble("after");

    m_afterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("before"))
  {
    m_before = jsonValue.GetDouble("before");

    m_beforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("equals"))
  {
    m_equals = jsonValue.GetObject("equals");

    m_equalsHasBeenSet = true;
  }

  return *this;
}

JsonValue Condition::Jsonize() const
{
  JsonValue payload;

  if(m_afterHasBeenSet)
  {
   payload.WithDouble("after", m_after.SecondsWithMSPrecision());
  }

  if(m_beforeHasBeenSet)
  {
   payload.WithDouble("before", m_before.SecondsWithMSPrecision());
  }

  if(m_equalsHasBeenSet)
  {
   payload.WithObject("equals", m_equals.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
