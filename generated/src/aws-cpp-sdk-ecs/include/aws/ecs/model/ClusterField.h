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
  enum class ClusterField
  {
    NOT_SET,
    ATTACHMENTS,
    CONFIGURATIONS,
    SETTINGS,
    STATISTICS,
    TAGS
  };

namespace ClusterFieldMapper
{
AWS_ECS_API ClusterField GetClusterFieldForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForClusterField(ClusterField value);
} // namespace ClusterFieldMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
