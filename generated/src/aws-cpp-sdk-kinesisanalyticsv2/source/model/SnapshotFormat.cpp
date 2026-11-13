/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesisanalyticsv2/model/SnapshotFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {
namespace SnapshotFormatMapper {

static const int CANONICAL_HASH = HashingUtils::HashString("CANONICAL");

SnapshotFormat GetSnapshotFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CANONICAL_HASH) {
    return SnapshotFormat::CANONICAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SnapshotFormat>(hashCode);
  }

  return SnapshotFormat::NOT_SET;
}

Aws::String GetNameForSnapshotFormat(SnapshotFormat enumValue) {
  switch (enumValue) {
    case SnapshotFormat::NOT_SET:
      return {};
    case SnapshotFormat::CANONICAL:
      return "CANONICAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SnapshotFormatMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
