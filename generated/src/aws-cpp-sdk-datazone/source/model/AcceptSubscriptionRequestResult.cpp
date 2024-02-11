/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AcceptSubscriptionRequestResult.h>
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

AcceptSubscriptionRequestResult::AcceptSubscriptionRequestResult() : 
    m_status(SubscriptionRequestStatus::NOT_SET)
{
}

AcceptSubscriptionRequestResult::AcceptSubscriptionRequestResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SubscriptionRequestStatus::NOT_SET)
{
  *this = result;
}

AcceptSubscriptionRequestResult& AcceptSubscriptionRequestResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("decisionComment"))
  {
    m_decisionComment = jsonValue.GetString("decisionComment");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("requestReason"))
  {
    m_requestReason = jsonValue.GetString("requestReason");

  }

  if(jsonValue.ValueExists("reviewerId"))
  {
    m_reviewerId = jsonValue.GetString("reviewerId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SubscriptionRequestStatusMapper::GetSubscriptionRequestStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("subscribedListings"))
  {
    Aws::Utils::Array<JsonView> subscribedListingsJsonList = jsonValue.GetArray("subscribedListings");
    for(unsigned subscribedListingsIndex = 0; subscribedListingsIndex < subscribedListingsJsonList.GetLength(); ++subscribedListingsIndex)
    {
      m_subscribedListings.push_back(subscribedListingsJsonList[subscribedListingsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("subscribedPrincipals"))
  {
    Aws::Utils::Array<JsonView> subscribedPrincipalsJsonList = jsonValue.GetArray("subscribedPrincipals");
    for(unsigned subscribedPrincipalsIndex = 0; subscribedPrincipalsIndex < subscribedPrincipalsJsonList.GetLength(); ++subscribedPrincipalsIndex)
    {
      m_subscribedPrincipals.push_back(subscribedPrincipalsJsonList[subscribedPrincipalsIndex].AsObject());
    }
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
