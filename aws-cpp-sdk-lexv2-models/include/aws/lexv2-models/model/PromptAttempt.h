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
  enum class PromptAttempt
  {
    NOT_SET,
    Initial,
    Retry1,
    Retry2,
    Retry3,
    Retry4,
    Retry5
  };

namespace PromptAttemptMapper
{
AWS_LEXMODELSV2_API PromptAttempt GetPromptAttemptForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForPromptAttempt(PromptAttempt value);
} // namespace PromptAttemptMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
