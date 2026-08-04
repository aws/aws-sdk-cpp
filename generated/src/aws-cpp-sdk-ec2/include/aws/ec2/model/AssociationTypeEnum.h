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
enum class AssociationTypeEnum { NOT_SET, tag, instance_id };

namespace AssociationTypeEnumMapper {
AWS_EC2_API AssociationTypeEnum GetAssociationTypeEnumForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAssociationTypeEnum(AssociationTypeEnum value);
}  // namespace AssociationTypeEnumMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
