/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/ListFleetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFleetsResult::ListFleetsResult()
{
}

ListFleetsResult::ListFleetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFleetsResult& ListFleetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FleetSummaryList"))
  {
    Array<JsonView> fleetSummaryListJsonList = jsonValue.GetArray("FleetSummaryList");
    for(unsigned fleetSummaryListIndex = 0; fleetSummaryListIndex < fleetSummaryListJsonList.GetLength(); ++fleetSummaryListIndex)
    {
      m_fleetSummaryList.push_back(fleetSummaryListJsonList[fleetSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
