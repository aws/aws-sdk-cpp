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
  enum class ModelCopyJobStatus
  {
    NOT_SET,
    InProgress,
    Completed,
    Failed
  };

namespace ModelCopyJobStatusMapper
{
AWS_BEDROCK_API ModelCopyJobStatus GetModelCopyJobStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForModelCopyJobStatus(ModelCopyJobStatus value);
} // namespace ModelCopyJobStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
