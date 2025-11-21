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
enum class IpamCidrStatus {
  NOT_SET,
  provisioned,
  failed_provision,
  provisioning,
  deprovisioned,
  failed_deprovision,
  deprovisioning,
  advertised,
  failed_advertise,
  advertising,
  withdrawn,
  failed_withdraw,
  withdrawing
};

namespace IpamCidrStatusMapper {
AWS_CLOUDFRONT_API IpamCidrStatus GetIpamCidrStatusForName(const Aws::String& name);

AWS_CLOUDFRONT_API Aws::String GetNameForIpamCidrStatus(IpamCidrStatus value);
}  // namespace IpamCidrStatusMapper
}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
