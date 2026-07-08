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
enum class AuthCodeEntityType { NOT_SET, CUSTOMER_PROFILE };

namespace AuthCodeEntityTypeMapper {
AWS_CONNECT_API AuthCodeEntityType GetAuthCodeEntityTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAuthCodeEntityType(AuthCodeEntityType value);
}  // namespace AuthCodeEntityTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
