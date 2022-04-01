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
  enum class ValidatePolicyFindingType
  {
    NOT_SET,
    ERROR_,
    SECURITY_WARNING,
    SUGGESTION,
    WARNING
  };

namespace ValidatePolicyFindingTypeMapper
{
AWS_ACCESSANALYZER_API ValidatePolicyFindingType GetValidatePolicyFindingTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForValidatePolicyFindingType(ValidatePolicyFindingType value);
} // namespace ValidatePolicyFindingTypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
