/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AttributeCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AttributeCondition::AttributeCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

AttributeCondition& AttributeCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProficiencyLevel"))
  {
    m_proficiencyLevel = jsonValue.GetDouble("ProficiencyLevel");
    m_proficiencyLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Range"))
  {
    m_range = jsonValue.GetObject("Range");
    m_rangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MatchCriteria"))
  {
    m_matchCriteria = jsonValue.GetObject("MatchCriteria");
    m_matchCriteriaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComparisonOperator"))
  {
    m_comparisonOperator = jsonValue.GetString("ComparisonOperator");
    m_comparisonOperatorHasBeenSet = true;
  }
  return *this;
}

JsonValue AttributeCondition::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_proficiencyLevelHasBeenSet)
  {
   payload.WithDouble("ProficiencyLevel", m_proficiencyLevel);

  }

  if(m_rangeHasBeenSet)
  {
   payload.WithObject("Range", m_range.Jsonize());

  }

  if(m_matchCriteriaHasBeenSet)
  {
   payload.WithObject("MatchCriteria", m_matchCriteria.Jsonize());

  }

  if(m_comparisonOperatorHasBeenSet)
  {
   payload.WithString("ComparisonOperator", m_comparisonOperator);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
