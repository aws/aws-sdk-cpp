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
enum class IpamRpkiStatus { NOT_SET, valid, invalid, unknown };

namespace IpamRpkiStatusMapper {
AWS_EC2_API IpamRpkiStatus GetIpamRpkiStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamRpkiStatus(IpamRpkiStatus value);
}  // namespace IpamRpkiStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
