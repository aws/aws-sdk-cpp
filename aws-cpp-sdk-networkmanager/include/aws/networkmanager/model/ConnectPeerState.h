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
  enum class ConnectPeerState
  {
    NOT_SET,
    CREATING,
    FAILED,
    AVAILABLE,
    DELETING
  };

namespace ConnectPeerStateMapper
{
AWS_NETWORKMANAGER_API ConnectPeerState GetConnectPeerStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForConnectPeerState(ConnectPeerState value);
} // namespace ConnectPeerStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
