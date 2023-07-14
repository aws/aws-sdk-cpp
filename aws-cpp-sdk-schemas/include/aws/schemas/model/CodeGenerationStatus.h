/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Schemas
{
namespace Model
{
  enum class CodeGenerationStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_COMPLETE,
    CREATE_FAILED
  };

namespace CodeGenerationStatusMapper
{
AWS_SCHEMAS_API CodeGenerationStatus GetCodeGenerationStatusForName(const Aws::String& name);

AWS_SCHEMAS_API Aws::String GetNameForCodeGenerationStatus(CodeGenerationStatus value);
} // namespace CodeGenerationStatusMapper
} // namespace Model
} // namespace Schemas
} // namespace Aws
