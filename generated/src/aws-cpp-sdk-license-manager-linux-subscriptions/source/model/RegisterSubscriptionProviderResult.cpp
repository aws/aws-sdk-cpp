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

RegisterSubscriptionProviderResult::RegisterSubscriptionProviderResult() : 
    m_subscriptionProviderSource(SubscriptionProviderSource::NOT_SET),
    m_subscriptionProviderStatus(SubscriptionProviderStatus::NOT_SET)
{
}

RegisterSubscriptionProviderResult::RegisterSubscriptionProviderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : RegisterSubscriptionProviderResult()
{
  *this = result;
}

RegisterSubscriptionProviderResult& RegisterSubscriptionProviderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SubscriptionProviderArn"))
  {
    m_subscriptionProviderArn = jsonValue.GetString("SubscriptionProviderArn");

  }

  if(jsonValue.ValueExists("SubscriptionProviderSource"))
  {
    m_subscriptionProviderSource = SubscriptionProviderSourceMapper::GetSubscriptionProviderSourceForName(jsonValue.GetString("SubscriptionProviderSource"));

  }

  if(jsonValue.ValueExists("SubscriptionProviderStatus"))
  {
    m_subscriptionProviderStatus = SubscriptionProviderStatusMapper::GetSubscriptionProviderStatusForName(jsonValue.GetString("SubscriptionProviderStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
