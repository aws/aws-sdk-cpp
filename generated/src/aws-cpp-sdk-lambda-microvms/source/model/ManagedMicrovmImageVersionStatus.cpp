/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-microvms/model/ManagedMicrovmImageVersionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaMicrovms {
namespace Model {
namespace ManagedMicrovmImageVersionStatusMapper {

static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
static const int DEPRECATED_HASH = HashingUtils::HashString("DEPRECATED");
static const int RECALLED_HASH = HashingUtils::HashString("RECALLED");

ManagedMicrovmImageVersionStatus GetManagedMicrovmImageVersionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVAILABLE_HASH) {
    return ManagedMicrovmImageVersionStatus::AVAILABLE;
  } else if (hashCode == DEPRECATED_HASH) {
    return ManagedMicrovmImageVersionStatus::DEPRECATED;
  } else if (hashCode == RECALLED_HASH) {
    return ManagedMicrovmImageVersionStatus::RECALLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedMicrovmImageVersionStatus>(hashCode);
  }

  return ManagedMicrovmImageVersionStatus::NOT_SET;
}

Aws::String GetNameForManagedMicrovmImageVersionStatus(ManagedMicrovmImageVersionStatus enumValue) {
  switch (enumValue) {
    case ManagedMicrovmImageVersionStatus::NOT_SET:
      return {};
    case ManagedMicrovmImageVersionStatus::AVAILABLE:
      return "AVAILABLE";
    case ManagedMicrovmImageVersionStatus::DEPRECATED:
      return "DEPRECATED";
    case ManagedMicrovmImageVersionStatus::RECALLED:
      return "RECALLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedMicrovmImageVersionStatusMapper
}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
