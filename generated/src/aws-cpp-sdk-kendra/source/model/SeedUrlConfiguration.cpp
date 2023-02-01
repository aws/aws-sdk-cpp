/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SeedUrlConfiguration.h>
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

SeedUrlConfiguration::SeedUrlConfiguration() : 
    m_seedUrlsHasBeenSet(false),
    m_webCrawlerMode(WebCrawlerMode::NOT_SET),
    m_webCrawlerModeHasBeenSet(false)
{
}

SeedUrlConfiguration::SeedUrlConfiguration(JsonView jsonValue) : 
    m_seedUrlsHasBeenSet(false),
    m_webCrawlerMode(WebCrawlerMode::NOT_SET),
    m_webCrawlerModeHasBeenSet(false)
{
  *this = jsonValue;
}

SeedUrlConfiguration& SeedUrlConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SeedUrls"))
  {
    Aws::Utils::Array<JsonView> seedUrlsJsonList = jsonValue.GetArray("SeedUrls");
    for(unsigned seedUrlsIndex = 0; seedUrlsIndex < seedUrlsJsonList.GetLength(); ++seedUrlsIndex)
    {
      m_seedUrls.push_back(seedUrlsJsonList[seedUrlsIndex].AsString());
    }
    m_seedUrlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebCrawlerMode"))
  {
    m_webCrawlerMode = WebCrawlerModeMapper::GetWebCrawlerModeForName(jsonValue.GetString("WebCrawlerMode"));

    m_webCrawlerModeHasBeenSet = true;
  }

  return *this;
}

JsonValue SeedUrlConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_seedUrlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> seedUrlsJsonList(m_seedUrls.size());
   for(unsigned seedUrlsIndex = 0; seedUrlsIndex < seedUrlsJsonList.GetLength(); ++seedUrlsIndex)
   {
     seedUrlsJsonList[seedUrlsIndex].AsString(m_seedUrls[seedUrlsIndex]);
   }
   payload.WithArray("SeedUrls", std::move(seedUrlsJsonList));

  }

  if(m_webCrawlerModeHasBeenSet)
  {
   payload.WithString("WebCrawlerMode", WebCrawlerModeMapper::GetNameForWebCrawlerMode(m_webCrawlerMode));
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
