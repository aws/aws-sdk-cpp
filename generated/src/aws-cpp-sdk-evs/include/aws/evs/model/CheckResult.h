/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EVS
{
namespace Model
{
  enum class CheckResult
  {
    NOT_SET,
    PASSED,
    FAILED,
    UNKNOWN
  };

namespace CheckResultMapper
{
AWS_EVS_API CheckResult GetCheckResultForName(const Aws::String& name);

AWS_EVS_API Aws::String GetNameForCheckResult(CheckResult value);
} // namespace CheckResultMapper
} // namespace Model
} // namespace EVS
} // namespace Aws
