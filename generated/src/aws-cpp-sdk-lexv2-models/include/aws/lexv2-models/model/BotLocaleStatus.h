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
  enum class BotLocaleStatus
  {
    NOT_SET,
    Creating,
    Building,
    Built,
    ReadyExpressTesting,
    Failed,
    Deleting,
    NotBuilt,
    Importing,
    Processing
  };

namespace BotLocaleStatusMapper
{
AWS_LEXMODELSV2_API BotLocaleStatus GetBotLocaleStatusForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForBotLocaleStatus(BotLocaleStatus value);
} // namespace BotLocaleStatusMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
