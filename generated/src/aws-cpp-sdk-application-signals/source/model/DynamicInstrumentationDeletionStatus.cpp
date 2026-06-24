/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/DynamicInstrumentationDeletionStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {
namespace DynamicInstrumentationDeletionStatusMapper {

static const int DELETED_HASH = HashingUtils::HashString("DELETED");

DynamicInstrumentationDeletionStatus GetDynamicInstrumentationDeletionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DELETED_HASH) {
    return DynamicInstrumentationDeletionStatus::DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DynamicInstrumentationDeletionStatus>(hashCode);
  }

  return DynamicInstrumentationDeletionStatus::NOT_SET;
}

Aws::String GetNameForDynamicInstrumentationDeletionStatus(DynamicInstrumentationDeletionStatus enumValue) {
  switch (enumValue) {
    case DynamicInstrumentationDeletionStatus::NOT_SET:
      return {};
    case DynamicInstrumentationDeletionStatus::DELETED:
      return "DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DynamicInstrumentationDeletionStatusMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
