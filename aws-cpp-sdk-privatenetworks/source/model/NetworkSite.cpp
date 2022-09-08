/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/NetworkSite.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

NetworkSite::NetworkSite() : 
    m_availabilityZoneHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_currentPlanHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_networkArnHasBeenSet(false),
    m_networkSiteArnHasBeenSet(false),
    m_networkSiteNameHasBeenSet(false),
    m_pendingPlanHasBeenSet(false),
    m_status(NetworkSiteStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
}

NetworkSite::NetworkSite(JsonView jsonValue) : 
    m_availabilityZoneHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_currentPlanHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_networkArnHasBeenSet(false),
    m_networkSiteArnHasBeenSet(false),
    m_networkSiteNameHasBeenSet(false),
    m_pendingPlanHasBeenSet(false),
    m_status(NetworkSiteStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkSite& NetworkSite::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");

    m_availabilityZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentPlan"))
  {
    m_currentPlan = jsonValue.GetObject("currentPlan");

    m_currentPlanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkArn"))
  {
    m_networkArn = jsonValue.GetString("networkArn");

    m_networkArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkSiteArn"))
  {
    m_networkSiteArn = jsonValue.GetString("networkSiteArn");

    m_networkSiteArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkSiteName"))
  {
    m_networkSiteName = jsonValue.GetString("networkSiteName");

    m_networkSiteNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingPlan"))
  {
    m_pendingPlan = jsonValue.GetObject("pendingPlan");

    m_pendingPlanHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = NetworkSiteStatusMapper::GetNetworkSiteStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkSite::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("availabilityZoneId", m_availabilityZoneId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_currentPlanHasBeenSet)
  {
   payload.WithObject("currentPlan", m_currentPlan.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_networkArnHasBeenSet)
  {
   payload.WithString("networkArn", m_networkArn);

  }

  if(m_networkSiteArnHasBeenSet)
  {
   payload.WithString("networkSiteArn", m_networkSiteArn);

  }

  if(m_networkSiteNameHasBeenSet)
  {
   payload.WithString("networkSiteName", m_networkSiteName);

  }

  if(m_pendingPlanHasBeenSet)
  {
   payload.WithObject("pendingPlan", m_pendingPlan.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", NetworkSiteStatusMapper::GetNameForNetworkSiteStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
