/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetCrawlerMetricsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCrawlerMetricsResult::GetCrawlerMetricsResult()
{
}

GetCrawlerMetricsResult::GetCrawlerMetricsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCrawlerMetricsResult& GetCrawlerMetricsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CrawlerMetricsList"))
  {
    Aws::Utils::Array<JsonView> crawlerMetricsListJsonList = jsonValue.GetArray("CrawlerMetricsList");
    for(unsigned crawlerMetricsListIndex = 0; crawlerMetricsListIndex < crawlerMetricsListJsonList.GetLength(); ++crawlerMetricsListIndex)
    {
      m_crawlerMetricsList.push_back(crawlerMetricsListJsonList[crawlerMetricsListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
