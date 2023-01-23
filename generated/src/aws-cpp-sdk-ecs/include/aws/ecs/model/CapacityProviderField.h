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
  enum class CapacityProviderField
  {
    NOT_SET,
    TAGS
  };

namespace CapacityProviderFieldMapper
{
AWS_ECS_API CapacityProviderField GetCapacityProviderFieldForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForCapacityProviderField(CapacityProviderField value);
} // namespace CapacityProviderFieldMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
