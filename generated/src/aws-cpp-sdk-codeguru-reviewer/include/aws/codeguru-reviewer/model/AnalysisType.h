/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{
  enum class AnalysisType
  {
    NOT_SET,
    Security,
    CodeQuality
  };

namespace AnalysisTypeMapper
{
AWS_CODEGURUREVIEWER_API AnalysisType GetAnalysisTypeForName(const Aws::String& name);

AWS_CODEGURUREVIEWER_API Aws::String GetNameForAnalysisType(AnalysisType value);
} // namespace AnalysisTypeMapper
} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
