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
  enum class RelationshipType
  {
    NOT_SET,
    CHILD
  };

namespace RelationshipTypeMapper
{
AWS_COMPREHEND_API RelationshipType GetRelationshipTypeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForRelationshipType(RelationshipType value);
} // namespace RelationshipTypeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
