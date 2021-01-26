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
  enum class DirectConnectGatewayState
  {
    NOT_SET,
    pending,
    available,
    deleting,
    deleted
  };

namespace DirectConnectGatewayStateMapper
{
AWS_DIRECTCONNECT_API DirectConnectGatewayState GetDirectConnectGatewayStateForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForDirectConnectGatewayState(DirectConnectGatewayState value);
} // namespace DirectConnectGatewayStateMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
