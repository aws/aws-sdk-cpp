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
  enum class SettingType
  {
    NOT_SET,
    user,
    aws_managed
  };

namespace SettingTypeMapper
{
AWS_ECS_API SettingType GetSettingTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForSettingType(SettingType value);
} // namespace SettingTypeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
