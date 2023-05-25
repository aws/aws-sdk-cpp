/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategoryProcessingStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

CostCategoryProcessingStatus::CostCategoryProcessingStatus() : 
    m_component(CostCategoryStatusComponent::NOT_SET),
    m_componentHasBeenSet(false),
    m_status(CostCategoryStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

CostCategoryProcessingStatus::CostCategoryProcessingStatus(JsonView jsonValue) : 
    m_component(CostCategoryStatusComponent::NOT_SET),
    m_componentHasBeenSet(false),
    m_status(CostCategoryStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

CostCategoryProcessingStatus& CostCategoryProcessingStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Component"))
  {
    m_component = CostCategoryStatusComponentMapper::GetCostCategoryStatusComponentForName(jsonValue.GetString("Component"));

    m_componentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CostCategoryStatusMapper::GetCostCategoryStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue CostCategoryProcessingStatus::Jsonize() const
{
  JsonValue payload;

  if(m_componentHasBeenSet)
  {
   payload.WithString("Component", CostCategoryStatusComponentMapper::GetNameForCostCategoryStatusComponent(m_component));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CostCategoryStatusMapper::GetNameForCostCategoryStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
