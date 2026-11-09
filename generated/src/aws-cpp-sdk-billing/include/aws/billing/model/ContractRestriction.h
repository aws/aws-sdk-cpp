/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Billing {
namespace Model {
enum class ContractRestriction { NOT_SET, ATTESTATION_SELF_SERVICE_BLOCKED };

namespace ContractRestrictionMapper {
AWS_BILLING_API ContractRestriction GetContractRestrictionForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForContractRestriction(ContractRestriction value);
}  // namespace ContractRestrictionMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
