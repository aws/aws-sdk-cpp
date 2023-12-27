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
  enum class FindingType
  {
    NOT_SET,
    ExternalAccess,
    UnusedIAMRole,
    UnusedIAMUserAccessKey,
    UnusedIAMUserPassword,
    UnusedPermission
  };

namespace FindingTypeMapper
{
AWS_ACCESSANALYZER_API FindingType GetFindingTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForFindingType(FindingType value);
} // namespace FindingTypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
