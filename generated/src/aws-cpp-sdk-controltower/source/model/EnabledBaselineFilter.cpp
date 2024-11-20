/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledBaselineFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlTower
{
namespace Model
{

EnabledBaselineFilter::EnabledBaselineFilter() : 
    m_baselineIdentifiersHasBeenSet(false),
    m_parentIdentifiersHasBeenSet(false),
    m_targetIdentifiersHasBeenSet(false)
{
}

EnabledBaselineFilter::EnabledBaselineFilter(JsonView jsonValue)
  : EnabledBaselineFilter()
{
  *this = jsonValue;
}

EnabledBaselineFilter& EnabledBaselineFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("baselineIdentifiers"))
  {
    Aws::Utils::Array<JsonView> baselineIdentifiersJsonList = jsonValue.GetArray("baselineIdentifiers");
    for(unsigned baselineIdentifiersIndex = 0; baselineIdentifiersIndex < baselineIdentifiersJsonList.GetLength(); ++baselineIdentifiersIndex)
    {
      m_baselineIdentifiers.push_back(baselineIdentifiersJsonList[baselineIdentifiersIndex].AsString());
    }
    m_baselineIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parentIdentifiers"))
  {
    Aws::Utils::Array<JsonView> parentIdentifiersJsonList = jsonValue.GetArray("parentIdentifiers");
    for(unsigned parentIdentifiersIndex = 0; parentIdentifiersIndex < parentIdentifiersJsonList.GetLength(); ++parentIdentifiersIndex)
    {
      m_parentIdentifiers.push_back(parentIdentifiersJsonList[parentIdentifiersIndex].AsString());
    }
    m_parentIdentifiersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetIdentifiers"))
  {
    Aws::Utils::Array<JsonView> targetIdentifiersJsonList = jsonValue.GetArray("targetIdentifiers");
    for(unsigned targetIdentifiersIndex = 0; targetIdentifiersIndex < targetIdentifiersJsonList.GetLength(); ++targetIdentifiersIndex)
    {
      m_targetIdentifiers.push_back(targetIdentifiersJsonList[targetIdentifiersIndex].AsString());
    }
    m_targetIdentifiersHasBeenSet = true;
  }

  return *this;
}

JsonValue EnabledBaselineFilter::Jsonize() const
{
  JsonValue payload;

  if(m_baselineIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> baselineIdentifiersJsonList(m_baselineIdentifiers.size());
   for(unsigned baselineIdentifiersIndex = 0; baselineIdentifiersIndex < baselineIdentifiersJsonList.GetLength(); ++baselineIdentifiersIndex)
   {
     baselineIdentifiersJsonList[baselineIdentifiersIndex].AsString(m_baselineIdentifiers[baselineIdentifiersIndex]);
   }
   payload.WithArray("baselineIdentifiers", std::move(baselineIdentifiersJsonList));

  }

  if(m_parentIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parentIdentifiersJsonList(m_parentIdentifiers.size());
   for(unsigned parentIdentifiersIndex = 0; parentIdentifiersIndex < parentIdentifiersJsonList.GetLength(); ++parentIdentifiersIndex)
   {
     parentIdentifiersJsonList[parentIdentifiersIndex].AsString(m_parentIdentifiers[parentIdentifiersIndex]);
   }
   payload.WithArray("parentIdentifiers", std::move(parentIdentifiersJsonList));

  }

  if(m_targetIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetIdentifiersJsonList(m_targetIdentifiers.size());
   for(unsigned targetIdentifiersIndex = 0; targetIdentifiersIndex < targetIdentifiersJsonList.GetLength(); ++targetIdentifiersIndex)
   {
     targetIdentifiersJsonList[targetIdentifiersIndex].AsString(m_targetIdentifiers[targetIdentifiersIndex]);
   }
   payload.WithArray("targetIdentifiers", std::move(targetIdentifiersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
