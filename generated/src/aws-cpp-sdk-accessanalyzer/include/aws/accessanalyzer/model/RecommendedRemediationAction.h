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
  enum class RecommendedRemediationAction
  {
    NOT_SET,
    CREATE_POLICY,
    DETACH_POLICY
  };

namespace RecommendedRemediationActionMapper
{
AWS_ACCESSANALYZER_API RecommendedRemediationAction GetRecommendedRemediationActionForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForRecommendedRemediationAction(RecommendedRemediationAction value);
} // namespace RecommendedRemediationActionMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
