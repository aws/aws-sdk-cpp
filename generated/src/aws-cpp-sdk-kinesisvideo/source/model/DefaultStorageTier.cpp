/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kinesisvideo/model/DefaultStorageTier.h>

using namespace Aws::Utils;

namespace Aws {
namespace KinesisVideo {
namespace Model {
namespace DefaultStorageTierMapper {

static const int HOT_HASH = HashingUtils::HashString("HOT");
static const int WARM_HASH = HashingUtils::HashString("WARM");

DefaultStorageTier GetDefaultStorageTierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HOT_HASH) {
    return DefaultStorageTier::HOT;
  } else if (hashCode == WARM_HASH) {
    return DefaultStorageTier::WARM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DefaultStorageTier>(hashCode);
  }

  return DefaultStorageTier::NOT_SET;
}

Aws::String GetNameForDefaultStorageTier(DefaultStorageTier enumValue) {
  switch (enumValue) {
    case DefaultStorageTier::NOT_SET:
      return {};
    case DefaultStorageTier::HOT:
      return "HOT";
    case DefaultStorageTier::WARM:
      return "WARM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DefaultStorageTierMapper
}  // namespace Model
}  // namespace KinesisVideo
}  // namespace Aws
