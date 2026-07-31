/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/ConnectionStartPoint.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Model {
namespace ConnectionStartPointMapper {

static const int CONNECTED_TO_SYSTEM_HASH = HashingUtils::HashString("CONNECTED_TO_SYSTEM");
static const int GREETING_START_HASH = HashingUtils::HashString("GREETING_START");
static const int GREETING_END_HASH = HashingUtils::HashString("GREETING_END");

ConnectionStartPoint GetConnectionStartPointForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONNECTED_TO_SYSTEM_HASH) {
    return ConnectionStartPoint::CONNECTED_TO_SYSTEM;
  } else if (hashCode == GREETING_START_HASH) {
    return ConnectionStartPoint::GREETING_START;
  } else if (hashCode == GREETING_END_HASH) {
    return ConnectionStartPoint::GREETING_END;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectionStartPoint>(hashCode);
  }

  return ConnectionStartPoint::NOT_SET;
}

Aws::String GetNameForConnectionStartPoint(ConnectionStartPoint enumValue) {
  switch (enumValue) {
    case ConnectionStartPoint::NOT_SET:
      return {};
    case ConnectionStartPoint::CONNECTED_TO_SYSTEM:
      return "CONNECTED_TO_SYSTEM";
    case ConnectionStartPoint::GREETING_START:
      return "GREETING_START";
    case ConnectionStartPoint::GREETING_END:
      return "GREETING_END";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectionStartPointMapper
}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
