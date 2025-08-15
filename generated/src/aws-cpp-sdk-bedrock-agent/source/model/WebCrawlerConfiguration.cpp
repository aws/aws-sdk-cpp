/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/WebCrawlerConfiguration.h>
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

WebCrawlerConfiguration::WebCrawlerConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

WebCrawlerConfiguration& WebCrawlerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("crawlerLimits"))
  {
    m_crawlerLimits = jsonValue.GetObject("crawlerLimits");
    m_crawlerLimitsHasBeenSet = true;
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
  if(jsonValue.ValueExists("scope"))
  {
    m_scope = WebScopeTypeMapper::GetWebScopeTypeForName(jsonValue.GetString("scope"));
    m_scopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userAgent"))
  {
    m_userAgent = jsonValue.GetString("userAgent");
    m_userAgentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userAgentHeader"))
  {
    m_userAgentHeader = jsonValue.GetString("userAgentHeader");
    m_userAgentHeaderHasBeenSet = true;
  }
  return *this;
}

JsonValue WebCrawlerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_crawlerLimitsHasBeenSet)
  {
   payload.WithObject("crawlerLimits", m_crawlerLimits.Jsonize());

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

  if(m_scopeHasBeenSet)
  {
   payload.WithString("scope", WebScopeTypeMapper::GetNameForWebScopeType(m_scope));
  }

  if(m_userAgentHasBeenSet)
  {
   payload.WithString("userAgent", m_userAgent);

  }

  if(m_userAgentHeaderHasBeenSet)
  {
   payload.WithString("userAgentHeader", m_userAgentHeader);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
