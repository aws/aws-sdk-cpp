/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CustomFilterConfiguration.h>
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

CustomFilterConfiguration::CustomFilterConfiguration() : 
    m_matchOperator(CategoryFilterMatchOperator::NOT_SET),
    m_matchOperatorHasBeenSet(false),
    m_categoryValueHasBeenSet(false),
    m_selectAllOptions(CategoryFilterSelectAllOptions::NOT_SET),
    m_selectAllOptionsHasBeenSet(false),
    m_parameterNameHasBeenSet(false),
    m_nullOption(FilterNullOption::NOT_SET),
    m_nullOptionHasBeenSet(false)
{
}

CustomFilterConfiguration::CustomFilterConfiguration(JsonView jsonValue) : 
    m_matchOperator(CategoryFilterMatchOperator::NOT_SET),
    m_matchOperatorHasBeenSet(false),
    m_categoryValueHasBeenSet(false),
    m_selectAllOptions(CategoryFilterSelectAllOptions::NOT_SET),
    m_selectAllOptionsHasBeenSet(false),
    m_parameterNameHasBeenSet(false),
    m_nullOption(FilterNullOption::NOT_SET),
    m_nullOptionHasBeenSet(false)
{
  *this = jsonValue;
}

CustomFilterConfiguration& CustomFilterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MatchOperator"))
  {
    m_matchOperator = CategoryFilterMatchOperatorMapper::GetCategoryFilterMatchOperatorForName(jsonValue.GetString("MatchOperator"));

    m_matchOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoryValue"))
  {
    m_categoryValue = jsonValue.GetString("CategoryValue");

    m_categoryValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectAllOptions"))
  {
    m_selectAllOptions = CategoryFilterSelectAllOptionsMapper::GetCategoryFilterSelectAllOptionsForName(jsonValue.GetString("SelectAllOptions"));

    m_selectAllOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterName"))
  {
    m_parameterName = jsonValue.GetString("ParameterName");

    m_parameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NullOption"))
  {
    m_nullOption = FilterNullOptionMapper::GetFilterNullOptionForName(jsonValue.GetString("NullOption"));

    m_nullOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomFilterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_matchOperatorHasBeenSet)
  {
   payload.WithString("MatchOperator", CategoryFilterMatchOperatorMapper::GetNameForCategoryFilterMatchOperator(m_matchOperator));
  }

  if(m_categoryValueHasBeenSet)
  {
   payload.WithString("CategoryValue", m_categoryValue);

  }

  if(m_selectAllOptionsHasBeenSet)
  {
   payload.WithString("SelectAllOptions", CategoryFilterSelectAllOptionsMapper::GetNameForCategoryFilterSelectAllOptions(m_selectAllOptions));
  }

  if(m_parameterNameHasBeenSet)
  {
   payload.WithString("ParameterName", m_parameterName);

  }

  if(m_nullOptionHasBeenSet)
  {
   payload.WithString("NullOption", FilterNullOptionMapper::GetNameForFilterNullOption(m_nullOption));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
