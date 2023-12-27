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
  enum class CheckNoNewAccessResult
  {
    NOT_SET,
    PASS,
    FAIL
  };

namespace CheckNoNewAccessResultMapper
{
AWS_ACCESSANALYZER_API CheckNoNewAccessResult GetCheckNoNewAccessResultForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForCheckNoNewAccessResult(CheckNoNewAccessResult value);
} // namespace CheckNoNewAccessResultMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
