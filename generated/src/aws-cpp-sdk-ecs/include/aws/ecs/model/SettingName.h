﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

namespace Aws {
namespace ECS {
namespace Model {
enum class SettingName {
  NOT_SET,
  serviceLongArnFormat,
  taskLongArnFormat,
  containerInstanceLongArnFormat,
  awsvpcTrunking,
  containerInsights,
  fargateFIPSMode,
  tagResourceAuthorization,
  fargateTaskRetirementWaitPeriod,
  guardDutyActivate,
  defaultLogDriverMode
};

namespace SettingNameMapper {
AWS_ECS_API SettingName GetSettingNameForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForSettingName(SettingName value);
}  // namespace SettingNameMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
