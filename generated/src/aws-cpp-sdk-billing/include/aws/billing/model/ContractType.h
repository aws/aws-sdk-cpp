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
enum class ContractType { NOT_SET, Cross_Service, Service_Specific, Other };

namespace ContractTypeMapper {
AWS_BILLING_API ContractType GetContractTypeForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForContractType(ContractType value);
}  // namespace ContractTypeMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
