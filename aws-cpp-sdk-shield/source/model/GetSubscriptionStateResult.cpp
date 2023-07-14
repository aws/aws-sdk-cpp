/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/GetSubscriptionStateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSubscriptionStateResult::GetSubscriptionStateResult() : 
    m_subscriptionState(SubscriptionState::NOT_SET)
{
}

GetSubscriptionStateResult::GetSubscriptionStateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_subscriptionState(SubscriptionState::NOT_SET)
{
  *this = result;
}

GetSubscriptionStateResult& GetSubscriptionStateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SubscriptionState"))
  {
    m_subscriptionState = SubscriptionStateMapper::GetSubscriptionStateForName(jsonValue.GetString("SubscriptionState"));

  }



  return *this;
}
