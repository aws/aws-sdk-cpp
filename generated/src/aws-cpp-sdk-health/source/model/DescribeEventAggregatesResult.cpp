/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/DescribeEventAggregatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEventAggregatesResult::DescribeEventAggregatesResult()
{
}

DescribeEventAggregatesResult::DescribeEventAggregatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEventAggregatesResult& DescribeEventAggregatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("eventAggregates"))
  {
    Aws::Utils::Array<JsonView> eventAggregatesJsonList = jsonValue.GetArray("eventAggregates");
    for(unsigned eventAggregatesIndex = 0; eventAggregatesIndex < eventAggregatesJsonList.GetLength(); ++eventAggregatesIndex)
    {
      m_eventAggregates.push_back(eventAggregatesJsonList[eventAggregatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
