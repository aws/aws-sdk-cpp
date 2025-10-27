/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

namespace Aws {
namespace LexModelsV2 {
namespace Model {
enum class AnalyticsIntentStageFilterName {
  NOT_SET,
  BotAliasId,
  BotVersion,
  LocaleId,
  Modality,
  Channel,
  SessionId,
  OriginatingRequestId,
  IntentName,
  IntentStageName
};

namespace AnalyticsIntentStageFilterNameMapper {
AWS_LEXMODELSV2_API AnalyticsIntentStageFilterName GetAnalyticsIntentStageFilterNameForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsIntentStageFilterName(AnalyticsIntentStageFilterName value);
}  // namespace AnalyticsIntentStageFilterNameMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
