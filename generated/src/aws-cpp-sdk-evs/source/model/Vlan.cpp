/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/Vlan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EVS
{
namespace Model
{

Vlan::Vlan(JsonView jsonValue)
{
  *this = jsonValue;
}

Vlan& Vlan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vlanId"))
  {
    m_vlanId = jsonValue.GetInteger("vlanId");
    m_vlanIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cidr"))
  {
    m_cidr = jsonValue.GetString("cidr");
    m_cidrHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("functionName"))
  {
    m_functionName = jsonValue.GetString("functionName");
    m_functionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subnetId"))
  {
    m_subnetId = jsonValue.GetString("subnetId");
    m_subnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vlanState"))
  {
    m_vlanState = VlanStateMapper::GetVlanStateForName(jsonValue.GetString("vlanState"));
    m_vlanStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stateDetails"))
  {
    m_stateDetails = jsonValue.GetString("stateDetails");
    m_stateDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eipAssociations"))
  {
    Aws::Utils::Array<JsonView> eipAssociationsJsonList = jsonValue.GetArray("eipAssociations");
    for(unsigned eipAssociationsIndex = 0; eipAssociationsIndex < eipAssociationsJsonList.GetLength(); ++eipAssociationsIndex)
    {
      m_eipAssociations.push_back(eipAssociationsJsonList[eipAssociationsIndex].AsObject());
    }
    m_eipAssociationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isPublic"))
  {
    m_isPublic = jsonValue.GetBool("isPublic");
    m_isPublicHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkAclId"))
  {
    m_networkAclId = jsonValue.GetString("networkAclId");
    m_networkAclIdHasBeenSet = true;
  }
  return *this;
}

JsonValue Vlan::Jsonize() const
{
  JsonValue payload;

  if(m_vlanIdHasBeenSet)
  {
   payload.WithInteger("vlanId", m_vlanId);

  }

  if(m_cidrHasBeenSet)
  {
   payload.WithString("cidr", m_cidr);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_functionNameHasBeenSet)
  {
   payload.WithString("functionName", m_functionName);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("subnetId", m_subnetId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if(m_vlanStateHasBeenSet)
  {
   payload.WithString("vlanState", VlanStateMapper::GetNameForVlanState(m_vlanState));
  }

  if(m_stateDetailsHasBeenSet)
  {
   payload.WithString("stateDetails", m_stateDetails);

  }

  if(m_eipAssociationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eipAssociationsJsonList(m_eipAssociations.size());
   for(unsigned eipAssociationsIndex = 0; eipAssociationsIndex < eipAssociationsJsonList.GetLength(); ++eipAssociationsIndex)
   {
     eipAssociationsJsonList[eipAssociationsIndex].AsObject(m_eipAssociations[eipAssociationsIndex].Jsonize());
   }
   payload.WithArray("eipAssociations", std::move(eipAssociationsJsonList));

  }

  if(m_isPublicHasBeenSet)
  {
   payload.WithBool("isPublic", m_isPublic);

  }

  if(m_networkAclIdHasBeenSet)
  {
   payload.WithString("networkAclId", m_networkAclId);

  }

  return payload;
}

} // namespace Model
} // namespace EVS
} // namespace Aws
