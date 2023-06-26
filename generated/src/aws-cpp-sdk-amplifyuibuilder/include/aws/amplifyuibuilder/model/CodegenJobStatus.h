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
  enum class CodegenJobStatus
  {
    NOT_SET,
    in_progress,
    failed,
    succeeded
  };

namespace CodegenJobStatusMapper
{
AWS_AMPLIFYUIBUILDER_API CodegenJobStatus GetCodegenJobStatusForName(const Aws::String& name);

AWS_AMPLIFYUIBUILDER_API Aws::String GetNameForCodegenJobStatus(CodegenJobStatus value);
} // namespace CodegenJobStatusMapper
} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
