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
  enum class AutomatedReasoningCheckLogicWarningType
  {
    NOT_SET,
    ALWAYS_TRUE,
    ALWAYS_FALSE
  };

namespace AutomatedReasoningCheckLogicWarningTypeMapper
{
AWS_BEDROCK_API AutomatedReasoningCheckLogicWarningType GetAutomatedReasoningCheckLogicWarningTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForAutomatedReasoningCheckLogicWarningType(AutomatedReasoningCheckLogicWarningType value);
} // namespace AutomatedReasoningCheckLogicWarningTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
