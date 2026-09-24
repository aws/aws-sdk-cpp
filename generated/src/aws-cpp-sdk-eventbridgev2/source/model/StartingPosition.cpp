/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/StartingPosition.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace StartingPositionMapper {

static const int LATEST_HASH = HashingUtils::HashString("LATEST");
static const int POINT_IN_TIME_HASH = HashingUtils::HashString("POINT_IN_TIME");

StartingPosition GetStartingPositionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LATEST_HASH) {
    return StartingPosition::LATEST;
  } else if (hashCode == POINT_IN_TIME_HASH) {
    return StartingPosition::POINT_IN_TIME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StartingPosition>(hashCode);
  }

  return StartingPosition::NOT_SET;
}

Aws::String GetNameForStartingPosition(StartingPosition enumValue) {
  switch (enumValue) {
    case StartingPosition::NOT_SET:
      return {};
    case StartingPosition::LATEST:
      return "LATEST";
    case StartingPosition::POINT_IN_TIME:
      return "POINT_IN_TIME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StartingPositionMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
