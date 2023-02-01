/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeMatchmakingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMatchmakingResult::DescribeMatchmakingResult()
{
}

DescribeMatchmakingResult::DescribeMatchmakingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMatchmakingResult& DescribeMatchmakingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TicketList"))
  {
    Aws::Utils::Array<JsonView> ticketListJsonList = jsonValue.GetArray("TicketList");
    for(unsigned ticketListIndex = 0; ticketListIndex < ticketListJsonList.GetLength(); ++ticketListIndex)
    {
      m_ticketList.push_back(ticketListJsonList[ticketListIndex].AsObject());
    }
  }



  return *this;
}
