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
  enum class LinkState
  {
    NOT_SET,
    PENDING,
    AVAILABLE,
    DELETING,
    UPDATING
  };

namespace LinkStateMapper
{
AWS_NETWORKMANAGER_API LinkState GetLinkStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForLinkState(LinkState value);
} // namespace LinkStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
