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
  enum class FindingSourceType
  {
    NOT_SET,
    POLICY,
    BUCKET_ACL,
    S3_ACCESS_POINT,
    S3_ACCESS_POINT_ACCOUNT
  };

namespace FindingSourceTypeMapper
{
AWS_ACCESSANALYZER_API FindingSourceType GetFindingSourceTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForFindingSourceType(FindingSourceType value);
} // namespace FindingSourceTypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
