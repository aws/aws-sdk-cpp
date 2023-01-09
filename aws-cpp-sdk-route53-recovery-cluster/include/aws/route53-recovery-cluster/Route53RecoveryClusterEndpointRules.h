/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <cstddef>
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>

namespace Aws
{
namespace Route53RecoveryCluster
{
class Route53RecoveryClusterEndpointRules
{
public:
    static const size_t RulesBlobStrLen;
    static const size_t RulesBlobSize;

    static const char* GetRulesBlob();
};
} // namespace Route53RecoveryCluster
} // namespace Aws
