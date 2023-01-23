/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ListAnomalousLogGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnomalousLogGroupsResult::ListAnomalousLogGroupsResult()
{
}

ListAnomalousLogGroupsResult::ListAnomalousLogGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAnomalousLogGroupsResult& ListAnomalousLogGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InsightId"))
  {
    m_insightId = jsonValue.GetString("InsightId");

  }

  if(jsonValue.ValueExists("AnomalousLogGroups"))
  {
    Aws::Utils::Array<JsonView> anomalousLogGroupsJsonList = jsonValue.GetArray("AnomalousLogGroups");
    for(unsigned anomalousLogGroupsIndex = 0; anomalousLogGroupsIndex < anomalousLogGroupsJsonList.GetLength(); ++anomalousLogGroupsIndex)
    {
      m_anomalousLogGroups.push_back(anomalousLogGroupsJsonList[anomalousLogGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
