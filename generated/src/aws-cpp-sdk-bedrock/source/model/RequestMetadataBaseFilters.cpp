/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/RequestMetadataBaseFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

RequestMetadataBaseFilters::RequestMetadataBaseFilters(JsonView jsonValue)
{
  *this = jsonValue;
}

RequestMetadataBaseFilters& RequestMetadataBaseFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("equals"))
  {
    Aws::Map<Aws::String, JsonView> equalsJsonMap = jsonValue.GetObject("equals").GetAllObjects();
    for(auto& equalsItem : equalsJsonMap)
    {
      m_equals[equalsItem.first] = equalsItem.second.AsString();
    }
    m_equalsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("notEquals"))
  {
    Aws::Map<Aws::String, JsonView> notEqualsJsonMap = jsonValue.GetObject("notEquals").GetAllObjects();
    for(auto& notEqualsItem : notEqualsJsonMap)
    {
      m_notEquals[notEqualsItem.first] = notEqualsItem.second.AsString();
    }
    m_notEqualsHasBeenSet = true;
  }
  return *this;
}

JsonValue RequestMetadataBaseFilters::Jsonize() const
{
  JsonValue payload;

  if(m_equalsHasBeenSet)
  {
   JsonValue equalsJsonMap;
   for(auto& equalsItem : m_equals)
   {
     equalsJsonMap.WithString(equalsItem.first, equalsItem.second);
   }
   payload.WithObject("equals", std::move(equalsJsonMap));

  }

  if(m_notEqualsHasBeenSet)
  {
   JsonValue notEqualsJsonMap;
   for(auto& notEqualsItem : m_notEquals)
   {
     notEqualsJsonMap.WithString(notEqualsItem.first, notEqualsItem.second);
   }
   payload.WithObject("notEquals", std::move(notEqualsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
