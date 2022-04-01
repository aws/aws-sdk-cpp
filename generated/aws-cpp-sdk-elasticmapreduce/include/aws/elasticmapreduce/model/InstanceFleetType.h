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
  enum class InstanceFleetType
  {
    NOT_SET,
    MASTER,
    CORE,
    TASK
  };

namespace InstanceFleetTypeMapper
{
AWS_EMR_API InstanceFleetType GetInstanceFleetTypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForInstanceFleetType(InstanceFleetType value);
} // namespace InstanceFleetTypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
