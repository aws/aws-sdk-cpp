/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AnalyticsMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace AnalyticsModeMapper {

static const int PostContact_HASH = HashingUtils::HashString("PostContact");
static const int RealTime_HASH = HashingUtils::HashString("RealTime");
static const int ContactLens_HASH = HashingUtils::HashString("ContactLens");
static const int AutomatedInteraction_HASH = HashingUtils::HashString("AutomatedInteraction");

AnalyticsMode GetAnalyticsModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PostContact_HASH) {
    return AnalyticsMode::PostContact;
  } else if (hashCode == RealTime_HASH) {
    return AnalyticsMode::RealTime;
  } else if (hashCode == ContactLens_HASH) {
    return AnalyticsMode::ContactLens;
  } else if (hashCode == AutomatedInteraction_HASH) {
    return AnalyticsMode::AutomatedInteraction;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnalyticsMode>(hashCode);
  }

  return AnalyticsMode::NOT_SET;
}

Aws::String GetNameForAnalyticsMode(AnalyticsMode enumValue) {
  switch (enumValue) {
    case AnalyticsMode::NOT_SET:
      return {};
    case AnalyticsMode::PostContact:
      return "PostContact";
    case AnalyticsMode::RealTime:
      return "RealTime";
    case AnalyticsMode::ContactLens:
      return "ContactLens";
    case AnalyticsMode::AutomatedInteraction:
      return "AutomatedInteraction";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnalyticsModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
