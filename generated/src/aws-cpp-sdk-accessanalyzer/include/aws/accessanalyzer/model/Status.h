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
  enum class Status
  {
    NOT_SET,
    SUCCEEDED,
    FAILED,
    IN_PROGRESS
  };

namespace StatusMapper
{
AWS_ACCESSANALYZER_API Status GetStatusForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
