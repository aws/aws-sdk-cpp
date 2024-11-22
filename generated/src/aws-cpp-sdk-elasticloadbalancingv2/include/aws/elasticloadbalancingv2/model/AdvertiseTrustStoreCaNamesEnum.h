/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{
  enum class AdvertiseTrustStoreCaNamesEnum
  {
    NOT_SET,
    on,
    off
  };

namespace AdvertiseTrustStoreCaNamesEnumMapper
{
AWS_ELASTICLOADBALANCINGV2_API AdvertiseTrustStoreCaNamesEnum GetAdvertiseTrustStoreCaNamesEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForAdvertiseTrustStoreCaNamesEnum(AdvertiseTrustStoreCaNamesEnum value);
} // namespace AdvertiseTrustStoreCaNamesEnumMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
