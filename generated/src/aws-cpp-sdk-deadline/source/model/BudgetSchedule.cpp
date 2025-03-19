/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/BudgetSchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

BudgetSchedule::BudgetSchedule(JsonView jsonValue)
{
  *this = jsonValue;
}

BudgetSchedule& BudgetSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fixed"))
  {
    m_fixed = jsonValue.GetObject("fixed");
    m_fixedHasBeenSet = true;
  }
  return *this;
}

JsonValue BudgetSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_fixedHasBeenSet)
  {
   payload.WithObject("fixed", m_fixed.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
