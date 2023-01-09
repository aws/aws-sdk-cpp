/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>

namespace Aws
{
namespace ElasticLoadBalancing
{
class ElasticLoadBalancingEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace ElasticLoadBalancing
} // namespace Aws
