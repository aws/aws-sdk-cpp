/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/gameliftstreams/model/StreamSessionStatusReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace GameLiftStreams {
namespace Model {
namespace StreamSessionStatusReasonMapper {

static const int internalError_HASH = HashingUtils::HashString("internalError");
static const int invalidSignalRequest_HASH = HashingUtils::HashString("invalidSignalRequest");
static const int placementTimeout_HASH = HashingUtils::HashString("placementTimeout");
static const int applicationLogS3DestinationError_HASH = HashingUtils::HashString("applicationLogS3DestinationError");
static const int applicationExit_HASH = HashingUtils::HashString("applicationExit");
static const int connectionTimeout_HASH = HashingUtils::HashString("connectionTimeout");
static const int reconnectionTimeout_HASH = HashingUtils::HashString("reconnectionTimeout");
static const int maxSessionLengthTimeout_HASH = HashingUtils::HashString("maxSessionLengthTimeout");
static const int idleTimeout_HASH = HashingUtils::HashString("idleTimeout");
static const int apiTerminated_HASH = HashingUtils::HashString("apiTerminated");

StreamSessionStatusReason GetStreamSessionStatusReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == internalError_HASH) {
    return StreamSessionStatusReason::internalError;
  } else if (hashCode == invalidSignalRequest_HASH) {
    return StreamSessionStatusReason::invalidSignalRequest;
  } else if (hashCode == placementTimeout_HASH) {
    return StreamSessionStatusReason::placementTimeout;
  } else if (hashCode == applicationLogS3DestinationError_HASH) {
    return StreamSessionStatusReason::applicationLogS3DestinationError;
  } else if (hashCode == applicationExit_HASH) {
    return StreamSessionStatusReason::applicationExit;
  } else if (hashCode == connectionTimeout_HASH) {
    return StreamSessionStatusReason::connectionTimeout;
  } else if (hashCode == reconnectionTimeout_HASH) {
    return StreamSessionStatusReason::reconnectionTimeout;
  } else if (hashCode == maxSessionLengthTimeout_HASH) {
    return StreamSessionStatusReason::maxSessionLengthTimeout;
  } else if (hashCode == idleTimeout_HASH) {
    return StreamSessionStatusReason::idleTimeout;
  } else if (hashCode == apiTerminated_HASH) {
    return StreamSessionStatusReason::apiTerminated;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StreamSessionStatusReason>(hashCode);
  }

  return StreamSessionStatusReason::NOT_SET;
}

Aws::String GetNameForStreamSessionStatusReason(StreamSessionStatusReason enumValue) {
  switch (enumValue) {
    case StreamSessionStatusReason::NOT_SET:
      return {};
    case StreamSessionStatusReason::internalError:
      return "internalError";
    case StreamSessionStatusReason::invalidSignalRequest:
      return "invalidSignalRequest";
    case StreamSessionStatusReason::placementTimeout:
      return "placementTimeout";
    case StreamSessionStatusReason::applicationLogS3DestinationError:
      return "applicationLogS3DestinationError";
    case StreamSessionStatusReason::applicationExit:
      return "applicationExit";
    case StreamSessionStatusReason::connectionTimeout:
      return "connectionTimeout";
    case StreamSessionStatusReason::reconnectionTimeout:
      return "reconnectionTimeout";
    case StreamSessionStatusReason::maxSessionLengthTimeout:
      return "maxSessionLengthTimeout";
    case StreamSessionStatusReason::idleTimeout:
      return "idleTimeout";
    case StreamSessionStatusReason::apiTerminated:
      return "apiTerminated";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StreamSessionStatusReasonMapper
}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
