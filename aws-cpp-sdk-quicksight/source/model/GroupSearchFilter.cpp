/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GroupSearchFilter.h>
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

GroupSearchFilter::GroupSearchFilter() : 
    m_operator(GroupFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_name(GroupFilterAttribute::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

GroupSearchFilter::GroupSearchFilter(JsonView jsonValue) : 
    m_operator(GroupFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_name(GroupFilterAttribute::NOT_SET),
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

GroupSearchFilter& GroupSearchFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = GroupFilterOperatorMapper::GetGroupFilterOperatorForName(jsonValue.GetString("Operator"));

    m_operatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = GroupFilterAttributeMapper::GetGroupFilterAttributeForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupSearchFilter::Jsonize() const
{
  JsonValue payload;

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", GroupFilterOperatorMapper::GetNameForGroupFilterOperator(m_operator));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", GroupFilterAttributeMapper::GetNameForGroupFilterAttribute(m_name));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
