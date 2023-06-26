/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{
  enum class GenericDataRelationshipType
  {
    NOT_SET,
    HAS_MANY,
    HAS_ONE,
    BELONGS_TO
  };

namespace GenericDataRelationshipTypeMapper
{
AWS_AMPLIFYUIBUILDER_API GenericDataRelationshipType GetGenericDataRelationshipTypeForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForGenericDataRelationshipType(GenericDataRelationshipType value);
} // namespace GenericDataRelationshipTypeMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
