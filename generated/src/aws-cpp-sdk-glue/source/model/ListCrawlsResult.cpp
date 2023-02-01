/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ListCrawlsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCrawlsResult::ListCrawlsResult()
{
}

ListCrawlsResult::ListCrawlsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCrawlsResult& ListCrawlsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Crawls"))
  {
    Aws::Utils::Array<JsonView> crawlsJsonList = jsonValue.GetArray("Crawls");
    for(unsigned crawlsIndex = 0; crawlsIndex < crawlsJsonList.GetLength(); ++crawlsIndex)
    {
      m_crawls.push_back(crawlsJsonList[crawlsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
