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
  enum class AnalyzerStatus
  {
    NOT_SET,
    ACTIVE,
    CREATING,
    DISABLED,
    FAILED
  };

namespace AnalyzerStatusMapper
{
AWS_ACCESSANALYZER_API AnalyzerStatus GetAnalyzerStatusForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForAnalyzerStatus(AnalyzerStatus value);
} // namespace AnalyzerStatusMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
