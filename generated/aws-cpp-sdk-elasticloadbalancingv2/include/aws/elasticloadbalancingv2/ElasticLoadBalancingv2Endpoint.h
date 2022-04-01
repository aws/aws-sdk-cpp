/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace ElasticLoadBalancingv2
{
namespace ElasticLoadBalancingv2Endpoint
{
AWS_ELASTICLOADBALANCINGV2_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace ElasticLoadBalancingv2Endpoint
} // namespace ElasticLoadBalancingv2
} // namespace Aws
