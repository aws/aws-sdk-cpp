/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/DynamicInstrumentationSignalType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {
namespace DynamicInstrumentationSignalTypeMapper {

static const int SNAPSHOT_HASH = HashingUtils::HashString("SNAPSHOT");

DynamicInstrumentationSignalType GetDynamicInstrumentationSignalTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SNAPSHOT_HASH) {
    return DynamicInstrumentationSignalType::SNAPSHOT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DynamicInstrumentationSignalType>(hashCode);
  }

  return DynamicInstrumentationSignalType::NOT_SET;
}

Aws::String GetNameForDynamicInstrumentationSignalType(DynamicInstrumentationSignalType enumValue) {
  switch (enumValue) {
    case DynamicInstrumentationSignalType::NOT_SET:
      return {};
    case DynamicInstrumentationSignalType::SNAPSHOT:
      return "SNAPSHOT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DynamicInstrumentationSignalTypeMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
