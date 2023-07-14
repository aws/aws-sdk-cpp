/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class TransitGatewayConnectPeerAssociationState
  {
    NOT_SET,
    PENDING,
    AVAILABLE,
    DELETING,
    DELETED
  };

namespace TransitGatewayConnectPeerAssociationStateMapper
{
AWS_NETWORKMANAGER_API TransitGatewayConnectPeerAssociationState GetTransitGatewayConnectPeerAssociationStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForTransitGatewayConnectPeerAssociationState(TransitGatewayConnectPeerAssociationState value);
} // namespace TransitGatewayConnectPeerAssociationStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
