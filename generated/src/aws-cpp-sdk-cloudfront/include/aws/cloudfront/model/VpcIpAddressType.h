/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudFront {
namespace Model {
enum class VpcIpAddressType { NOT_SET, ipv4, dualstack };

namespace VpcIpAddressTypeMapper {
AWS_CLOUDFRONT_API VpcIpAddressType GetVpcIpAddressTypeForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForVpcIpAddressType(VpcIpAddressType value);
}  // namespace VpcIpAddressTypeMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
