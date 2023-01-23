/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class LoadBalancerTlsCertificateRenewalStatus
  {
    NOT_SET,
    PENDING_AUTO_RENEWAL,
    PENDING_VALIDATION,
    SUCCESS,
    FAILED
  };

namespace LoadBalancerTlsCertificateRenewalStatusMapper
{
AWS_LIGHTSAIL_API LoadBalancerTlsCertificateRenewalStatus GetLoadBalancerTlsCertificateRenewalStatusForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForLoadBalancerTlsCertificateRenewalStatus(LoadBalancerTlsCertificateRenewalStatus value);
} // namespace LoadBalancerTlsCertificateRenewalStatusMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
