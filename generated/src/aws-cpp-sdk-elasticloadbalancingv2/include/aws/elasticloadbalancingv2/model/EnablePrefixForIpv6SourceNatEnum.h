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
  enum class EnablePrefixForIpv6SourceNatEnum
  {
    NOT_SET,
    on,
    off
  };

namespace EnablePrefixForIpv6SourceNatEnumMapper
{
AWS_ELASTICLOADBALANCINGV2_API EnablePrefixForIpv6SourceNatEnum GetEnablePrefixForIpv6SourceNatEnumForName(const Aws::String& name);

AWS_ELASTICLOADBALANCINGV2_API Aws::String GetNameForEnablePrefixForIpv6SourceNatEnum(EnablePrefixForIpv6SourceNatEnum value);
} // namespace EnablePrefixForIpv6SourceNatEnumMapper
} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
