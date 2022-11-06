/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetInsightEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInsightEventsResult::GetInsightEventsResult()
{
}

GetInsightEventsResult::GetInsightEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInsightEventsResult& GetInsightEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InsightEvents"))
  {
    Aws::Utils::Array<JsonView> insightEventsJsonList = jsonValue.GetArray("InsightEvents");
    for(unsigned insightEventsIndex = 0; insightEventsIndex < insightEventsJsonList.GetLength(); ++insightEventsIndex)
    {
      m_insightEvents.push_back(insightEventsJsonList[insightEventsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
