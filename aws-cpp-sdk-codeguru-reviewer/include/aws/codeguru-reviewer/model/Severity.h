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
  enum class Severity
  {
    NOT_SET,
    Info,
    Low,
    Medium,
    High,
    Critical
  };

namespace SeverityMapper
{
AWS_CODEGURUREVIEWER_API Severity GetSeverityForName(const Aws::String& name);

AWS_CODEGURUREVIEWER_API Aws::String GetNameForSeverity(Severity value);
} // namespace SeverityMapper
} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
