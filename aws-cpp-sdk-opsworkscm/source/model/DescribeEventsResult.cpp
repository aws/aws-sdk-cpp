/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/DescribeEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpsWorksCM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEventsResult::DescribeEventsResult()
{
}

DescribeEventsResult::DescribeEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEventsResult& DescribeEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ServerEvents"))
  {
    Aws::Utils::Array<JsonView> serverEventsJsonList = jsonValue.GetArray("ServerEvents");
    for(unsigned serverEventsIndex = 0; serverEventsIndex < serverEventsJsonList.GetLength(); ++serverEventsIndex)
    {
      m_serverEvents.push_back(serverEventsJsonList[serverEventsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
