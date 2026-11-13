/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/FetchVerdict.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace FetchVerdictMapper {

static const int THREAT_HASH = HashingUtils::HashString("THREAT");
static const int BENIGN_HASH = HashingUtils::HashString("BENIGN");
static const int NEUTRAL_HASH = HashingUtils::HashString("NEUTRAL");

FetchVerdict GetFetchVerdictForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == THREAT_HASH) {
    return FetchVerdict::THREAT;
  } else if (hashCode == BENIGN_HASH) {
    return FetchVerdict::BENIGN;
  } else if (hashCode == NEUTRAL_HASH) {
    return FetchVerdict::NEUTRAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FetchVerdict>(hashCode);
  }

  return FetchVerdict::NOT_SET;
}

Aws::String GetNameForFetchVerdict(FetchVerdict enumValue) {
  switch (enumValue) {
    case FetchVerdict::NOT_SET:
      return {};
    case FetchVerdict::THREAT:
      return "THREAT";
    case FetchVerdict::BENIGN:
      return "BENIGN";
    case FetchVerdict::NEUTRAL:
      return "NEUTRAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FetchVerdictMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
