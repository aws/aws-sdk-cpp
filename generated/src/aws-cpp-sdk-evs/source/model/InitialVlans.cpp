/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evs/model/InitialVlans.h>
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

InitialVlans::InitialVlans(JsonView jsonValue)
{
  *this = jsonValue;
}

InitialVlans& InitialVlans::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vmkManagement"))
  {
    m_vmkManagement = jsonValue.GetObject("vmkManagement");
    m_vmkManagementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vmManagement"))
  {
    m_vmManagement = jsonValue.GetObject("vmManagement");
    m_vmManagementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vMotion"))
  {
    m_vMotion = jsonValue.GetObject("vMotion");
    m_vMotionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vSan"))
  {
    m_vSan = jsonValue.GetObject("vSan");
    m_vSanHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vTep"))
  {
    m_vTep = jsonValue.GetObject("vTep");
    m_vTepHasBeenSet = true;
  }
  if(jsonValue.ValueExists("edgeVTep"))
  {
    m_edgeVTep = jsonValue.GetObject("edgeVTep");
    m_edgeVTepHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nsxUplink"))
  {
    m_nsxUplink = jsonValue.GetObject("nsxUplink");
    m_nsxUplinkHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hcx"))
  {
    m_hcx = jsonValue.GetObject("hcx");
    m_hcxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expansionVlan1"))
  {
    m_expansionVlan1 = jsonValue.GetObject("expansionVlan1");
    m_expansionVlan1HasBeenSet = true;
  }
  if(jsonValue.ValueExists("expansionVlan2"))
  {
    m_expansionVlan2 = jsonValue.GetObject("expansionVlan2");
    m_expansionVlan2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("isHcxPublic"))
  {
    m_isHcxPublic = jsonValue.GetBool("isHcxPublic");
    m_isHcxPublicHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hcxNetworkAclId"))
  {
    m_hcxNetworkAclId = jsonValue.GetString("hcxNetworkAclId");
    m_hcxNetworkAclIdHasBeenSet = true;
  }
  return *this;
}

JsonValue InitialVlans::Jsonize() const
{
  JsonValue payload;

  if(m_vmkManagementHasBeenSet)
  {
   payload.WithObject("vmkManagement", m_vmkManagement.Jsonize());

  }

  if(m_vmManagementHasBeenSet)
  {
   payload.WithObject("vmManagement", m_vmManagement.Jsonize());

  }

  if(m_vMotionHasBeenSet)
  {
   payload.WithObject("vMotion", m_vMotion.Jsonize());

  }

  if(m_vSanHasBeenSet)
  {
   payload.WithObject("vSan", m_vSan.Jsonize());

  }

  if(m_vTepHasBeenSet)
  {
   payload.WithObject("vTep", m_vTep.Jsonize());

  }

  if(m_edgeVTepHasBeenSet)
  {
   payload.WithObject("edgeVTep", m_edgeVTep.Jsonize());

  }

  if(m_nsxUplinkHasBeenSet)
  {
   payload.WithObject("nsxUplink", m_nsxUplink.Jsonize());

  }

  if(m_hcxHasBeenSet)
  {
   payload.WithObject("hcx", m_hcx.Jsonize());

  }

  if(m_expansionVlan1HasBeenSet)
  {
   payload.WithObject("expansionVlan1", m_expansionVlan1.Jsonize());

  }

  if(m_expansionVlan2HasBeenSet)
  {
   payload.WithObject("expansionVlan2", m_expansionVlan2.Jsonize());

  }

  if(m_isHcxPublicHasBeenSet)
  {
   payload.WithBool("isHcxPublic", m_isHcxPublic);

  }

  if(m_hcxNetworkAclIdHasBeenSet)
  {
   payload.WithString("hcxNetworkAclId", m_hcxNetworkAclId);

  }

  return payload;
}

} // namespace Model
} // namespace EVS
} // namespace Aws
