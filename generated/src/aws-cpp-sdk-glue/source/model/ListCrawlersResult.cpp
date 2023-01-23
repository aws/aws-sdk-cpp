/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ListCrawlersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCrawlersResult::ListCrawlersResult()
{
}

ListCrawlersResult::ListCrawlersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCrawlersResult& ListCrawlersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CrawlerNames"))
  {
    Aws::Utils::Array<JsonView> crawlerNamesJsonList = jsonValue.GetArray("CrawlerNames");
    for(unsigned crawlerNamesIndex = 0; crawlerNamesIndex < crawlerNamesJsonList.GetLength(); ++crawlerNamesIndex)
    {
      m_crawlerNames.push_back(crawlerNamesJsonList[crawlerNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
