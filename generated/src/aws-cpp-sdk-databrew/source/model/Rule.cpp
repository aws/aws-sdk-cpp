/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/Rule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

Rule::Rule() : 
    m_nameHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_checkExpressionHasBeenSet(false),
    m_substitutionMapHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_columnSelectorsHasBeenSet(false)
{
}

Rule::Rule(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false),
    m_checkExpressionHasBeenSet(false),
    m_substitutionMapHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_columnSelectorsHasBeenSet(false)
{
  *this = jsonValue;
}

Rule& Rule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Disabled"))
  {
    m_disabled = jsonValue.GetBool("Disabled");

    m_disabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CheckExpression"))
  {
    m_checkExpression = jsonValue.GetString("CheckExpression");

    m_checkExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubstitutionMap"))
  {
    Aws::Map<Aws::String, JsonView> substitutionMapJsonMap = jsonValue.GetObject("SubstitutionMap").GetAllObjects();
    for(auto& substitutionMapItem : substitutionMapJsonMap)
    {
      m_substitutionMap[substitutionMapItem.first] = substitutionMapItem.second.AsString();
    }
    m_substitutionMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Threshold"))
  {
    m_threshold = jsonValue.GetObject("Threshold");

    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnSelectors"))
  {
    Aws::Utils::Array<JsonView> columnSelectorsJsonList = jsonValue.GetArray("ColumnSelectors");
    for(unsigned columnSelectorsIndex = 0; columnSelectorsIndex < columnSelectorsJsonList.GetLength(); ++columnSelectorsIndex)
    {
      m_columnSelectors.push_back(columnSelectorsJsonList[columnSelectorsIndex].AsObject());
    }
    m_columnSelectorsHasBeenSet = true;
  }

  return *this;
}

JsonValue Rule::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

  }

  if(m_checkExpressionHasBeenSet)
  {
   payload.WithString("CheckExpression", m_checkExpression);

  }

  if(m_substitutionMapHasBeenSet)
  {
   JsonValue substitutionMapJsonMap;
   for(auto& substitutionMapItem : m_substitutionMap)
   {
     substitutionMapJsonMap.WithString(substitutionMapItem.first, substitutionMapItem.second);
   }
   payload.WithObject("SubstitutionMap", std::move(substitutionMapJsonMap));

  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithObject("Threshold", m_threshold.Jsonize());

  }

  if(m_columnSelectorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnSelectorsJsonList(m_columnSelectors.size());
   for(unsigned columnSelectorsIndex = 0; columnSelectorsIndex < columnSelectorsJsonList.GetLength(); ++columnSelectorsIndex)
   {
     columnSelectorsJsonList[columnSelectorsIndex].AsObject(m_columnSelectors[columnSelectorsIndex].Jsonize());
   }
   payload.WithArray("ColumnSelectors", std::move(columnSelectorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
