/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class EntityType
  {
    NOT_SET,
    ASSET
  };

namespace EntityTypeMapper
{
AWS_DATAZONE_API EntityType GetEntityTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForEntityType(EntityType value);
} // namespace EntityTypeMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
