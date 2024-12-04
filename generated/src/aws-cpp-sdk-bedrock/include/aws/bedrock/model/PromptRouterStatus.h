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
  enum class PromptRouterStatus
  {
    NOT_SET,
    AVAILABLE
  };

namespace PromptRouterStatusMapper
{
AWS_BEDROCK_API PromptRouterStatus GetPromptRouterStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForPromptRouterStatus(PromptRouterStatus value);
} // namespace PromptRouterStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
