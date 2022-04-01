/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class EC2InstanceState
  {
    NOT_SET,
    PENDING,
    RUNNING,
    STOPPING,
    STOPPED,
    SHUTTING_DOWN,
    TERMINATED,
    NOT_FOUND
  };

namespace EC2InstanceStateMapper
{
AWS_DRS_API EC2InstanceState GetEC2InstanceStateForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForEC2InstanceState(EC2InstanceState value);
} // namespace EC2InstanceStateMapper
} // namespace Model
} // namespace drs
} // namespace Aws
