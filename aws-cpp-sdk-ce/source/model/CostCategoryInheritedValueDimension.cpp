/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategoryInheritedValueDimension.h>
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

CostCategoryInheritedValueDimension::CostCategoryInheritedValueDimension() : 
    m_dimensionName(CostCategoryInheritedValueDimensionName::NOT_SET),
    m_dimensionNameHasBeenSet(false),
    m_dimensionKeyHasBeenSet(false)
{
}

CostCategoryInheritedValueDimension::CostCategoryInheritedValueDimension(JsonView jsonValue) : 
    m_dimensionName(CostCategoryInheritedValueDimensionName::NOT_SET),
    m_dimensionNameHasBeenSet(false),
    m_dimensionKeyHasBeenSet(false)
{
  *this = jsonValue;
}

CostCategoryInheritedValueDimension& CostCategoryInheritedValueDimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionName"))
  {
    m_dimensionName = CostCategoryInheritedValueDimensionNameMapper::GetCostCategoryInheritedValueDimensionNameForName(jsonValue.GetString("DimensionName"));

    m_dimensionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DimensionKey"))
  {
    m_dimensionKey = jsonValue.GetString("DimensionKey");

    m_dimensionKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue CostCategoryInheritedValueDimension::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionNameHasBeenSet)
  {
   payload.WithString("DimensionName", CostCategoryInheritedValueDimensionNameMapper::GetNameForCostCategoryInheritedValueDimensionName(m_dimensionName));
  }

  if(m_dimensionKeyHasBeenSet)
  {
   payload.WithString("DimensionKey", m_dimensionKey);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
