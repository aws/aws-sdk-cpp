/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetSubscriptionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSubscriptionResult::GetSubscriptionResult() : 
    m_retainPermissions(false),
    m_status(SubscriptionStatus::NOT_SET)
{
}

GetSubscriptionResult::GetSubscriptionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_retainPermissions(false),
    m_status(SubscriptionStatus::NOT_SET)
{
  *this = result;
}

GetSubscriptionResult& GetSubscriptionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("retainPermissions"))
  {
    m_retainPermissions = jsonValue.GetBool("retainPermissions");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SubscriptionStatusMapper::GetSubscriptionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("subscribedListing"))
  {
    m_subscribedListing = jsonValue.GetObject("subscribedListing");

  }

  if(jsonValue.ValueExists("subscribedPrincipal"))
  {
    m_subscribedPrincipal = jsonValue.GetObject("subscribedPrincipal");

  }

  if(jsonValue.ValueExists("subscriptionRequestId"))
  {
    m_subscriptionRequestId = jsonValue.GetString("subscriptionRequestId");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

  }

  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
