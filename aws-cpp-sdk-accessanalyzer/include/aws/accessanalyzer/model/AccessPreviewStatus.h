/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{
  enum class AccessPreviewStatus
  {
    NOT_SET,
    COMPLETED,
    CREATING,
    FAILED
  };

namespace AccessPreviewStatusMapper
{
AWS_ACCESSANALYZER_API AccessPreviewStatus GetAccessPreviewStatusForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForAccessPreviewStatus(AccessPreviewStatus value);
} // namespace AccessPreviewStatusMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
