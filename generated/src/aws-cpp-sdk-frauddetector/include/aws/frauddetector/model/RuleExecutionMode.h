/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{
  enum class RuleExecutionMode
  {
    NOT_SET,
    ALL_MATCHED,
    FIRST_MATCHED
  };

namespace RuleExecutionModeMapper
{
AWS_FRAUDDETECTOR_API RuleExecutionMode GetRuleExecutionModeForName(const Aws::String& name);

AWS_FRAUDDETECTOR_API Aws::String GetNameForRuleExecutionMode(RuleExecutionMode value);
} // namespace RuleExecutionModeMapper
} // namespace Model
} // namespace FraudDetector
} // namespace Aws
