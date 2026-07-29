/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/gameliftstreams/model/StreamUrlStatusReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace GameLiftStreams {
namespace Model {
namespace StreamUrlStatusReasonMapper {

static const int userRevoked_HASH = HashingUtils::HashString("userRevoked");
static const int revokedAndTerminatingSessions_HASH = HashingUtils::HashString("revokedAndTerminatingSessions");
static const int revokedAndSessionsTerminated_HASH = HashingUtils::HashString("revokedAndSessionsTerminated");
static const int streamGroupDeleted_HASH = HashingUtils::HashString("streamGroupDeleted");
static const int applicationDeleted_HASH = HashingUtils::HashString("applicationDeleted");

StreamUrlStatusReason GetStreamUrlStatusReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == userRevoked_HASH) {
    return StreamUrlStatusReason::userRevoked;
  } else if (hashCode == revokedAndTerminatingSessions_HASH) {
    return StreamUrlStatusReason::revokedAndTerminatingSessions;
  } else if (hashCode == revokedAndSessionsTerminated_HASH) {
    return StreamUrlStatusReason::revokedAndSessionsTerminated;
  } else if (hashCode == streamGroupDeleted_HASH) {
    return StreamUrlStatusReason::streamGroupDeleted;
  } else if (hashCode == applicationDeleted_HASH) {
    return StreamUrlStatusReason::applicationDeleted;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StreamUrlStatusReason>(hashCode);
  }

  return StreamUrlStatusReason::NOT_SET;
}

Aws::String GetNameForStreamUrlStatusReason(StreamUrlStatusReason enumValue) {
  switch (enumValue) {
    case StreamUrlStatusReason::NOT_SET:
      return {};
    case StreamUrlStatusReason::userRevoked:
      return "userRevoked";
    case StreamUrlStatusReason::revokedAndTerminatingSessions:
      return "revokedAndTerminatingSessions";
    case StreamUrlStatusReason::revokedAndSessionsTerminated:
      return "revokedAndSessionsTerminated";
    case StreamUrlStatusReason::streamGroupDeleted:
      return "streamGroupDeleted";
    case StreamUrlStatusReason::applicationDeleted:
      return "applicationDeleted";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StreamUrlStatusReasonMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
