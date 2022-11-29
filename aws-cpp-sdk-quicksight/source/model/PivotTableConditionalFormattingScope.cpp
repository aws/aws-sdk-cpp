/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableConditionalFormattingScope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

PivotTableConditionalFormattingScope::PivotTableConditionalFormattingScope() : 
    m_role(PivotTableConditionalFormattingScopeRole::NOT_SET),
    m_roleHasBeenSet(false)
{
}

PivotTableConditionalFormattingScope::PivotTableConditionalFormattingScope(JsonView jsonValue) : 
    m_role(PivotTableConditionalFormattingScopeRole::NOT_SET),
    m_roleHasBeenSet(false)
{
  *this = jsonValue;
}

PivotTableConditionalFormattingScope& PivotTableConditionalFormattingScope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Role"))
  {
    m_role = PivotTableConditionalFormattingScopeRoleMapper::GetPivotTableConditionalFormattingScopeRoleForName(jsonValue.GetString("Role"));

    m_roleHasBeenSet = true;
  }

  return *this;
}

JsonValue PivotTableConditionalFormattingScope::Jsonize() const
{
  JsonValue payload;

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", PivotTableConditionalFormattingScopeRoleMapper::GetNameForPivotTableConditionalFormattingScopeRole(m_role));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
