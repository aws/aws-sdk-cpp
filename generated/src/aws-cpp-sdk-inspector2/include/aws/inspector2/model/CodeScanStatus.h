/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class CodeScanStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCESSFUL,
    FAILED,
    SKIPPED
  };

namespace CodeScanStatusMapper
{
AWS_INSPECTOR2_API CodeScanStatus GetCodeScanStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCodeScanStatus(CodeScanStatus value);
} // namespace CodeScanStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
