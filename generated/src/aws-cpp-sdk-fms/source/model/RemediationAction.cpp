﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/RemediationAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

RemediationAction::RemediationAction(JsonView jsonValue)
{
  *this = jsonValue;
}

RemediationAction& RemediationAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EC2CreateRouteAction"))
  {
    m_eC2CreateRouteAction = jsonValue.GetObject("EC2CreateRouteAction");
    m_eC2CreateRouteActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EC2ReplaceRouteAction"))
  {
    m_eC2ReplaceRouteAction = jsonValue.GetObject("EC2ReplaceRouteAction");
    m_eC2ReplaceRouteActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EC2DeleteRouteAction"))
  {
    m_eC2DeleteRouteAction = jsonValue.GetObject("EC2DeleteRouteAction");
    m_eC2DeleteRouteActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EC2CopyRouteTableAction"))
  {
    m_eC2CopyRouteTableAction = jsonValue.GetObject("EC2CopyRouteTableAction");
    m_eC2CopyRouteTableActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EC2ReplaceRouteTableAssociationAction"))
  {
    m_eC2ReplaceRouteTableAssociationAction = jsonValue.GetObject("EC2ReplaceRouteTableAssociationAction");
    m_eC2ReplaceRouteTableAssociationActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EC2AssociateRouteTableAction"))
  {
    m_eC2AssociateRouteTableAction = jsonValue.GetObject("EC2AssociateRouteTableAction");
    m_eC2AssociateRouteTableActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EC2CreateRouteTableAction"))
  {
    m_eC2CreateRouteTableAction = jsonValue.GetObject("EC2CreateRouteTableAction");
    m_eC2CreateRouteTableActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FMSPolicyUpdateFirewallCreationConfigAction"))
  {
    m_fMSPolicyUpdateFirewallCreationConfigAction = jsonValue.GetObject("FMSPolicyUpdateFirewallCreationConfigAction");
    m_fMSPolicyUpdateFirewallCreationConfigActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateNetworkAclAction"))
  {
    m_createNetworkAclAction = jsonValue.GetObject("CreateNetworkAclAction");
    m_createNetworkAclActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplaceNetworkAclAssociationAction"))
  {
    m_replaceNetworkAclAssociationAction = jsonValue.GetObject("ReplaceNetworkAclAssociationAction");
    m_replaceNetworkAclAssociationActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateNetworkAclEntriesAction"))
  {
    m_createNetworkAclEntriesAction = jsonValue.GetObject("CreateNetworkAclEntriesAction");
    m_createNetworkAclEntriesActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeleteNetworkAclEntriesAction"))
  {
    m_deleteNetworkAclEntriesAction = jsonValue.GetObject("DeleteNetworkAclEntriesAction");
    m_deleteNetworkAclEntriesActionHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationAction::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_eC2CreateRouteActionHasBeenSet)
  {
   payload.WithObject("EC2CreateRouteAction", m_eC2CreateRouteAction.Jsonize());

  }

  if(m_eC2ReplaceRouteActionHasBeenSet)
  {
   payload.WithObject("EC2ReplaceRouteAction", m_eC2ReplaceRouteAction.Jsonize());

  }

  if(m_eC2DeleteRouteActionHasBeenSet)
  {
   payload.WithObject("EC2DeleteRouteAction", m_eC2DeleteRouteAction.Jsonize());

  }

  if(m_eC2CopyRouteTableActionHasBeenSet)
  {
   payload.WithObject("EC2CopyRouteTableAction", m_eC2CopyRouteTableAction.Jsonize());

  }

  if(m_eC2ReplaceRouteTableAssociationActionHasBeenSet)
  {
   payload.WithObject("EC2ReplaceRouteTableAssociationAction", m_eC2ReplaceRouteTableAssociationAction.Jsonize());

  }

  if(m_eC2AssociateRouteTableActionHasBeenSet)
  {
   payload.WithObject("EC2AssociateRouteTableAction", m_eC2AssociateRouteTableAction.Jsonize());

  }

  if(m_eC2CreateRouteTableActionHasBeenSet)
  {
   payload.WithObject("EC2CreateRouteTableAction", m_eC2CreateRouteTableAction.Jsonize());

  }

  if(m_fMSPolicyUpdateFirewallCreationConfigActionHasBeenSet)
  {
   payload.WithObject("FMSPolicyUpdateFirewallCreationConfigAction", m_fMSPolicyUpdateFirewallCreationConfigAction.Jsonize());

  }

  if(m_createNetworkAclActionHasBeenSet)
  {
   payload.WithObject("CreateNetworkAclAction", m_createNetworkAclAction.Jsonize());

  }

  if(m_replaceNetworkAclAssociationActionHasBeenSet)
  {
   payload.WithObject("ReplaceNetworkAclAssociationAction", m_replaceNetworkAclAssociationAction.Jsonize());

  }

  if(m_createNetworkAclEntriesActionHasBeenSet)
  {
   payload.WithObject("CreateNetworkAclEntriesAction", m_createNetworkAclEntriesAction.Jsonize());

  }

  if(m_deleteNetworkAclEntriesActionHasBeenSet)
  {
   payload.WithObject("DeleteNetworkAclEntriesAction", m_deleteNetworkAclEntriesAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
