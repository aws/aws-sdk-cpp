/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    CONFIGURED_TABLE,
    COLLABORATION,
    MEMBERSHIP,
    CONFIGURED_TABLE_ASSOCIATION
  };

namespace ResourceTypeMapper
{
AWS_CLEANROOMS_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
