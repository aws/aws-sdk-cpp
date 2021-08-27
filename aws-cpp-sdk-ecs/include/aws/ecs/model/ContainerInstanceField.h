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
  enum class ContainerInstanceField
  {
    NOT_SET,
    TAGS
  };

namespace ContainerInstanceFieldMapper
{
AWS_ECS_API ContainerInstanceField GetContainerInstanceFieldForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForContainerInstanceField(ContainerInstanceField value);
} // namespace ContainerInstanceFieldMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
