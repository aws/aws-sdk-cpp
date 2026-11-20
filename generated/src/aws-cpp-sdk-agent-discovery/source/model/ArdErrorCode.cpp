/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-discovery/model/ArdErrorCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentDiscovery {
namespace Model {
namespace ArdErrorCodeMapper {

static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("INVALID_ARGUMENT");
static const int UNAUTHENTICATED_HASH = HashingUtils::HashString("UNAUTHENTICATED");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NOT_FOUND");
static const int RATE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("RATE_LIMIT_EXCEEDED");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

ArdErrorCode GetArdErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVALID_ARGUMENT_HASH) {
    return ArdErrorCode::INVALID_ARGUMENT;
  } else if (hashCode == UNAUTHENTICATED_HASH) {
    return ArdErrorCode::UNAUTHENTICATED;
  } else if (hashCode == NOT_FOUND_HASH) {
    return ArdErrorCode::NOT_FOUND;
  } else if (hashCode == RATE_LIMIT_EXCEEDED_HASH) {
    return ArdErrorCode::RATE_LIMIT_EXCEEDED;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return ArdErrorCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ArdErrorCode>(hashCode);
  }

  return ArdErrorCode::NOT_SET;
}

Aws::String GetNameForArdErrorCode(ArdErrorCode enumValue) {
  switch (enumValue) {
    case ArdErrorCode::NOT_SET:
      return {};
    case ArdErrorCode::INVALID_ARGUMENT:
      return "INVALID_ARGUMENT";
    case ArdErrorCode::UNAUTHENTICATED:
      return "UNAUTHENTICATED";
    case ArdErrorCode::NOT_FOUND:
      return "NOT_FOUND";
    case ArdErrorCode::RATE_LIMIT_EXCEEDED:
      return "RATE_LIMIT_EXCEEDED";
    case ArdErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ArdErrorCodeMapper
}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
