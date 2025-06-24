/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ImplementationFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{

ImplementationFilter::ImplementationFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ImplementationFilter& ImplementationFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Types"))
  {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("Types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(typesJsonList[typesIndex].AsString());
    }
    m_typesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Identifiers"))
  {
    Aws::Utils::Array<JsonView> identifiersJsonList = jsonValue.GetArray("Identifiers");
    for(unsigned identifiersIndex = 0; identifiersIndex < identifiersJsonList.GetLength(); ++identifiersIndex)
    {
      m_identifiers.push_back(identifiersJsonList[identifiersIndex].AsString());
    }
    m_identifiersHasBeenSet = true;
  }
  return *this;
}

JsonValue ImplementationFilter::Jsonize() const
{
  JsonValue payload;

  if(m_typesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(m_types[typesIndex]);
   }
   payload.WithArray("Types", std::move(typesJsonList));

  }

  if(m_identifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> identifiersJsonList(m_identifiers.size());
   for(unsigned identifiersIndex = 0; identifiersIndex < identifiersJsonList.GetLength(); ++identifiersIndex)
   {
     identifiersJsonList[identifiersIndex].AsString(m_identifiers[identifiersIndex]);
   }
   payload.WithArray("Identifiers", std::move(identifiersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
