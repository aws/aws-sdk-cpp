/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{
  enum class EntityType
  {
    NOT_SET,
    ALL_PERSONALLY_IDENTIFIABLE_INFORMATION,
    NUMBERS,
    CUSTOM
  };

namespace EntityTypeMapper
{
AWS_CLEANROOMSML_API EntityType GetEntityTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForEntityType(EntityType value);
} // namespace EntityTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
