/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/GetRegisteredSubscriptionProviderResult.h>
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

GetRegisteredSubscriptionProviderResult::GetRegisteredSubscriptionProviderResult() : 
    m_subscriptionProviderSource(SubscriptionProviderSource::NOT_SET),
    m_subscriptionProviderStatus(SubscriptionProviderStatus::NOT_SET)
{
}

GetRegisteredSubscriptionProviderResult::GetRegisteredSubscriptionProviderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetRegisteredSubscriptionProviderResult()
{
  *this = result;
}

GetRegisteredSubscriptionProviderResult& GetRegisteredSubscriptionProviderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LastSuccessfulDataRetrievalTime"))
  {
    m_lastSuccessfulDataRetrievalTime = jsonValue.GetString("LastSuccessfulDataRetrievalTime");

  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

  }

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

  if(jsonValue.ValueExists("SubscriptionProviderStatusMessage"))
  {
    m_subscriptionProviderStatusMessage = jsonValue.GetString("SubscriptionProviderStatusMessage");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
