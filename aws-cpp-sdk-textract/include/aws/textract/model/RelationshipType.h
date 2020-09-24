/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Textract
{
namespace Model
{
  enum class RelationshipType
  {
    NOT_SET,
    VALUE,
    CHILD,
    COMPLEX_FEATURES
  };

namespace RelationshipTypeMapper
{
AWS_TEXTRACT_API RelationshipType GetRelationshipTypeForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForRelationshipType(RelationshipType value);
} // namespace RelationshipTypeMapper
} // namespace Model
} // namespace Textract
} // namespace Aws
