/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/FIS_EXPORTS.h>

namespace Aws {
namespace FIS {
namespace Model {
enum class AccountTargeting { NOT_SET, single_account, multi_account };

namespace AccountTargetingMapper {
AWS_FIS_API AccountTargeting GetAccountTargetingForName(const Aws::String& name);

AWS_FIS_API Aws::String GetNameForAccountTargeting(AccountTargeting value);
}  // namespace AccountTargetingMapper
}  // namespace Model
}  // namespace FIS
}  // namespace Aws
