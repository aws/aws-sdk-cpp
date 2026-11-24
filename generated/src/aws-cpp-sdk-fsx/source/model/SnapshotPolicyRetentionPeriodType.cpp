/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/fsx/model/SnapshotPolicyRetentionPeriodType.h>

using namespace Aws::Utils;

namespace Aws {
namespace FSx {
namespace Model {
namespace SnapshotPolicyRetentionPeriodTypeMapper {

static const int SECONDS_HASH = HashingUtils::HashString("SECONDS");
static const int MINUTES_HASH = HashingUtils::HashString("MINUTES");
static const int HOURS_HASH = HashingUtils::HashString("HOURS");
static const int DAYS_HASH = HashingUtils::HashString("DAYS");
static const int MONTHS_HASH = HashingUtils::HashString("MONTHS");
static const int YEARS_HASH = HashingUtils::HashString("YEARS");
static const int INFINITE_HASH = HashingUtils::HashString("INFINITE");

SnapshotPolicyRetentionPeriodType GetSnapshotPolicyRetentionPeriodTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SECONDS_HASH) {
    return SnapshotPolicyRetentionPeriodType::SECONDS;
  } else if (hashCode == MINUTES_HASH) {
    return SnapshotPolicyRetentionPeriodType::MINUTES;
  } else if (hashCode == HOURS_HASH) {
    return SnapshotPolicyRetentionPeriodType::HOURS;
  } else if (hashCode == DAYS_HASH) {
    return SnapshotPolicyRetentionPeriodType::DAYS;
  } else if (hashCode == MONTHS_HASH) {
    return SnapshotPolicyRetentionPeriodType::MONTHS;
  } else if (hashCode == YEARS_HASH) {
    return SnapshotPolicyRetentionPeriodType::YEARS;
  } else if (hashCode == INFINITE_HASH) {
    return SnapshotPolicyRetentionPeriodType::INFINITE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapshotPolicyRetentionPeriodType>(hashCode);
  }

  return SnapshotPolicyRetentionPeriodType::NOT_SET;
}

Aws::String GetNameForSnapshotPolicyRetentionPeriodType(SnapshotPolicyRetentionPeriodType enumValue) {
  switch (enumValue) {
    case SnapshotPolicyRetentionPeriodType::NOT_SET:
      return {};
    case SnapshotPolicyRetentionPeriodType::SECONDS:
      return "SECONDS";
    case SnapshotPolicyRetentionPeriodType::MINUTES:
      return "MINUTES";
    case SnapshotPolicyRetentionPeriodType::HOURS:
      return "HOURS";
    case SnapshotPolicyRetentionPeriodType::DAYS:
      return "DAYS";
    case SnapshotPolicyRetentionPeriodType::MONTHS:
      return "MONTHS";
    case SnapshotPolicyRetentionPeriodType::YEARS:
      return "YEARS";
    case SnapshotPolicyRetentionPeriodType::INFINITE:
      return "INFINITE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapshotPolicyRetentionPeriodTypeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
