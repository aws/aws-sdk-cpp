/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConfluenceSpaceConfiguration.h>
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

ConfluenceSpaceConfiguration::ConfluenceSpaceConfiguration() : 
    m_crawlPersonalSpaces(false),
    m_crawlPersonalSpacesHasBeenSet(false),
    m_crawlArchivedSpaces(false),
    m_crawlArchivedSpacesHasBeenSet(false),
    m_includeSpacesHasBeenSet(false),
    m_excludeSpacesHasBeenSet(false),
    m_spaceFieldMappingsHasBeenSet(false)
{
}

ConfluenceSpaceConfiguration::ConfluenceSpaceConfiguration(JsonView jsonValue) : 
    m_crawlPersonalSpaces(false),
    m_crawlPersonalSpacesHasBeenSet(false),
    m_crawlArchivedSpaces(false),
    m_crawlArchivedSpacesHasBeenSet(false),
    m_includeSpacesHasBeenSet(false),
    m_excludeSpacesHasBeenSet(false),
    m_spaceFieldMappingsHasBeenSet(false)
{
  *this = jsonValue;
}

ConfluenceSpaceConfiguration& ConfluenceSpaceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CrawlPersonalSpaces"))
  {
    m_crawlPersonalSpaces = jsonValue.GetBool("CrawlPersonalSpaces");

    m_crawlPersonalSpacesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlArchivedSpaces"))
  {
    m_crawlArchivedSpaces = jsonValue.GetBool("CrawlArchivedSpaces");

    m_crawlArchivedSpacesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeSpaces"))
  {
    Aws::Utils::Array<JsonView> includeSpacesJsonList = jsonValue.GetArray("IncludeSpaces");
    for(unsigned includeSpacesIndex = 0; includeSpacesIndex < includeSpacesJsonList.GetLength(); ++includeSpacesIndex)
    {
      m_includeSpaces.push_back(includeSpacesJsonList[includeSpacesIndex].AsString());
    }
    m_includeSpacesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludeSpaces"))
  {
    Aws::Utils::Array<JsonView> excludeSpacesJsonList = jsonValue.GetArray("ExcludeSpaces");
    for(unsigned excludeSpacesIndex = 0; excludeSpacesIndex < excludeSpacesJsonList.GetLength(); ++excludeSpacesIndex)
    {
      m_excludeSpaces.push_back(excludeSpacesJsonList[excludeSpacesIndex].AsString());
    }
    m_excludeSpacesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpaceFieldMappings"))
  {
    Aws::Utils::Array<JsonView> spaceFieldMappingsJsonList = jsonValue.GetArray("SpaceFieldMappings");
    for(unsigned spaceFieldMappingsIndex = 0; spaceFieldMappingsIndex < spaceFieldMappingsJsonList.GetLength(); ++spaceFieldMappingsIndex)
    {
      m_spaceFieldMappings.push_back(spaceFieldMappingsJsonList[spaceFieldMappingsIndex].AsObject());
    }
    m_spaceFieldMappingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfluenceSpaceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_crawlPersonalSpacesHasBeenSet)
  {
   payload.WithBool("CrawlPersonalSpaces", m_crawlPersonalSpaces);

  }

  if(m_crawlArchivedSpacesHasBeenSet)
  {
   payload.WithBool("CrawlArchivedSpaces", m_crawlArchivedSpaces);

  }

  if(m_includeSpacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeSpacesJsonList(m_includeSpaces.size());
   for(unsigned includeSpacesIndex = 0; includeSpacesIndex < includeSpacesJsonList.GetLength(); ++includeSpacesIndex)
   {
     includeSpacesJsonList[includeSpacesIndex].AsString(m_includeSpaces[includeSpacesIndex]);
   }
   payload.WithArray("IncludeSpaces", std::move(includeSpacesJsonList));

  }

  if(m_excludeSpacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeSpacesJsonList(m_excludeSpaces.size());
   for(unsigned excludeSpacesIndex = 0; excludeSpacesIndex < excludeSpacesJsonList.GetLength(); ++excludeSpacesIndex)
   {
     excludeSpacesJsonList[excludeSpacesIndex].AsString(m_excludeSpaces[excludeSpacesIndex]);
   }
   payload.WithArray("ExcludeSpaces", std::move(excludeSpacesJsonList));

  }

  if(m_spaceFieldMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> spaceFieldMappingsJsonList(m_spaceFieldMappings.size());
   for(unsigned spaceFieldMappingsIndex = 0; spaceFieldMappingsIndex < spaceFieldMappingsJsonList.GetLength(); ++spaceFieldMappingsIndex)
   {
     spaceFieldMappingsJsonList[spaceFieldMappingsIndex].AsObject(m_spaceFieldMappings[spaceFieldMappingsIndex].Jsonize());
   }
   payload.WithArray("SpaceFieldMappings", std::move(spaceFieldMappingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
