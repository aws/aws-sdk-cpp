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
  enum class InstanceRoleType
  {
    NOT_SET,
    MASTER,
    CORE,
    TASK
  };

namespace InstanceRoleTypeMapper
{
AWS_EMR_API InstanceRoleType GetInstanceRoleTypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForInstanceRoleType(InstanceRoleType value);
} // namespace InstanceRoleTypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
