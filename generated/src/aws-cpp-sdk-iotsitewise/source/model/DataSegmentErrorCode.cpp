/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iotsitewise/model/DataSegmentErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {
namespace DataSegmentErrorCodeMapper {

static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");
static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LIMIT_EXCEEDED");
static const int CONFLICTING_OPERATION_HASH = HashingUtils::HashString("CONFLICTING_OPERATION");

DataSegmentErrorCode GetDataSegmentErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INTERNAL_FAILURE_HASH) {
    return DataSegmentErrorCode::INTERNAL_FAILURE;
  } else if (hashCode == VALIDATION_ERROR_HASH) {
    return DataSegmentErrorCode::VALIDATION_ERROR;
  } else if (hashCode == RESOURCE_NOT_FOUND_HASH) {
    return DataSegmentErrorCode::RESOURCE_NOT_FOUND;
  } else if (hashCode == LIMIT_EXCEEDED_HASH) {
    return DataSegmentErrorCode::LIMIT_EXCEEDED;
  } else if (hashCode == CONFLICTING_OPERATION_HASH) {
    return DataSegmentErrorCode::CONFLICTING_OPERATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataSegmentErrorCode>(hashCode);
  }

  return DataSegmentErrorCode::NOT_SET;
}

Aws::String GetNameForDataSegmentErrorCode(DataSegmentErrorCode enumValue) {
  switch (enumValue) {
    case DataSegmentErrorCode::NOT_SET:
      return {};
    case DataSegmentErrorCode::INTERNAL_FAILURE:
      return "INTERNAL_FAILURE";
    case DataSegmentErrorCode::VALIDATION_ERROR:
      return "VALIDATION_ERROR";
    case DataSegmentErrorCode::RESOURCE_NOT_FOUND:
      return "RESOURCE_NOT_FOUND";
    case DataSegmentErrorCode::LIMIT_EXCEEDED:
      return "LIMIT_EXCEEDED";
    case DataSegmentErrorCode::CONFLICTING_OPERATION:
      return "CONFLICTING_OPERATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataSegmentErrorCodeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
