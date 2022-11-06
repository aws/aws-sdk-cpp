/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListQuickConnectsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListQuickConnectsResult::ListQuickConnectsResult()
{
}

ListQuickConnectsResult::ListQuickConnectsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListQuickConnectsResult& ListQuickConnectsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QuickConnectSummaryList"))
  {
    Aws::Utils::Array<JsonView> quickConnectSummaryListJsonList = jsonValue.GetArray("QuickConnectSummaryList");
    for(unsigned quickConnectSummaryListIndex = 0; quickConnectSummaryListIndex < quickConnectSummaryListJsonList.GetLength(); ++quickConnectSummaryListIndex)
    {
      m_quickConnectSummaryList.push_back(quickConnectSummaryListJsonList[quickConnectSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
