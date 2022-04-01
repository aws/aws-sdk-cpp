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
  enum class InstanceGroupType
  {
    NOT_SET,
    MASTER,
    CORE,
    TASK
  };

namespace InstanceGroupTypeMapper
{
AWS_EMR_API InstanceGroupType GetInstanceGroupTypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForInstanceGroupType(InstanceGroupType value);
} // namespace InstanceGroupTypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
