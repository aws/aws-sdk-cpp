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
  enum class InstanceGroupState
  {
    NOT_SET,
    PROVISIONING,
    BOOTSTRAPPING,
    RUNNING,
    RECONFIGURING,
    RESIZING,
    SUSPENDED,
    TERMINATING,
    TERMINATED,
    ARRESTED,
    SHUTTING_DOWN,
    ENDED
  };

namespace InstanceGroupStateMapper
{
AWS_EMR_API InstanceGroupState GetInstanceGroupStateForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForInstanceGroupState(InstanceGroupState value);
} // namespace InstanceGroupStateMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
