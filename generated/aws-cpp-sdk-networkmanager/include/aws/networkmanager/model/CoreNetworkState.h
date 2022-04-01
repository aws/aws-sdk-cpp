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
  enum class CoreNetworkState
  {
    NOT_SET,
    CREATING,
    UPDATING,
    AVAILABLE,
    DELETING
  };

namespace CoreNetworkStateMapper
{
AWS_NETWORKMANAGER_API CoreNetworkState GetCoreNetworkStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForCoreNetworkState(CoreNetworkState value);
} // namespace CoreNetworkStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
