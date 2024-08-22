/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class ModelImportJobStatus
  {
    NOT_SET,
    InProgress,
    Completed,
    Failed
  };

namespace ModelImportJobStatusMapper
{
AWS_BEDROCK_API ModelImportJobStatus GetModelImportJobStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForModelImportJobStatus(ModelImportJobStatus value);
} // namespace ModelImportJobStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
