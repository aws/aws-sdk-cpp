/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class AssignPublicIp
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AssignPublicIpMapper
{
AWS_ECS_API AssignPublicIp GetAssignPublicIpForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForAssignPublicIp(AssignPublicIp value);
} // namespace AssignPublicIpMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
