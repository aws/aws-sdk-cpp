/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/DescribeNotificationsForBudgetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Budgets::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNotificationsForBudgetResult::DescribeNotificationsForBudgetResult()
{
}

DescribeNotificationsForBudgetResult::DescribeNotificationsForBudgetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeNotificationsForBudgetResult& DescribeNotificationsForBudgetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Notifications"))
  {
    Aws::Utils::Array<JsonView> notificationsJsonList = jsonValue.GetArray("Notifications");
    for(unsigned notificationsIndex = 0; notificationsIndex < notificationsJsonList.GetLength(); ++notificationsIndex)
    {
      m_notifications.push_back(notificationsJsonList[notificationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
