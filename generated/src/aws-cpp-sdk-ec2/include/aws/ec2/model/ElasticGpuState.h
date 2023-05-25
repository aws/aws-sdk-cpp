/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class ElasticGpuState
  {
    NOT_SET,
    ATTACHED
  };

namespace ElasticGpuStateMapper
{
AWS_EC2_API ElasticGpuState GetElasticGpuStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForElasticGpuState(ElasticGpuState value);
} // namespace ElasticGpuStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
