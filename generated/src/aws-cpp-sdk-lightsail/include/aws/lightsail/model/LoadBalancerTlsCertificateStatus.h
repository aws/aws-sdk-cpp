/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class LoadBalancerTlsCertificateStatus {
  NOT_SET,
  PENDING_VALIDATION,
  ISSUED,
  INACTIVE,
  EXPIRED,
  VALIDATION_TIMED_OUT,
  REVOKED,
  FAILED,
  UNKNOWN
};

namespace LoadBalancerTlsCertificateStatusMapper {
AWS_LIGHTSAIL_API LoadBalancerTlsCertificateStatus GetLoadBalancerTlsCertificateStatusForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForLoadBalancerTlsCertificateStatus(LoadBalancerTlsCertificateStatus value);
}  // namespace LoadBalancerTlsCertificateStatusMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
