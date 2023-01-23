/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class SpotProvisioningTimeoutAction
  {
    NOT_SET,
    SWITCH_TO_ON_DEMAND,
    TERMINATE_CLUSTER
  };

namespace SpotProvisioningTimeoutActionMapper
{
AWS_EMR_API SpotProvisioningTimeoutAction GetSpotProvisioningTimeoutActionForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForSpotProvisioningTimeoutAction(SpotProvisioningTimeoutAction value);
} // namespace SpotProvisioningTimeoutActionMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
