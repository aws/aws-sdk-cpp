/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/OnDemandScanStatusReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace OnDemandScanStatusReasonMapper {

static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
static const int STORAGE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("STORAGE_LIMIT_EXCEEDED");
static const int EXTRACTION_COLLECTION_TIME_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("EXTRACTION_COLLECTION_TIME_LIMIT_EXCEEDED");
static const int UNSUPPORTED_OS_HASH = HashingUtils::HashString("UNSUPPORTED_OS");
static const int RESOURCE_TERMINATED_HASH = HashingUtils::HashString("RESOURCE_TERMINATED");

OnDemandScanStatusReason GetOnDemandScanStatusReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCESS_DENIED_HASH) {
    return OnDemandScanStatusReason::ACCESS_DENIED;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return OnDemandScanStatusReason::INTERNAL_ERROR;
  } else if (hashCode == STORAGE_LIMIT_EXCEEDED_HASH) {
    return OnDemandScanStatusReason::STORAGE_LIMIT_EXCEEDED;
  } else if (hashCode == EXTRACTION_COLLECTION_TIME_LIMIT_EXCEEDED_HASH) {
    return OnDemandScanStatusReason::EXTRACTION_COLLECTION_TIME_LIMIT_EXCEEDED;
  } else if (hashCode == UNSUPPORTED_OS_HASH) {
    return OnDemandScanStatusReason::UNSUPPORTED_OS;
  } else if (hashCode == RESOURCE_TERMINATED_HASH) {
    return OnDemandScanStatusReason::RESOURCE_TERMINATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OnDemandScanStatusReason>(hashCode);
  }

  return OnDemandScanStatusReason::NOT_SET;
}

Aws::String GetNameForOnDemandScanStatusReason(OnDemandScanStatusReason enumValue) {
  switch (enumValue) {
    case OnDemandScanStatusReason::NOT_SET:
      return {};
    case OnDemandScanStatusReason::ACCESS_DENIED:
      return "ACCESS_DENIED";
    case OnDemandScanStatusReason::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    case OnDemandScanStatusReason::STORAGE_LIMIT_EXCEEDED:
      return "STORAGE_LIMIT_EXCEEDED";
    case OnDemandScanStatusReason::EXTRACTION_COLLECTION_TIME_LIMIT_EXCEEDED:
      return "EXTRACTION_COLLECTION_TIME_LIMIT_EXCEEDED";
    case OnDemandScanStatusReason::UNSUPPORTED_OS:
      return "UNSUPPORTED_OS";
    case OnDemandScanStatusReason::RESOURCE_TERMINATED:
      return "RESOURCE_TERMINATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OnDemandScanStatusReasonMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
