/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{
  enum class ConversationMode
  {
    NOT_SET,
    AUDIO,
    TEXT
  };

namespace ConversationModeMapper
{
AWS_LEXRUNTIMEV2_API ConversationMode GetConversationModeForName(const Aws::String& name);

AWS_LEXRUNTIMEV2_API Aws::String GetNameForConversationMode(ConversationMode value);
} // namespace ConversationModeMapper
} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
