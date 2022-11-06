/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DescribeSubscriptionFiltersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSubscriptionFiltersResult::DescribeSubscriptionFiltersResult()
{
}

DescribeSubscriptionFiltersResult::DescribeSubscriptionFiltersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSubscriptionFiltersResult& DescribeSubscriptionFiltersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("subscriptionFilters"))
  {
    Aws::Utils::Array<JsonView> subscriptionFiltersJsonList = jsonValue.GetArray("subscriptionFilters");
    for(unsigned subscriptionFiltersIndex = 0; subscriptionFiltersIndex < subscriptionFiltersJsonList.GetLength(); ++subscriptionFiltersIndex)
    {
      m_subscriptionFilters.push_back(subscriptionFiltersJsonList[subscriptionFiltersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
