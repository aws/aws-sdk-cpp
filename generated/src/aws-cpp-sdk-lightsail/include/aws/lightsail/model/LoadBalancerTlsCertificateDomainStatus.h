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
enum class LoadBalancerTlsCertificateDomainStatus { NOT_SET, PENDING_VALIDATION, FAILED, SUCCESS };

namespace LoadBalancerTlsCertificateDomainStatusMapper {
AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDomainStatus GetLoadBalancerTlsCertificateDomainStatusForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForLoadBalancerTlsCertificateDomainStatus(LoadBalancerTlsCertificateDomainStatus value);
}  // namespace LoadBalancerTlsCertificateDomainStatusMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
