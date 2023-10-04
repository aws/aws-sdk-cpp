/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscriptionSummary.h>
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

SubscriptionSummary::SubscriptionSummary() : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_retainPermissions(false),
    m_retainPermissionsHasBeenSet(false),
    m_status(SubscriptionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_subscribedListingHasBeenSet(false),
    m_subscribedPrincipalHasBeenSet(false),
    m_subscriptionRequestIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
}

SubscriptionSummary::SubscriptionSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_retainPermissions(false),
    m_retainPermissionsHasBeenSet(false),
    m_status(SubscriptionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_subscribedListingHasBeenSet(false),
    m_subscribedPrincipalHasBeenSet(false),
    m_subscriptionRequestIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
  *this = jsonValue;
}

SubscriptionSummary& SubscriptionSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retainPermissions"))
  {
    m_retainPermissions = jsonValue.GetBool("retainPermissions");

    m_retainPermissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SubscriptionStatusMapper::GetSubscriptionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscribedListing"))
  {
    m_subscribedListing = jsonValue.GetObject("subscribedListing");

    m_subscribedListingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscribedPrincipal"))
  {
    m_subscribedPrincipal = jsonValue.GetObject("subscribedPrincipal");

    m_subscribedPrincipalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriptionRequestId"))
  {
    m_subscriptionRequestId = jsonValue.GetString("subscriptionRequestId");

    m_subscriptionRequestIdHasBeenSet = true;
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

JsonValue SubscriptionSummary::Jsonize() const
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

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("domainId", m_domainId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_retainPermissionsHasBeenSet)
  {
   payload.WithBool("retainPermissions", m_retainPermissions);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SubscriptionStatusMapper::GetNameForSubscriptionStatus(m_status));
  }

  if(m_subscribedListingHasBeenSet)
  {
   payload.WithObject("subscribedListing", m_subscribedListing.Jsonize());

  }

  if(m_subscribedPrincipalHasBeenSet)
  {
   payload.WithObject("subscribedPrincipal", m_subscribedPrincipal.Jsonize());

  }

  if(m_subscriptionRequestIdHasBeenSet)
  {
   payload.WithString("subscriptionRequestId", m_subscriptionRequestId);

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
