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
  enum class ResourceControlPolicyRestriction
  {
    NOT_SET,
    APPLICABLE,
    FAILED_TO_EVALUATE_RCP,
    NOT_APPLICABLE,
    APPLIED
  };

namespace ResourceControlPolicyRestrictionMapper
{
AWS_ACCESSANALYZER_API ResourceControlPolicyRestriction GetResourceControlPolicyRestrictionForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForResourceControlPolicyRestriction(ResourceControlPolicyRestriction value);
} // namespace ResourceControlPolicyRestrictionMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
