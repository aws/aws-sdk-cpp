/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/FetchType.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace FetchTypeMapper {

static const int FINDINGS_HASH = HashingUtils::HashString("FINDINGS");
static const int DETECTOR_HASH = HashingUtils::HashString("DETECTOR");
static const int REPUTATION_HASH = HashingUtils::HashString("REPUTATION");
static const int FINDING_TYPE_DOCUMENTATION_HASH = HashingUtils::HashString("FINDING_TYPE_DOCUMENTATION");
static const int CLOUD_TRAIL_RAW_EVENTS_HASH = HashingUtils::HashString("CLOUD_TRAIL_RAW_EVENTS");
static const int RUNTIME_SIGNALS_HASH = HashingUtils::HashString("RUNTIME_SIGNALS");
static const int MEMBER_ACCOUNTS_HASH = HashingUtils::HashString("MEMBER_ACCOUNTS");

FetchType GetFetchTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FINDINGS_HASH) {
    return FetchType::FINDINGS;
  } else if (hashCode == DETECTOR_HASH) {
    return FetchType::DETECTOR;
  } else if (hashCode == REPUTATION_HASH) {
    return FetchType::REPUTATION;
  } else if (hashCode == FINDING_TYPE_DOCUMENTATION_HASH) {
    return FetchType::FINDING_TYPE_DOCUMENTATION;
  } else if (hashCode == CLOUD_TRAIL_RAW_EVENTS_HASH) {
    return FetchType::CLOUD_TRAIL_RAW_EVENTS;
  } else if (hashCode == RUNTIME_SIGNALS_HASH) {
    return FetchType::RUNTIME_SIGNALS;
  } else if (hashCode == MEMBER_ACCOUNTS_HASH) {
    return FetchType::MEMBER_ACCOUNTS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FetchType>(hashCode);
  }

  return FetchType::NOT_SET;
}

Aws::String GetNameForFetchType(FetchType enumValue) {
  switch (enumValue) {
    case FetchType::NOT_SET:
      return {};
    case FetchType::FINDINGS:
      return "FINDINGS";
    case FetchType::DETECTOR:
      return "DETECTOR";
    case FetchType::REPUTATION:
      return "REPUTATION";
    case FetchType::FINDING_TYPE_DOCUMENTATION:
      return "FINDING_TYPE_DOCUMENTATION";
    case FetchType::CLOUD_TRAIL_RAW_EVENTS:
      return "CLOUD_TRAIL_RAW_EVENTS";
    case FetchType::RUNTIME_SIGNALS:
      return "RUNTIME_SIGNALS";
    case FetchType::MEMBER_ACCOUNTS:
      return "MEMBER_ACCOUNTS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FetchTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
