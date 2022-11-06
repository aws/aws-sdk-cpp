/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DescribeNotificationSubscriptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNotificationSubscriptionsResult::DescribeNotificationSubscriptionsResult()
{
}

DescribeNotificationSubscriptionsResult::DescribeNotificationSubscriptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeNotificationSubscriptionsResult& DescribeNotificationSubscriptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Subscriptions"))
  {
    Aws::Utils::Array<JsonView> subscriptionsJsonList = jsonValue.GetArray("Subscriptions");
    for(unsigned subscriptionsIndex = 0; subscriptionsIndex < subscriptionsJsonList.GetLength(); ++subscriptionsIndex)
    {
      m_subscriptions.push_back(subscriptionsJsonList[subscriptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
