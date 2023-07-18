/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsIntentFilter.h>
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

AnalyticsIntentFilter::AnalyticsIntentFilter() : 
    m_name(AnalyticsIntentFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_operator(AnalyticsFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

AnalyticsIntentFilter::AnalyticsIntentFilter(JsonView jsonValue) : 
    m_name(AnalyticsIntentFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_operator(AnalyticsFilterOperator::NOT_SET),
    m_operatorHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsIntentFilter& AnalyticsIntentFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = AnalyticsIntentFilterNameMapper::GetAnalyticsIntentFilterNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operator"))
  {
    m_operator = AnalyticsFilterOperatorMapper::GetAnalyticsFilterOperatorForName(jsonValue.GetString("operator"));

    m_operatorHasBeenSet = true;
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

  return *this;
}

JsonValue AnalyticsIntentFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", AnalyticsIntentFilterNameMapper::GetNameForAnalyticsIntentFilterName(m_name));
  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", AnalyticsFilterOperatorMapper::GetNameForAnalyticsFilterOperator(m_operator));
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

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
