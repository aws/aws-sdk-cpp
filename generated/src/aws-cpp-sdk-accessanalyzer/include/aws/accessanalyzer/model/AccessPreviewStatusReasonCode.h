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
  enum class AccessPreviewStatusReasonCode
  {
    NOT_SET,
    INTERNAL_ERROR,
    INVALID_CONFIGURATION
  };

namespace AccessPreviewStatusReasonCodeMapper
{
AWS_ACCESSANALYZER_API AccessPreviewStatusReasonCode GetAccessPreviewStatusReasonCodeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForAccessPreviewStatusReasonCode(AccessPreviewStatusReasonCode value);
} // namespace AccessPreviewStatusReasonCodeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
