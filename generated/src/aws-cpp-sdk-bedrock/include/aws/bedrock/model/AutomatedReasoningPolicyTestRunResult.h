/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class AutomatedReasoningPolicyTestRunResult
  {
    NOT_SET,
    PASSED,
    FAILED
  };

namespace AutomatedReasoningPolicyTestRunResultMapper
{
AWS_BEDROCK_API AutomatedReasoningPolicyTestRunResult GetAutomatedReasoningPolicyTestRunResultForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAutomatedReasoningPolicyTestRunResult(AutomatedReasoningPolicyTestRunResult value);
} // namespace AutomatedReasoningPolicyTestRunResultMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
