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
  enum class LoadBalancerTlsCertificateDnsRecordCreationStateCode
  {
    NOT_SET,
    SUCCEEDED,
    STARTED,
    FAILED
  };

namespace LoadBalancerTlsCertificateDnsRecordCreationStateCodeMapper
{
AWS_LIGHTSAIL_API LoadBalancerTlsCertificateDnsRecordCreationStateCode GetLoadBalancerTlsCertificateDnsRecordCreationStateCodeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForLoadBalancerTlsCertificateDnsRecordCreationStateCode(LoadBalancerTlsCertificateDnsRecordCreationStateCode value);
} // namespace LoadBalancerTlsCertificateDnsRecordCreationStateCodeMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
