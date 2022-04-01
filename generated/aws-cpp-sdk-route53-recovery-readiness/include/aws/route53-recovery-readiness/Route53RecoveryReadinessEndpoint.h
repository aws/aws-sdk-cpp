/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Route53RecoveryReadiness
{
namespace Route53RecoveryReadinessEndpoint
{
AWS_ROUTE53RECOVERYREADINESS_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace Route53RecoveryReadinessEndpoint
} // namespace Route53RecoveryReadiness
} // namespace Aws
