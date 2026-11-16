/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/Health_EXPORTS.h>

namespace Aws {
namespace Health {
namespace Model {
enum class AccountTagType { NOT_SET, ACCOUNT_RESOURCE_TAG };

namespace AccountTagTypeMapper {
AWS_HEALTH_API AccountTagType GetAccountTagTypeForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForAccountTagType(AccountTagType value);
}  // namespace AccountTagTypeMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
