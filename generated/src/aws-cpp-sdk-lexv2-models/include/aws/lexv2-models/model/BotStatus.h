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
  enum class BotStatus
  {
    NOT_SET,
    Creating,
    Available,
    Inactive,
    Deleting,
    Failed,
    Versioning,
    Importing,
    Updating
  };

namespace BotStatusMapper
{
AWS_LEXMODELSV2_API BotStatus GetBotStatusForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForBotStatus(BotStatus value);
} // namespace BotStatusMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
