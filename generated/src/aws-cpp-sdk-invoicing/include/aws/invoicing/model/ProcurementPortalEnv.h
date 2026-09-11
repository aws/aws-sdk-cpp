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
enum class ProcurementPortalEnv { NOT_SET, PROD, TEST };

namespace ProcurementPortalEnvMapper {
AWS_INVOICING_API ProcurementPortalEnv GetProcurementPortalEnvForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForProcurementPortalEnv(ProcurementPortalEnv value);
}  // namespace ProcurementPortalEnvMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
