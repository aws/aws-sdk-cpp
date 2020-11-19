/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class SchemaDiffType
  {
    NOT_SET,
    SYNTAX_DIFF
  };

namespace SchemaDiffTypeMapper
{
AWS_GLUE_API SchemaDiffType GetSchemaDiffTypeForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForSchemaDiffType(SchemaDiffType value);
} // namespace SchemaDiffTypeMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
