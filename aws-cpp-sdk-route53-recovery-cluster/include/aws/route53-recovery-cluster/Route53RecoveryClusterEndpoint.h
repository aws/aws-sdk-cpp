/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Route53RecoveryCluster
{
namespace Route53RecoveryClusterEndpoint
{
AWS_ROUTE53RECOVERYCLUSTER_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace Route53RecoveryClusterEndpoint
} // namespace Route53RecoveryCluster
} // namespace Aws
