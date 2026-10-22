/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class SecurityProfileType { NOT_SET, AWS_MANAGED, CUSTOMER_MANAGED };

namespace SecurityProfileTypeMapper {
AWS_CONNECT_API SecurityProfileType GetSecurityProfileTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForSecurityProfileType(SecurityProfileType value);
}  // namespace SecurityProfileTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
