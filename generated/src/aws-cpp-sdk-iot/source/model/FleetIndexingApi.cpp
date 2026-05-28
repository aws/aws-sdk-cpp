/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iot/model/FleetIndexingApi.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {
namespace FleetIndexingApiMapper {

static const int GET_THING_CONNECTIVITY_DATA_HASH = HashingUtils::HashString("GET_THING_CONNECTIVITY_DATA");

FleetIndexingApi GetFleetIndexingApiForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GET_THING_CONNECTIVITY_DATA_HASH) {
    return FleetIndexingApi::GET_THING_CONNECTIVITY_DATA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FleetIndexingApi>(hashCode);
  }

  return FleetIndexingApi::NOT_SET;
}

Aws::String GetNameForFleetIndexingApi(FleetIndexingApi enumValue) {
  switch (enumValue) {
    case FleetIndexingApi::NOT_SET:
      return {};
    case FleetIndexingApi::GET_THING_CONNECTIVITY_DATA:
      return "GET_THING_CONNECTIVITY_DATA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FleetIndexingApiMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
