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
  enum class ClusterSettingName
  {
    NOT_SET,
    containerInsights
  };

namespace ClusterSettingNameMapper
{
AWS_ECS_API ClusterSettingName GetClusterSettingNameForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForClusterSettingName(ClusterSettingName value);
} // namespace ClusterSettingNameMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
