/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/ListResponsePlansResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSMIncidents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResponsePlansResult::ListResponsePlansResult()
{
}

ListResponsePlansResult::ListResponsePlansResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResponsePlansResult& ListResponsePlansResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("responsePlanSummaries"))
  {
    Aws::Utils::Array<JsonView> responsePlanSummariesJsonList = jsonValue.GetArray("responsePlanSummaries");
    for(unsigned responsePlanSummariesIndex = 0; responsePlanSummariesIndex < responsePlanSummariesJsonList.GetLength(); ++responsePlanSummariesIndex)
    {
      m_responsePlanSummaries.push_back(responsePlanSummariesJsonList[responsePlanSummariesIndex].AsObject());
    }
  }



  return *this;
}
