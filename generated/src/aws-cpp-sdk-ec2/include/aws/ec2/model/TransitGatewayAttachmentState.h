/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class TransitGatewayAttachmentState
  {
    NOT_SET,
    initiating,
    initiatingRequest,
    pendingAcceptance,
    rollingBack,
    pending,
    available,
    modifying,
    deleting,
    deleted,
    failed,
    rejected,
    rejecting,
    failing
  };

namespace TransitGatewayAttachmentStateMapper
{
AWS_EC2_API TransitGatewayAttachmentState GetTransitGatewayAttachmentStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayAttachmentState(TransitGatewayAttachmentState value);
} // namespace TransitGatewayAttachmentStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
