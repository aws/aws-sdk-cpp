/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> crawlersJsonList = jsonValue.GetArray("Crawlers");
    for(unsigned crawlersIndex = 0; crawlersIndex < crawlersJsonList.GetLength(); ++crawlersIndex)
    {
      m_crawlers.push_back(crawlersJsonList[crawlersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("CrawlersNotFound"))
  {
    Array<JsonView> crawlersNotFoundJsonList = jsonValue.GetArray("CrawlersNotFound");
    for(unsigned crawlersNotFoundIndex = 0; crawlersNotFoundIndex < crawlersNotFoundJsonList.GetLength(); ++crawlersNotFoundIndex)
    {
      m_crawlersNotFound.push_back(crawlersNotFoundJsonList[crawlersNotFoundIndex].AsString());
    }
  }



  return *this;
}
