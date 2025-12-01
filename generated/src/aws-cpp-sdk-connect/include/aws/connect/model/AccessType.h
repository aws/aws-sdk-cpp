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
enum class AccessType { NOT_SET, ALLOW };

namespace AccessTypeMapper {
AWS_CONNECT_API AccessType GetAccessTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAccessType(AccessType value);
}  // namespace AccessTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
