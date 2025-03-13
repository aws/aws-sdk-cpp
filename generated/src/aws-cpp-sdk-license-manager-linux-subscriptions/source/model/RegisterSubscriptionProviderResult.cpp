/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/RegisterSubscriptionProviderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LicenseManagerLinuxSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterSubscriptionProviderResult::RegisterSubscriptionProviderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RegisterSubscriptionProviderResult& RegisterSubscriptionProviderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SubscriptionProviderArn"))
  {
    m_subscriptionProviderArn = jsonValue.GetString("SubscriptionProviderArn");
    m_subscriptionProviderArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscriptionProviderSource"))
  {
    m_subscriptionProviderSource = SubscriptionProviderSourceMapper::GetSubscriptionProviderSourceForName(jsonValue.GetString("SubscriptionProviderSource"));
    m_subscriptionProviderSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscriptionProviderStatus"))
  {
    m_subscriptionProviderStatus = SubscriptionProviderStatusMapper::GetSubscriptionProviderStatusForName(jsonValue.GetString("SubscriptionProviderStatus"));
    m_subscriptionProviderStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
