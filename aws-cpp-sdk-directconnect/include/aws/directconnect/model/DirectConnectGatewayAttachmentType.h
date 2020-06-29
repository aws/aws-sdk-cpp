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
  enum class DirectConnectGatewayAttachmentType
  {
    NOT_SET,
    TransitVirtualInterface,
    PrivateVirtualInterface
  };

namespace DirectConnectGatewayAttachmentTypeMapper
{
AWS_DIRECTCONNECT_API DirectConnectGatewayAttachmentType GetDirectConnectGatewayAttachmentTypeForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForDirectConnectGatewayAttachmentType(DirectConnectGatewayAttachmentType value);
} // namespace DirectConnectGatewayAttachmentTypeMapper
} // namespace Model
} // namespace DirectConnect
} // namespace Aws
