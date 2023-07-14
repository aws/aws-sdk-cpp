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
  enum class DirectConnectGatewayAssociationProposalState
  {
    NOT_SET,
    requested,
    accepted,
    deleted
  };

namespace DirectConnectGatewayAssociationProposalStateMapper
{
AWS_DIRECTCONNECT_API DirectConnectGatewayAssociationProposalState GetDirectConnectGatewayAssociationProposalStateForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForDirectConnectGatewayAssociationProposalState(DirectConnectGatewayAssociationProposalState value);
} // namespace DirectConnectGatewayAssociationProposalStateMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
