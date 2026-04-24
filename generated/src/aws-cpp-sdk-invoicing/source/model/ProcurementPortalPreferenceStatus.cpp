/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/ProcurementPortalPreferenceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace ProcurementPortalPreferenceStatusMapper {

static const int PENDING_VERIFICATION_HASH = HashingUtils::HashString("PENDING_VERIFICATION");
static const int TEST_INITIALIZED_HASH = HashingUtils::HashString("TEST_INITIALIZED");
static const int TEST_INITIALIZATION_FAILED_HASH = HashingUtils::HashString("TEST_INITIALIZATION_FAILED");
static const int TEST_FAILED_HASH = HashingUtils::HashString("TEST_FAILED");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");

ProcurementPortalPreferenceStatus GetProcurementPortalPreferenceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_VERIFICATION_HASH) {
    return ProcurementPortalPreferenceStatus::PENDING_VERIFICATION;
  } else if (hashCode == TEST_INITIALIZED_HASH) {
    return ProcurementPortalPreferenceStatus::TEST_INITIALIZED;
  } else if (hashCode == TEST_INITIALIZATION_FAILED_HASH) {
    return ProcurementPortalPreferenceStatus::TEST_INITIALIZATION_FAILED;
  } else if (hashCode == TEST_FAILED_HASH) {
    return ProcurementPortalPreferenceStatus::TEST_FAILED;
  } else if (hashCode == ACTIVE_HASH) {
    return ProcurementPortalPreferenceStatus::ACTIVE;
  } else if (hashCode == SUSPENDED_HASH) {
    return ProcurementPortalPreferenceStatus::SUSPENDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProcurementPortalPreferenceStatus>(hashCode);
  }

  return ProcurementPortalPreferenceStatus::NOT_SET;
}

Aws::String GetNameForProcurementPortalPreferenceStatus(ProcurementPortalPreferenceStatus enumValue) {
  switch (enumValue) {
    case ProcurementPortalPreferenceStatus::NOT_SET:
      return {};
    case ProcurementPortalPreferenceStatus::PENDING_VERIFICATION:
      return "PENDING_VERIFICATION";
    case ProcurementPortalPreferenceStatus::TEST_INITIALIZED:
      return "TEST_INITIALIZED";
    case ProcurementPortalPreferenceStatus::TEST_INITIALIZATION_FAILED:
      return "TEST_INITIALIZATION_FAILED";
    case ProcurementPortalPreferenceStatus::TEST_FAILED:
      return "TEST_FAILED";
    case ProcurementPortalPreferenceStatus::ACTIVE:
      return "ACTIVE";
    case ProcurementPortalPreferenceStatus::SUSPENDED:
      return "SUSPENDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProcurementPortalPreferenceStatusMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
