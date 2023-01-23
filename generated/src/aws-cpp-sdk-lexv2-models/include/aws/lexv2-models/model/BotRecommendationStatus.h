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
  enum class BotRecommendationStatus
  {
    NOT_SET,
    Processing,
    Deleting,
    Deleted,
    Downloading,
    Updating,
    Available,
    Failed,
    Stopping,
    Stopped
  };

namespace BotRecommendationStatusMapper
{
AWS_LEXMODELSV2_API BotRecommendationStatus GetBotRecommendationStatusForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForBotRecommendationStatus(BotRecommendationStatus value);
} // namespace BotRecommendationStatusMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
