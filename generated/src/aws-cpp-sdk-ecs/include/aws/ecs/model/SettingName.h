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
  enum class SettingName
  {
    NOT_SET,
    serviceLongArnFormat,
    taskLongArnFormat,
    containerInstanceLongArnFormat,
    awsvpcTrunking,
    containerInsights
  };

namespace SettingNameMapper
{
AWS_ECS_API SettingName GetSettingNameForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForSettingName(SettingName value);
} // namespace SettingNameMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
