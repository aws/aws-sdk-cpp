/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/WebCrawlerConfiguration.h>
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

WebCrawlerConfiguration::WebCrawlerConfiguration() : 
    m_urlsHasBeenSet(false),
    m_crawlDepth(0),
    m_crawlDepthHasBeenSet(false),
    m_maxLinksPerPage(0),
    m_maxLinksPerPageHasBeenSet(false),
    m_maxContentSizePerPageInMegaBytes(0.0),
    m_maxContentSizePerPageInMegaBytesHasBeenSet(false),
    m_maxUrlsPerMinuteCrawlRate(0),
    m_maxUrlsPerMinuteCrawlRateHasBeenSet(false),
    m_urlInclusionPatternsHasBeenSet(false),
    m_urlExclusionPatternsHasBeenSet(false),
    m_proxyConfigurationHasBeenSet(false),
    m_authenticationConfigurationHasBeenSet(false)
{
}

WebCrawlerConfiguration::WebCrawlerConfiguration(JsonView jsonValue) : 
    m_urlsHasBeenSet(false),
    m_crawlDepth(0),
    m_crawlDepthHasBeenSet(false),
    m_maxLinksPerPage(0),
    m_maxLinksPerPageHasBeenSet(false),
    m_maxContentSizePerPageInMegaBytes(0.0),
    m_maxContentSizePerPageInMegaBytesHasBeenSet(false),
    m_maxUrlsPerMinuteCrawlRate(0),
    m_maxUrlsPerMinuteCrawlRateHasBeenSet(false),
    m_urlInclusionPatternsHasBeenSet(false),
    m_urlExclusionPatternsHasBeenSet(false),
    m_proxyConfigurationHasBeenSet(false),
    m_authenticationConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

WebCrawlerConfiguration& WebCrawlerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Urls"))
  {
    m_urls = jsonValue.GetObject("Urls");

    m_urlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrawlDepth"))
  {
    m_crawlDepth = jsonValue.GetInteger("CrawlDepth");

    m_crawlDepthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxLinksPerPage"))
  {
    m_maxLinksPerPage = jsonValue.GetInteger("MaxLinksPerPage");

    m_maxLinksPerPageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxContentSizePerPageInMegaBytes"))
  {
    m_maxContentSizePerPageInMegaBytes = jsonValue.GetDouble("MaxContentSizePerPageInMegaBytes");

    m_maxContentSizePerPageInMegaBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxUrlsPerMinuteCrawlRate"))
  {
    m_maxUrlsPerMinuteCrawlRate = jsonValue.GetInteger("MaxUrlsPerMinuteCrawlRate");

    m_maxUrlsPerMinuteCrawlRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UrlInclusionPatterns"))
  {
    Aws::Utils::Array<JsonView> urlInclusionPatternsJsonList = jsonValue.GetArray("UrlInclusionPatterns");
    for(unsigned urlInclusionPatternsIndex = 0; urlInclusionPatternsIndex < urlInclusionPatternsJsonList.GetLength(); ++urlInclusionPatternsIndex)
    {
      m_urlInclusionPatterns.push_back(urlInclusionPatternsJsonList[urlInclusionPatternsIndex].AsString());
    }
    m_urlInclusionPatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UrlExclusionPatterns"))
  {
    Aws::Utils::Array<JsonView> urlExclusionPatternsJsonList = jsonValue.GetArray("UrlExclusionPatterns");
    for(unsigned urlExclusionPatternsIndex = 0; urlExclusionPatternsIndex < urlExclusionPatternsJsonList.GetLength(); ++urlExclusionPatternsIndex)
    {
      m_urlExclusionPatterns.push_back(urlExclusionPatternsJsonList[urlExclusionPatternsIndex].AsString());
    }
    m_urlExclusionPatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProxyConfiguration"))
  {
    m_proxyConfiguration = jsonValue.GetObject("ProxyConfiguration");

    m_proxyConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationConfiguration"))
  {
    m_authenticationConfiguration = jsonValue.GetObject("AuthenticationConfiguration");

    m_authenticationConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue WebCrawlerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_urlsHasBeenSet)
  {
   payload.WithObject("Urls", m_urls.Jsonize());

  }

  if(m_crawlDepthHasBeenSet)
  {
   payload.WithInteger("CrawlDepth", m_crawlDepth);

  }

  if(m_maxLinksPerPageHasBeenSet)
  {
   payload.WithInteger("MaxLinksPerPage", m_maxLinksPerPage);

  }

  if(m_maxContentSizePerPageInMegaBytesHasBeenSet)
  {
   payload.WithDouble("MaxContentSizePerPageInMegaBytes", m_maxContentSizePerPageInMegaBytes);

  }

  if(m_maxUrlsPerMinuteCrawlRateHasBeenSet)
  {
   payload.WithInteger("MaxUrlsPerMinuteCrawlRate", m_maxUrlsPerMinuteCrawlRate);

  }

  if(m_urlInclusionPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> urlInclusionPatternsJsonList(m_urlInclusionPatterns.size());
   for(unsigned urlInclusionPatternsIndex = 0; urlInclusionPatternsIndex < urlInclusionPatternsJsonList.GetLength(); ++urlInclusionPatternsIndex)
   {
     urlInclusionPatternsJsonList[urlInclusionPatternsIndex].AsString(m_urlInclusionPatterns[urlInclusionPatternsIndex]);
   }
   payload.WithArray("UrlInclusionPatterns", std::move(urlInclusionPatternsJsonList));

  }

  if(m_urlExclusionPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> urlExclusionPatternsJsonList(m_urlExclusionPatterns.size());
   for(unsigned urlExclusionPatternsIndex = 0; urlExclusionPatternsIndex < urlExclusionPatternsJsonList.GetLength(); ++urlExclusionPatternsIndex)
   {
     urlExclusionPatternsJsonList[urlExclusionPatternsIndex].AsString(m_urlExclusionPatterns[urlExclusionPatternsIndex]);
   }
   payload.WithArray("UrlExclusionPatterns", std::move(urlExclusionPatternsJsonList));

  }

  if(m_proxyConfigurationHasBeenSet)
  {
   payload.WithObject("ProxyConfiguration", m_proxyConfiguration.Jsonize());

  }

  if(m_authenticationConfigurationHasBeenSet)
  {
   payload.WithObject("AuthenticationConfiguration", m_authenticationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
