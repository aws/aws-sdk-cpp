/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscriptionRequestSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SubscriptionRequestSummary::SubscriptionRequestSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

SubscriptionRequestSummary& SubscriptionRequestSummary::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("metadataFormsSummary"))
  {
    Aws::Utils::Array<JsonView> metadataFormsSummaryJsonList = jsonValue.GetArray("metadataFormsSummary");
    for(unsigned metadataFormsSummaryIndex = 0; metadataFormsSummaryIndex < metadataFormsSummaryJsonList.GetLength(); ++metadataFormsSummaryIndex)
    {
      m_metadataFormsSummary.push_back(metadataFormsSummaryJsonList[metadataFormsSummaryIndex].AsObject());
    }
    m_metadataFormsSummaryHasBeenSet = true;
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
  return *this;
}

JsonValue SubscriptionRequestSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_decisionCommentHasBeenSet)
  {
   payload.WithString("decisionComment", m_decisionComment);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_existingSubscriptionIdHasBeenSet)
  {
   payload.WithString("existingSubscriptionId", m_existingSubscriptionId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_metadataFormsSummaryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metadataFormsSummaryJsonList(m_metadataFormsSummary.size());
   for(unsigned metadataFormsSummaryIndex = 0; metadataFormsSummaryIndex < metadataFormsSummaryJsonList.GetLength(); ++metadataFormsSummaryIndex)
   {
     metadataFormsSummaryJsonList[metadataFormsSummaryIndex].AsObject(m_metadataFormsSummary[metadataFormsSummaryIndex].Jsonize());
   }
   payload.WithArray("metadataFormsSummary", std::move(metadataFormsSummaryJsonList));

  }

  if(m_requestReasonHasBeenSet)
  {
   payload.WithString("requestReason", m_requestReason);

  }

  if(m_reviewerIdHasBeenSet)
  {
   payload.WithString("reviewerId", m_reviewerId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SubscriptionRequestStatusMapper::GetNameForSubscriptionRequestStatus(m_status));
  }

  if(m_subscribedListingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscribedListingsJsonList(m_subscribedListings.size());
   for(unsigned subscribedListingsIndex = 0; subscribedListingsIndex < subscribedListingsJsonList.GetLength(); ++subscribedListingsIndex)
   {
     subscribedListingsJsonList[subscribedListingsIndex].AsObject(m_subscribedListings[subscribedListingsIndex].Jsonize());
   }
   payload.WithArray("subscribedListings", std::move(subscribedListingsJsonList));

  }

  if(m_subscribedPrincipalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscribedPrincipalsJsonList(m_subscribedPrincipals.size());
   for(unsigned subscribedPrincipalsIndex = 0; subscribedPrincipalsIndex < subscribedPrincipalsJsonList.GetLength(); ++subscribedPrincipalsIndex)
   {
     subscribedPrincipalsJsonList[subscribedPrincipalsIndex].AsObject(m_subscribedPrincipals[subscribedPrincipalsIndex].Jsonize());
   }
   payload.WithArray("subscribedPrincipals", std::move(subscribedPrincipalsJsonList));

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
