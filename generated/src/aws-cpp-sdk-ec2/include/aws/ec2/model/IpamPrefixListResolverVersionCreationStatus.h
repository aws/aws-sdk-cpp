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
enum class IpamPrefixListResolverVersionCreationStatus { NOT_SET, pending, success, failure };

namespace IpamPrefixListResolverVersionCreationStatusMapper {
AWS_EC2_API IpamPrefixListResolverVersionCreationStatus GetIpamPrefixListResolverVersionCreationStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForIpamPrefixListResolverVersionCreationStatus(IpamPrefixListResolverVersionCreationStatus value);
}  // namespace IpamPrefixListResolverVersionCreationStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
