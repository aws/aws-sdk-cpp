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
  enum class VirtualInterfaceState
  {
    NOT_SET,
    confirming,
    verifying,
    pending,
    available,
    down,
    deleting,
    deleted,
    rejected,
    unknown
  };

namespace VirtualInterfaceStateMapper
{
AWS_DIRECTCONNECT_API VirtualInterfaceState GetVirtualInterfaceStateForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForVirtualInterfaceState(VirtualInterfaceState value);
} // namespace VirtualInterfaceStateMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
