/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>

namespace Aws {
namespace EKS {
namespace Model {
enum class IpFamily { NOT_SET, ipv4, ipv6 };

namespace IpFamilyMapper {
AWS_EKS_API IpFamily GetIpFamilyForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForIpFamily(IpFamily value);
}  // namespace IpFamilyMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
