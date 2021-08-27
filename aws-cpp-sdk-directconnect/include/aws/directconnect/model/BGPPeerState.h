/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{
  enum class BGPPeerState
  {
    NOT_SET,
    verifying,
    pending,
    available,
    deleting,
    deleted
  };

namespace BGPPeerStateMapper
{
AWS_DIRECTCONNECT_API BGPPeerState GetBGPPeerStateForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForBGPPeerState(BGPPeerState value);
} // namespace BGPPeerStateMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
