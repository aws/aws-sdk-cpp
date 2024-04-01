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

BudgetActionToRemove::BudgetActionToRemove() : 
    m_thresholdPercentage(0.0),
    m_thresholdPercentageHasBeenSet(false),
    m_type(BudgetActionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

BudgetActionToRemove::BudgetActionToRemove(JsonView jsonValue) : 
    m_thresholdPercentage(0.0),
    m_thresholdPercentageHasBeenSet(false),
    m_type(BudgetActionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

BudgetActionToRemove& BudgetActionToRemove::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thresholdPercentage"))
  {
    m_thresholdPercentage = jsonValue.GetDouble("thresholdPercentage");

    m_thresholdPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = BudgetActionTypeMapper::GetBudgetActionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue BudgetActionToRemove::Jsonize() const
{
  JsonValue payload;

  if(m_thresholdPercentageHasBeenSet)
  {
   payload.WithDouble("thresholdPercentage", m_thresholdPercentage);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", BudgetActionTypeMapper::GetNameForBudgetActionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
