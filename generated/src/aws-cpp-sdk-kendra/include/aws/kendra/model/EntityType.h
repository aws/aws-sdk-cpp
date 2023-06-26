/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class EntityType
  {
    NOT_SET,
    USER,
    GROUP
  };

namespace EntityTypeMapper
{
AWS_KENDRA_API EntityType GetEntityTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForEntityType(EntityType value);
} // namespace EntityTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
