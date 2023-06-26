/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AggregatedUtterancesFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

AggregatedUtterancesFilter::AggregatedUtterancesFilter() : 
    m_name(AggregatedUtterancesFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operator(AggregatedUtterancesFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
}

AggregatedUtterancesFilter::AggregatedUtterancesFilter(JsonView jsonValue) : 
    m_name(AggregatedUtterancesFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_operator(AggregatedUtterancesFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false)
{
  *this = jsonValue;
}

AggregatedUtterancesFilter& AggregatedUtterancesFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AggregatedUtterancesFilterNameMapper::GetAggregatedUtterancesFilterNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsString());
    }
    m_valuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = AggregatedUtterancesFilterOperatorMapper::GetAggregatedUtterancesFilterOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregatedUtterancesFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AggregatedUtterancesFilterNameMapper::GetNameForAggregatedUtterancesFilterName(m_name));
  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", AggregatedUtterancesFilterOperatorMapper::GetNameForAggregatedUtterancesFilterOperator(m_operator));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
