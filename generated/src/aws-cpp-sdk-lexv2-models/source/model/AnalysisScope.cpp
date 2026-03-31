/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lexv2-models/model/AnalysisScope.h>

using namespace Aws::Utils;

namespace Aws {
namespace LexModelsV2 {
namespace Model {
namespace AnalysisScopeMapper {

static const int BotLocale_HASH = HashingUtils::HashString("BotLocale");

AnalysisScope GetAnalysisScopeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BotLocale_HASH) {
    return AnalysisScope::BotLocale;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnalysisScope>(hashCode);
  }

  return AnalysisScope::NOT_SET;
}

Aws::String GetNameForAnalysisScope(AnalysisScope enumValue) {
  switch (enumValue) {
    case AnalysisScope::NOT_SET:
      return {};
    case AnalysisScope::BotLocale:
      return "BotLocale";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnalysisScopeMapper
}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
