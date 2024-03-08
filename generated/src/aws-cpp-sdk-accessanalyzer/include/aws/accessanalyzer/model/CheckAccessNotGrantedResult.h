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
  enum class CheckAccessNotGrantedResult
  {
    NOT_SET,
    PASS,
    FAIL
  };

namespace CheckAccessNotGrantedResultMapper
{
AWS_ACCESSANALYZER_API CheckAccessNotGrantedResult GetCheckAccessNotGrantedResultForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForCheckAccessNotGrantedResult(CheckAccessNotGrantedResult value);
} // namespace CheckAccessNotGrantedResultMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
