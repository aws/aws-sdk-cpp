/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscriptionGrantSummary.h>
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

SubscriptionGrantSummary::SubscriptionGrantSummary() : 
    m_assetsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_grantedEntityHasBeenSet(false),
    m_idHasBeenSet(false),
    m_status(SubscriptionGrantOverallStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_subscriptionIdHasBeenSet(false),
    m_subscriptionTargetIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
}

SubscriptionGrantSummary::SubscriptionGrantSummary(JsonView jsonValue) : 
    m_assetsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_grantedEntityHasBeenSet(false),
    m_idHasBeenSet(false),
    m_status(SubscriptionGrantOverallStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_subscriptionIdHasBeenSet(false),
    m_subscriptionTargetIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_updatedByHasBeenSet(false)
{
  *this = jsonValue;
}

SubscriptionGrantSummary& SubscriptionGrantSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assets"))
  {
    Aws::Utils::Array<JsonView> assetsJsonList = jsonValue.GetArray("assets");
    for(unsigned assetsIndex = 0; assetsIndex < assetsJsonList.GetLength(); ++assetsIndex)
    {
      m_assets.push_back(assetsJsonList[assetsIndex].AsObject());
    }
    m_assetsHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("grantedEntity"))
  {
    m_grantedEntity = jsonValue.GetObject("grantedEntity");

    m_grantedEntityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SubscriptionGrantOverallStatusMapper::GetSubscriptionGrantOverallStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriptionId"))
  {
    m_subscriptionId = jsonValue.GetString("subscriptionId");

    m_subscriptionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscriptionTargetId"))
  {
    m_subscriptionTargetId = jsonValue.GetString("subscriptionTargetId");

    m_subscriptionTargetIdHasBeenSet = true;
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

JsonValue SubscriptionGrantSummary::Jsonize() const
{
  JsonValue payload;

  if(m_assetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetsJsonList(m_assets.size());
   for(unsigned assetsIndex = 0; assetsIndex < assetsJsonList.GetLength(); ++assetsIndex)
   {
     assetsJsonList[assetsIndex].AsObject(m_assets[assetsIndex].Jsonize());
   }
   payload.WithArray("assets", std::move(assetsJsonList));

  }

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

  if(m_grantedEntityHasBeenSet)
  {
   payload.WithObject("grantedEntity", m_grantedEntity.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SubscriptionGrantOverallStatusMapper::GetNameForSubscriptionGrantOverallStatus(m_status));
  }

  if(m_subscriptionIdHasBeenSet)
  {
   payload.WithString("subscriptionId", m_subscriptionId);

  }

  if(m_subscriptionTargetIdHasBeenSet)
  {
   payload.WithString("subscriptionTargetId", m_subscriptionTargetId);

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
