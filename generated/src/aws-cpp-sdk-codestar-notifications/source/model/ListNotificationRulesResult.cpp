/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/model/ListNotificationRulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeStarNotifications::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNotificationRulesResult::ListNotificationRulesResult()
{
}

ListNotificationRulesResult::ListNotificationRulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNotificationRulesResult& ListNotificationRulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("NotificationRules"))
  {
    Aws::Utils::Array<JsonView> notificationRulesJsonList = jsonValue.GetArray("NotificationRules");
    for(unsigned notificationRulesIndex = 0; notificationRulesIndex < notificationRulesJsonList.GetLength(); ++notificationRulesIndex)
    {
      m_notificationRules.push_back(notificationRulesJsonList[notificationRulesIndex].AsObject());
    }
  }



  return *this;
}
