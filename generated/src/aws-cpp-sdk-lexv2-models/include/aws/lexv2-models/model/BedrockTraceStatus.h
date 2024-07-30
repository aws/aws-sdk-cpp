/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{
  enum class BedrockTraceStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace BedrockTraceStatusMapper
{
AWS_LEXMODELSV2_API BedrockTraceStatus GetBedrockTraceStatusForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForBedrockTraceStatus(BedrockTraceStatus value);
} // namespace BedrockTraceStatusMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
