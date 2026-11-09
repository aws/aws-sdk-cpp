/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/glue/model/Status.h>

using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {
namespace StatusMapper {

static const int OBSERVING_HASH = HashingUtils::HashString("OBSERVING");
static const int WAITING_FOR_CONSENT_HASH = HashingUtils::HashString("WAITING_FOR_CONSENT");
static const int UPGRADING_HASH = HashingUtils::HashString("UPGRADING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");

Status GetStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OBSERVING_HASH) {
    return Status::OBSERVING;
  } else if (hashCode == WAITING_FOR_CONSENT_HASH) {
    return Status::WAITING_FOR_CONSENT;
  } else if (hashCode == UPGRADING_HASH) {
    return Status::UPGRADING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return Status::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return Status::FAILED;
  } else if (hashCode == TIMEOUT_HASH) {
    return Status::TIMEOUT;
  } else if (hashCode == STOPPED_HASH) {
    return Status::STOPPED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Status>(hashCode);
  }

  return Status::NOT_SET;
}

Aws::String GetNameForStatus(Status enumValue) {
  switch (enumValue) {
    case Status::NOT_SET:
      return {};
    case Status::OBSERVING:
      return "OBSERVING";
    case Status::WAITING_FOR_CONSENT:
      return "WAITING_FOR_CONSENT";
    case Status::UPGRADING:
      return "UPGRADING";
    case Status::SUCCEEDED:
      return "SUCCEEDED";
    case Status::FAILED:
      return "FAILED";
    case Status::TIMEOUT:
      return "TIMEOUT";
    case Status::STOPPED:
      return "STOPPED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StatusMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
