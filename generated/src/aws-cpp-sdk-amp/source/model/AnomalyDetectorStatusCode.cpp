/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/AnomalyDetectorStatusCode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace PrometheusService {
namespace Model {
namespace AnomalyDetectorStatusCodeMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
static const int DELETION_FAILED_HASH = HashingUtils::HashString("DELETION_FAILED");

AnomalyDetectorStatusCode GetAnomalyDetectorStatusCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return AnomalyDetectorStatusCode::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return AnomalyDetectorStatusCode::ACTIVE;
  } else if (hashCode == UPDATING_HASH) {
    return AnomalyDetectorStatusCode::UPDATING;
  } else if (hashCode == DELETING_HASH) {
    return AnomalyDetectorStatusCode::DELETING;
  } else if (hashCode == CREATION_FAILED_HASH) {
    return AnomalyDetectorStatusCode::CREATION_FAILED;
  } else if (hashCode == UPDATE_FAILED_HASH) {
    return AnomalyDetectorStatusCode::UPDATE_FAILED;
  } else if (hashCode == DELETION_FAILED_HASH) {
    return AnomalyDetectorStatusCode::DELETION_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AnomalyDetectorStatusCode>(hashCode);
  }

  return AnomalyDetectorStatusCode::NOT_SET;
}

Aws::String GetNameForAnomalyDetectorStatusCode(AnomalyDetectorStatusCode enumValue) {
  switch (enumValue) {
    case AnomalyDetectorStatusCode::NOT_SET:
      return {};
    case AnomalyDetectorStatusCode::CREATING:
      return "CREATING";
    case AnomalyDetectorStatusCode::ACTIVE:
      return "ACTIVE";
    case AnomalyDetectorStatusCode::UPDATING:
      return "UPDATING";
    case AnomalyDetectorStatusCode::DELETING:
      return "DELETING";
    case AnomalyDetectorStatusCode::CREATION_FAILED:
      return "CREATION_FAILED";
    case AnomalyDetectorStatusCode::UPDATE_FAILED:
      return "UPDATE_FAILED";
    case AnomalyDetectorStatusCode::DELETION_FAILED:
      return "DELETION_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AnomalyDetectorStatusCodeMapper
}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
