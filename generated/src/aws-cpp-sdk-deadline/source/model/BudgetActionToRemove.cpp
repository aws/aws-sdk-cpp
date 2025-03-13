/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/BudgetActionToRemove.h>
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

BudgetActionToRemove::BudgetActionToRemove(JsonView jsonValue)
{
  *this = jsonValue;
}

BudgetActionToRemove& BudgetActionToRemove::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = BudgetActionTypeMapper::GetBudgetActionTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thresholdPercentage"))
  {
    m_thresholdPercentage = jsonValue.GetDouble("thresholdPercentage");
    m_thresholdPercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue BudgetActionToRemove::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", BudgetActionTypeMapper::GetNameForBudgetActionType(m_type));
  }

  if(m_thresholdPercentageHasBeenSet)
  {
   payload.WithDouble("thresholdPercentage", m_thresholdPercentage);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
