/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lexv2-models/model/BotAnalyzerStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {
namespace BotAnalyzerStatusMapper {

static const int Processing_HASH = HashingUtils::HashString("Processing");
static const int Available_HASH = HashingUtils::HashString("Available");
static const int Failed_HASH = HashingUtils::HashString("Failed");
static const int Stopping_HASH = HashingUtils::HashString("Stopping");
static const int Stopped_HASH = HashingUtils::HashString("Stopped");

BotAnalyzerStatus GetBotAnalyzerStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Processing_HASH) {
    return BotAnalyzerStatus::Processing;
  } else if (hashCode == Available_HASH) {
    return BotAnalyzerStatus::Available;
  } else if (hashCode == Failed_HASH) {
    return BotAnalyzerStatus::Failed;
  } else if (hashCode == Stopping_HASH) {
    return BotAnalyzerStatus::Stopping;
  } else if (hashCode == Stopped_HASH) {
    return BotAnalyzerStatus::Stopped;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BotAnalyzerStatus>(hashCode);
  }

  return BotAnalyzerStatus::NOT_SET;
}

Aws::String GetNameForBotAnalyzerStatus(BotAnalyzerStatus enumValue) {
  switch (enumValue) {
    case BotAnalyzerStatus::NOT_SET:
      return {};
    case BotAnalyzerStatus::Processing:
      return "Processing";
    case BotAnalyzerStatus::Available:
      return "Available";
    case BotAnalyzerStatus::Failed:
      return "Failed";
    case BotAnalyzerStatus::Stopping:
      return "Stopping";
    case BotAnalyzerStatus::Stopped:
      return "Stopped";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BotAnalyzerStatusMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
