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
enum class AmdSevSnp { NOT_SET, enabled, disabled };

namespace AmdSevSnpMapper {
AWS_EC2_API AmdSevSnp GetAmdSevSnpForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForAmdSevSnp(AmdSevSnp value);
}  // namespace AmdSevSnpMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
