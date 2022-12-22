/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/ListMetricAttributionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Personalize::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMetricAttributionsResult::ListMetricAttributionsResult()
{
}

ListMetricAttributionsResult::ListMetricAttributionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMetricAttributionsResult& ListMetricAttributionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("metricAttributions"))
  {
    Aws::Utils::Array<JsonView> metricAttributionsJsonList = jsonValue.GetArray("metricAttributions");
    for(unsigned metricAttributionsIndex = 0; metricAttributionsIndex < metricAttributionsJsonList.GetLength(); ++metricAttributionsIndex)
    {
      m_metricAttributions.push_back(metricAttributionsJsonList[metricAttributionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
