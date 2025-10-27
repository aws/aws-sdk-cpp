/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>

namespace Aws {
namespace DirectConnect {
namespace Model {
enum class DirectConnectGatewayAttachmentState { NOT_SET, attaching, attached, detaching, detached };

namespace DirectConnectGatewayAttachmentStateMapper {
AWS_DIRECTCONNECT_API DirectConnectGatewayAttachmentState GetDirectConnectGatewayAttachmentStateForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForDirectConnectGatewayAttachmentState(DirectConnectGatewayAttachmentState value);
}  // namespace DirectConnectGatewayAttachmentStateMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
