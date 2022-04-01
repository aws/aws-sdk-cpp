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
  enum class FindingChangeType
  {
    NOT_SET,
    CHANGED,
    NEW_,
    UNCHANGED
  };

namespace FindingChangeTypeMapper
{
AWS_ACCESSANALYZER_API FindingChangeType GetFindingChangeTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForFindingChangeType(FindingChangeType value);
} // namespace FindingChangeTypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
