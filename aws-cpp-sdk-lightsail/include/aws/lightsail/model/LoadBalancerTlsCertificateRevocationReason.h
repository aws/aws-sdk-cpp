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
  enum class LoadBalancerTlsCertificateRevocationReason
  {
    NOT_SET,
    UNSPECIFIED,
    KEY_COMPROMISE,
    CA_COMPROMISE,
    AFFILIATION_CHANGED,
    SUPERCEDED,
    CESSATION_OF_OPERATION,
    CERTIFICATE_HOLD,
    REMOVE_FROM_CRL,
    PRIVILEGE_WITHDRAWN,
    A_A_COMPROMISE
  };

namespace LoadBalancerTlsCertificateRevocationReasonMapper
{
AWS_LIGHTSAIL_API LoadBalancerTlsCertificateRevocationReason GetLoadBalancerTlsCertificateRevocationReasonForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForLoadBalancerTlsCertificateRevocationReason(LoadBalancerTlsCertificateRevocationReason value);
} // namespace LoadBalancerTlsCertificateRevocationReasonMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
