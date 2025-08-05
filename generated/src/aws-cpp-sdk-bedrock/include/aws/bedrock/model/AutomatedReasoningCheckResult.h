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
  enum class AutomatedReasoningCheckResult
  {
    NOT_SET,
    VALID,
    INVALID,
    SATISFIABLE,
    IMPOSSIBLE,
    TRANSLATION_AMBIGUOUS,
    TOO_COMPLEX,
    NO_TRANSLATION
  };

namespace AutomatedReasoningCheckResultMapper
{
AWS_BEDROCK_API AutomatedReasoningCheckResult GetAutomatedReasoningCheckResultForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAutomatedReasoningCheckResult(AutomatedReasoningCheckResult value);
} // namespace AutomatedReasoningCheckResultMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
