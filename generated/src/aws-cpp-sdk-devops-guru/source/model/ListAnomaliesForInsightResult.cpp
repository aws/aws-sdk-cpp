/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ListAnomaliesForInsightResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnomaliesForInsightResult::ListAnomaliesForInsightResult()
{
}

ListAnomaliesForInsightResult::ListAnomaliesForInsightResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAnomaliesForInsightResult& ListAnomaliesForInsightResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProactiveAnomalies"))
  {
    Aws::Utils::Array<JsonView> proactiveAnomaliesJsonList = jsonValue.GetArray("ProactiveAnomalies");
    for(unsigned proactiveAnomaliesIndex = 0; proactiveAnomaliesIndex < proactiveAnomaliesJsonList.GetLength(); ++proactiveAnomaliesIndex)
    {
      m_proactiveAnomalies.push_back(proactiveAnomaliesJsonList[proactiveAnomaliesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ReactiveAnomalies"))
  {
    Aws::Utils::Array<JsonView> reactiveAnomaliesJsonList = jsonValue.GetArray("ReactiveAnomalies");
    for(unsigned reactiveAnomaliesIndex = 0; reactiveAnomaliesIndex < reactiveAnomaliesJsonList.GetLength(); ++reactiveAnomaliesIndex)
    {
      m_reactiveAnomalies.push_back(reactiveAnomaliesJsonList[reactiveAnomaliesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
