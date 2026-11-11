/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesisanalyticsv2/model/SnapshotInitiator.h>

using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {
namespace SnapshotInitiatorMapper {

static const int USER_HASH = HashingUtils::HashString("USER");
static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");

SnapshotInitiator GetSnapshotInitiatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USER_HASH) {
    return SnapshotInitiator::USER;
  } else if (hashCode == SYSTEM_HASH) {
    return SnapshotInitiator::SYSTEM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapshotInitiator>(hashCode);
  }

  return SnapshotInitiator::NOT_SET;
}

Aws::String GetNameForSnapshotInitiator(SnapshotInitiator enumValue) {
  switch (enumValue) {
    case SnapshotInitiator::NOT_SET:
      return {};
    case SnapshotInitiator::USER:
      return "USER";
    case SnapshotInitiator::SYSTEM:
      return "SYSTEM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapshotInitiatorMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
