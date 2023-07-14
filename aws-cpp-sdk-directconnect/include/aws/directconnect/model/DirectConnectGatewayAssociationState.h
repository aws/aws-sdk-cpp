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
  enum class DirectConnectGatewayAssociationState
  {
    NOT_SET,
    associating,
    associated,
    disassociating,
    disassociated,
    updating
  };

namespace DirectConnectGatewayAssociationStateMapper
{
AWS_DIRECTCONNECT_API DirectConnectGatewayAssociationState GetDirectConnectGatewayAssociationStateForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForDirectConnectGatewayAssociationState(DirectConnectGatewayAssociationState value);
} // namespace DirectConnectGatewayAssociationStateMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
