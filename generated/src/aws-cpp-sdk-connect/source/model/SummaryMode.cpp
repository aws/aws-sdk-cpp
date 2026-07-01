/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SummaryMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace SummaryModeMapper {

static const int PostContact_HASH = HashingUtils::HashString("PostContact");
static const int AutomatedInteraction_HASH = HashingUtils::HashString("AutomatedInteraction");
static const int ContactChain_HASH = HashingUtils::HashString("ContactChain");

SummaryMode GetSummaryModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PostContact_HASH) {
    return SummaryMode::PostContact;
  } else if (hashCode == AutomatedInteraction_HASH) {
    return SummaryMode::AutomatedInteraction;
  } else if (hashCode == ContactChain_HASH) {
    return SummaryMode::ContactChain;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SummaryMode>(hashCode);
  }

  return SummaryMode::NOT_SET;
}

Aws::String GetNameForSummaryMode(SummaryMode enumValue) {
  switch (enumValue) {
    case SummaryMode::NOT_SET:
      return {};
    case SummaryMode::PostContact:
      return "PostContact";
    case SummaryMode::AutomatedInteraction:
      return "AutomatedInteraction";
    case SummaryMode::ContactChain:
      return "ContactChain";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SummaryModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
