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
  enum class InstanceState
  {
    NOT_SET,
    AWAITING_FULFILLMENT,
    PROVISIONING,
    BOOTSTRAPPING,
    RUNNING,
    TERMINATED
  };

namespace InstanceStateMapper
{
AWS_EMR_API InstanceState GetInstanceStateForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForInstanceState(InstanceState value);
} // namespace InstanceStateMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
