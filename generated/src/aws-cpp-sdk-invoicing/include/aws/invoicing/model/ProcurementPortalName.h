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
enum class ProcurementPortalName { NOT_SET, SAP_BUSINESS_NETWORK, COUPA };

namespace ProcurementPortalNameMapper {
AWS_INVOICING_API ProcurementPortalName GetProcurementPortalNameForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForProcurementPortalName(ProcurementPortalName value);
}  // namespace ProcurementPortalNameMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
