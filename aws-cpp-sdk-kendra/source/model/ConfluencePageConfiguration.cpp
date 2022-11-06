/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConfluencePageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ConfluencePageConfiguration::ConfluencePageConfiguration() : 
    m_pageFieldMappingsHasBeenSet(false)
{
}

ConfluencePageConfiguration::ConfluencePageConfiguration(JsonView jsonValue) : 
    m_pageFieldMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

ConfluencePageConfiguration& ConfluencePageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PageFieldMappings"))
  {
    Aws::Utils::Array<JsonView> pageFieldMappingsJsonList = jsonValue.GetArray("PageFieldMappings");
    for(unsigned pageFieldMappingsIndex = 0; pageFieldMappingsIndex < pageFieldMappingsJsonList.GetLength(); ++pageFieldMappingsIndex)
    {
      m_pageFieldMappings.push_back(pageFieldMappingsJsonList[pageFieldMappingsIndex].AsObject());
    }
    m_pageFieldMappingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfluencePageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_pageFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pageFieldMappingsJsonList(m_pageFieldMappings.size());
   for(unsigned pageFieldMappingsIndex = 0; pageFieldMappingsIndex < pageFieldMappingsJsonList.GetLength(); ++pageFieldMappingsIndex)
   {
     pageFieldMappingsJsonList[pageFieldMappingsIndex].AsObject(m_pageFieldMappings[pageFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("PageFieldMappings", std::move(pageFieldMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
