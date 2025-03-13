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

AcceptSubscriptionRequestResult::AcceptSubscriptionRequestResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AcceptSubscriptionRequestResult& AcceptSubscriptionRequestResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("decisionComment"))
  {
    m_decisionComment = jsonValue.GetString("decisionComment");
    m_decisionCommentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("existingSubscriptionId"))
  {
    m_existingSubscriptionId = jsonValue.GetString("existingSubscriptionId");
    m_existingSubscriptionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadataForms"))
  {
    Aws::Utils::Array<JsonView> metadataFormsJsonList = jsonValue.GetArray("metadataForms");
    for(unsigned metadataFormsIndex = 0; metadataFormsIndex < metadataFormsJsonList.GetLength(); ++metadataFormsIndex)
    {
      m_metadataForms.push_back(metadataFormsJsonList[metadataFormsIndex].AsObject());
    }
    m_metadataFormsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requestReason"))
  {
    m_requestReason = jsonValue.GetString("requestReason");
    m_requestReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reviewerId"))
  {
    m_reviewerId = jsonValue.GetString("reviewerId");
    m_reviewerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = SubscriptionRequestStatusMapper::GetSubscriptionRequestStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subscribedListings"))
  {
    Aws::Utils::Array<JsonView> subscribedListingsJsonList = jsonValue.GetArray("subscribedListings");
    for(unsigned subscribedListingsIndex = 0; subscribedListingsIndex < subscribedListingsJsonList.GetLength(); ++subscribedListingsIndex)
    {
      m_subscribedListings.push_back(subscribedListingsJsonList[subscribedListingsIndex].AsObject());
    }
    m_subscribedListingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subscribedPrincipals"))
  {
    Aws::Utils::Array<JsonView> subscribedPrincipalsJsonList = jsonValue.GetArray("subscribedPrincipals");
    for(unsigned subscribedPrincipalsIndex = 0; subscribedPrincipalsIndex < subscribedPrincipalsJsonList.GetLength(); ++subscribedPrincipalsIndex)
    {
      m_subscribedPrincipals.push_back(subscribedPrincipalsJsonList[subscribedPrincipalsIndex].AsObject());
    }
    m_subscribedPrincipalsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");
    m_updatedByHasBeenSet = true;
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
