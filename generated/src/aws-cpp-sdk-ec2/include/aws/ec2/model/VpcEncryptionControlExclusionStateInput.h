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
enum class VpcEncryptionControlExclusionStateInput { NOT_SET, enable, disable };

namespace VpcEncryptionControlExclusionStateInputMapper {
AWS_EC2_API VpcEncryptionControlExclusionStateInput GetVpcEncryptionControlExclusionStateInputForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForVpcEncryptionControlExclusionStateInput(VpcEncryptionControlExclusionStateInput value);
}  // namespace VpcEncryptionControlExclusionStateInputMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
