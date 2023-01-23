/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListRoutingProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRoutingProfilesResult::ListRoutingProfilesResult()
{
}

ListRoutingProfilesResult::ListRoutingProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRoutingProfilesResult& ListRoutingProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RoutingProfileSummaryList"))
  {
    Aws::Utils::Array<JsonView> routingProfileSummaryListJsonList = jsonValue.GetArray("RoutingProfileSummaryList");
    for(unsigned routingProfileSummaryListIndex = 0; routingProfileSummaryListIndex < routingProfileSummaryListJsonList.GetLength(); ++routingProfileSummaryListIndex)
    {
      m_routingProfileSummaryList.push_back(routingProfileSummaryListJsonList[routingProfileSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
