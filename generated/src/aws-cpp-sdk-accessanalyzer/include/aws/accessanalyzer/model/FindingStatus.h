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
  enum class FindingStatus
  {
    NOT_SET,
    ACTIVE,
    ARCHIVED,
    RESOLVED
  };

namespace FindingStatusMapper
{
AWS_ACCESSANALYZER_API FindingStatus GetFindingStatusForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForFindingStatus(FindingStatus value);
} // namespace FindingStatusMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
