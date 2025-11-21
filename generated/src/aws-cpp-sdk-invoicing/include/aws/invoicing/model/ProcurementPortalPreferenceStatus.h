/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>

namespace Aws {
namespace Invoicing {
namespace Model {
enum class ProcurementPortalPreferenceStatus {
  NOT_SET,
  PENDING_VERIFICATION,
  TEST_INITIALIZED,
  TEST_INITIALIZATION_FAILED,
  TEST_FAILED,
  ACTIVE,
  SUSPENDED
};

namespace ProcurementPortalPreferenceStatusMapper {
AWS_INVOICING_API ProcurementPortalPreferenceStatus GetProcurementPortalPreferenceStatusForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForProcurementPortalPreferenceStatus(ProcurementPortalPreferenceStatus value);
}  // namespace ProcurementPortalPreferenceStatusMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
