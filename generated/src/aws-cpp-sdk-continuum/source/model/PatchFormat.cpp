/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/PatchFormat.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {
namespace PatchFormatMapper {

static const int GIT_MAILBOX_PATCH_HASH = HashingUtils::HashString("GIT_MAILBOX_PATCH");
static const int GIT_BINARY_DIFF_HASH = HashingUtils::HashString("GIT_BINARY_DIFF");
static const int GIT_DIFF_HASH = HashingUtils::HashString("GIT_DIFF");

PatchFormat GetPatchFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GIT_MAILBOX_PATCH_HASH) {
    return PatchFormat::GIT_MAILBOX_PATCH;
  } else if (hashCode == GIT_BINARY_DIFF_HASH) {
    return PatchFormat::GIT_BINARY_DIFF;
  } else if (hashCode == GIT_DIFF_HASH) {
    return PatchFormat::GIT_DIFF;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PatchFormat>(hashCode);
  }

  return PatchFormat::NOT_SET;
}

Aws::String GetNameForPatchFormat(PatchFormat enumValue) {
  switch (enumValue) {
    case PatchFormat::NOT_SET:
      return {};
    case PatchFormat::GIT_MAILBOX_PATCH:
      return "GIT_MAILBOX_PATCH";
    case PatchFormat::GIT_BINARY_DIFF:
      return "GIT_BINARY_DIFF";
    case PatchFormat::GIT_DIFF:
      return "GIT_DIFF";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PatchFormatMapper
}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
