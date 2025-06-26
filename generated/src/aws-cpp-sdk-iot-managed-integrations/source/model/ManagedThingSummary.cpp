/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ManagedThingSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

ManagedThingSummary::ManagedThingSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ManagedThingSummary& ManagedThingSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdvertisedProductId"))
  {
    m_advertisedProductId = jsonValue.GetString("AdvertisedProductId");
    m_advertisedProductIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Brand"))
  {
    m_brand = jsonValue.GetString("Brand");
    m_brandHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Classification"))
  {
    m_classification = jsonValue.GetString("Classification");
    m_classificationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectorDeviceId"))
  {
    m_connectorDeviceId = jsonValue.GetString("ConnectorDeviceId");
    m_connectorDeviceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectorDestinationId"))
  {
    m_connectorDestinationId = jsonValue.GetString("ConnectorDestinationId");
    m_connectorDestinationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Model"))
  {
    m_model = jsonValue.GetString("Model");
    m_modelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");
    m_ownerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CredentialLockerId"))
  {
    m_credentialLockerId = jsonValue.GetString("CredentialLockerId");
    m_credentialLockerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ParentControllerId"))
  {
    m_parentControllerId = jsonValue.GetString("ParentControllerId");
    m_parentControllerIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisioningStatus"))
  {
    m_provisioningStatus = ProvisioningStatusMapper::GetProvisioningStatusForName(jsonValue.GetString("ProvisioningStatus"));
    m_provisioningStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Role"))
  {
    m_role = RoleMapper::GetRoleForName(jsonValue.GetString("Role"));
    m_roleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SerialNumber"))
  {
    m_serialNumber = jsonValue.GetString("SerialNumber");
    m_serialNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ActivatedAt"))
  {
    m_activatedAt = jsonValue.GetDouble("ActivatedAt");
    m_activatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedThingSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_advertisedProductIdHasBeenSet)
  {
   payload.WithString("AdvertisedProductId", m_advertisedProductId);

  }

  if(m_brandHasBeenSet)
  {
   payload.WithString("Brand", m_brand);

  }

  if(m_classificationHasBeenSet)
  {
   payload.WithString("Classification", m_classification);

  }

  if(m_connectorDeviceIdHasBeenSet)
  {
   payload.WithString("ConnectorDeviceId", m_connectorDeviceId);

  }

  if(m_connectorDestinationIdHasBeenSet)
  {
   payload.WithString("ConnectorDestinationId", m_connectorDestinationId);

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("Model", m_model);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_credentialLockerIdHasBeenSet)
  {
   payload.WithString("CredentialLockerId", m_credentialLockerId);

  }

  if(m_parentControllerIdHasBeenSet)
  {
   payload.WithString("ParentControllerId", m_parentControllerId);

  }

  if(m_provisioningStatusHasBeenSet)
  {
   payload.WithString("ProvisioningStatus", ProvisioningStatusMapper::GetNameForProvisioningStatus(m_provisioningStatus));
  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", RoleMapper::GetNameForRole(m_role));
  }

  if(m_serialNumberHasBeenSet)
  {
   payload.WithString("SerialNumber", m_serialNumber);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_activatedAtHasBeenSet)
  {
   payload.WithDouble("ActivatedAt", m_activatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
