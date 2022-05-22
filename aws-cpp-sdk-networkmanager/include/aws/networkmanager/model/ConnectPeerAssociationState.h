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
  enum class ConnectPeerAssociationState
  {
    NOT_SET,
    PENDING,
    AVAILABLE,
    DELETING,
    DELETED
  };

namespace ConnectPeerAssociationStateMapper
{
AWS_NETWORKMANAGER_API ConnectPeerAssociationState GetConnectPeerAssociationStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForConnectPeerAssociationState(ConnectPeerAssociationState value);
} // namespace ConnectPeerAssociationStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
