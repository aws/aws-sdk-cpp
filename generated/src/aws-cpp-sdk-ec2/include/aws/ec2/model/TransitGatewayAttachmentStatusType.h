/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

namespace Aws {
namespace EC2 {
namespace Model {
enum class TransitGatewayAttachmentStatusType { NOT_SET, pending_acceptance, pending, rejected, available, deleting, deleted };

namespace TransitGatewayAttachmentStatusTypeMapper {
AWS_EC2_API TransitGatewayAttachmentStatusType GetTransitGatewayAttachmentStatusTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTransitGatewayAttachmentStatusType(TransitGatewayAttachmentStatusType value);
}  // namespace TransitGatewayAttachmentStatusTypeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
