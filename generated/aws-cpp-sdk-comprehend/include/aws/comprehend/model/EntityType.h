/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class EntityType
  {
    NOT_SET,
    PERSON,
    LOCATION,
    ORGANIZATION,
    COMMERCIAL_ITEM,
    EVENT,
    DATE,
    QUANTITY,
    TITLE,
    OTHER
  };

namespace EntityTypeMapper
{
AWS_COMPREHEND_API EntityType GetEntityTypeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForEntityType(EntityType value);
} // namespace EntityTypeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
