/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-cluster/Route53RecoveryCluster_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Route53RecoveryCluster
{
namespace Model
{
  enum class RoutingControlState
  {
    NOT_SET,
    On,
    Off
  };

namespace RoutingControlStateMapper
{
AWS_ROUTE53RECOVERYCLUSTER_API RoutingControlState GetRoutingControlStateForName(const Aws::String& name);

AWS_ROUTE53RECOVERYCLUSTER_API Aws::String GetNameForRoutingControlState(RoutingControlState value);
} // namespace RoutingControlStateMapper
} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
