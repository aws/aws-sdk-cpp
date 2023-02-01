/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetCrawlersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetCrawlersResult::BatchGetCrawlersResult()
{
}

BatchGetCrawlersResult::BatchGetCrawlersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetCrawlersResult& BatchGetCrawlersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Crawlers"))
  {
    Aws::Utils::Array<JsonView> crawlersJsonList = jsonValue.GetArray("Crawlers");
    for(unsigned crawlersIndex = 0; crawlersIndex < crawlersJsonList.GetLength(); ++crawlersIndex)
    {
      m_crawlers.push_back(crawlersJsonList[crawlersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("CrawlersNotFound"))
  {
    Aws::Utils::Array<JsonView> crawlersNotFoundJsonList = jsonValue.GetArray("CrawlersNotFound");
    for(unsigned crawlersNotFoundIndex = 0; crawlersNotFoundIndex < crawlersNotFoundJsonList.GetLength(); ++crawlersNotFoundIndex)
    {
      m_crawlersNotFound.push_back(crawlersNotFoundJsonList[crawlersNotFoundIndex].AsString());
    }
  }



  return *this;
}
