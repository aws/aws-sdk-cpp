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
  enum class Scope
  {
    NOT_SET,
    task,
    shared
  };

namespace ScopeMapper
{
AWS_ECS_API Scope GetScopeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForScope(Scope value);
} // namespace ScopeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
