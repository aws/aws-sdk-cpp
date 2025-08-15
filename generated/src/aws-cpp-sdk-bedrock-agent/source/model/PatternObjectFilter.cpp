/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PatternObjectFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

PatternObjectFilter::PatternObjectFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

PatternObjectFilter& PatternObjectFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("objectType"))
  {
    m_objectType = jsonValue.GetString("objectType");
    m_objectTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inclusionFilters"))
  {
    Aws::Utils::Array<JsonView> inclusionFiltersJsonList = jsonValue.GetArray("inclusionFilters");
    for(unsigned inclusionFiltersIndex = 0; inclusionFiltersIndex < inclusionFiltersJsonList.GetLength(); ++inclusionFiltersIndex)
    {
      m_inclusionFilters.push_back(inclusionFiltersJsonList[inclusionFiltersIndex].AsString());
    }
    m_inclusionFiltersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exclusionFilters"))
  {
    Aws::Utils::Array<JsonView> exclusionFiltersJsonList = jsonValue.GetArray("exclusionFilters");
    for(unsigned exclusionFiltersIndex = 0; exclusionFiltersIndex < exclusionFiltersJsonList.GetLength(); ++exclusionFiltersIndex)
    {
      m_exclusionFilters.push_back(exclusionFiltersJsonList[exclusionFiltersIndex].AsString());
    }
    m_exclusionFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue PatternObjectFilter::Jsonize() const
{
  JsonValue payload;

  if(m_objectTypeHasBeenSet)
  {
   payload.WithString("objectType", m_objectType);

  }

  if(m_inclusionFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inclusionFiltersJsonList(m_inclusionFilters.size());
   for(unsigned inclusionFiltersIndex = 0; inclusionFiltersIndex < inclusionFiltersJsonList.GetLength(); ++inclusionFiltersIndex)
   {
     inclusionFiltersJsonList[inclusionFiltersIndex].AsString(m_inclusionFilters[inclusionFiltersIndex]);
   }
   payload.WithArray("inclusionFilters", std::move(inclusionFiltersJsonList));

  }

  if(m_exclusionFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exclusionFiltersJsonList(m_exclusionFilters.size());
   for(unsigned exclusionFiltersIndex = 0; exclusionFiltersIndex < exclusionFiltersJsonList.GetLength(); ++exclusionFiltersIndex)
   {
     exclusionFiltersJsonList[exclusionFiltersIndex].AsString(m_exclusionFilters[exclusionFiltersIndex]);
   }
   payload.WithArray("exclusionFilters", std::move(exclusionFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
