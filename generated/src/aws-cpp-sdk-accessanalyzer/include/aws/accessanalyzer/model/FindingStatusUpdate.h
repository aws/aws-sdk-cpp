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
  enum class FindingStatusUpdate
  {
    NOT_SET,
    ACTIVE,
    ARCHIVED
  };

namespace FindingStatusUpdateMapper
{
AWS_ACCESSANALYZER_API FindingStatusUpdate GetFindingStatusUpdateForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForFindingStatusUpdate(FindingStatusUpdate value);
} // namespace FindingStatusUpdateMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
