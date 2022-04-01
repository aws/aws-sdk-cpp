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
  enum class BotAliasStatus
  {
    NOT_SET,
    Creating,
    Available,
    Deleting,
    Failed
  };

namespace BotAliasStatusMapper
{
AWS_LEXMODELSV2_API BotAliasStatus GetBotAliasStatusForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForBotAliasStatus(BotAliasStatus value);
} // namespace BotAliasStatusMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
