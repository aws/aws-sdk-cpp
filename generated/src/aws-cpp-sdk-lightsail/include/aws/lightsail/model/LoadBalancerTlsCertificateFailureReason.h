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
  enum class LoadBalancerTlsCertificateFailureReason
  {
    NOT_SET,
    NO_AVAILABLE_CONTACTS,
    ADDITIONAL_VERIFICATION_REQUIRED,
    DOMAIN_NOT_ALLOWED,
    INVALID_PUBLIC_DOMAIN,
    OTHER
  };

namespace LoadBalancerTlsCertificateFailureReasonMapper
{
AWS_LIGHTSAIL_API LoadBalancerTlsCertificateFailureReason GetLoadBalancerTlsCertificateFailureReasonForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForLoadBalancerTlsCertificateFailureReason(LoadBalancerTlsCertificateFailureReason value);
} // namespace LoadBalancerTlsCertificateFailureReasonMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
