/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/gameliftstreams/model/RevocationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GameLiftStreams {
namespace Model {
namespace RevocationModeMapper {

static const int REVOKE_URL_HASH = HashingUtils::HashString("REVOKE_URL");
static const int REVOKE_AND_TERMINATE_SESSIONS_HASH = HashingUtils::HashString("REVOKE_AND_TERMINATE_SESSIONS");

RevocationMode GetRevocationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REVOKE_URL_HASH) {
    return RevocationMode::REVOKE_URL;
  } else if (hashCode == REVOKE_AND_TERMINATE_SESSIONS_HASH) {
    return RevocationMode::REVOKE_AND_TERMINATE_SESSIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RevocationMode>(hashCode);
  }

  return RevocationMode::NOT_SET;
}

Aws::String GetNameForRevocationMode(RevocationMode enumValue) {
  switch (enumValue) {
    case RevocationMode::NOT_SET:
      return {};
    case RevocationMode::REVOKE_URL:
      return "REVOKE_URL";
    case RevocationMode::REVOKE_AND_TERMINATE_SESSIONS:
      return "REVOKE_AND_TERMINATE_SESSIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RevocationModeMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
