/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Route53RecoveryControlConfig
{
namespace Route53RecoveryControlConfigEndpoint
{
AWS_ROUTE53RECOVERYCONTROLCONFIG_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace Route53RecoveryControlConfigEndpoint
} // namespace Route53RecoveryControlConfig
} // namespace Aws
