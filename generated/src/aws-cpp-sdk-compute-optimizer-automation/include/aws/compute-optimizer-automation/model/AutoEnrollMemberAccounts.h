/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
enum class AutoEnrollMemberAccounts { NOT_SET, All, None };

namespace AutoEnrollMemberAccountsMapper {
AWS_COMPUTEOPTIMIZERAUTOMATION_API AutoEnrollMemberAccounts GetAutoEnrollMemberAccountsForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String GetNameForAutoEnrollMemberAccounts(AutoEnrollMemberAccounts value);
}  // namespace AutoEnrollMemberAccountsMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
