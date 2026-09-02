/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/ZeroSizePreference.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace ZeroSizePreferenceMapper {

static const int retain_HASH = HashingUtils::HashString("retain");
static const int default__HASH = HashingUtils::HashString("default");

ZeroSizePreference GetZeroSizePreferenceForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == retain_HASH) {
    return ZeroSizePreference::retain;
  } else if (hashCode == default__HASH) {
    return ZeroSizePreference::default_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ZeroSizePreference>(hashCode);
  }

  return ZeroSizePreference::NOT_SET;
}

Aws::String GetNameForZeroSizePreference(ZeroSizePreference enumValue) {
  switch (enumValue) {
    case ZeroSizePreference::NOT_SET:
      return {};
    case ZeroSizePreference::retain:
      return "retain";
    case ZeroSizePreference::default_:
      return "default";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ZeroSizePreferenceMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
