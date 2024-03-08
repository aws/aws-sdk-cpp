/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>

namespace Aws
{
namespace CostOptimizationHub
{
class CostOptimizationHubEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace CostOptimizationHub
} // namespace Aws
