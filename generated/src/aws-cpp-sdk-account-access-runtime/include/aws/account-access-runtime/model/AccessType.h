/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AccountAccessRuntime {
namespace Model {
enum class AccessType { NOT_SET, PROGRAMMATIC_ACCESS };

namespace AccessTypeMapper {
AWS_ACCOUNTACCESSRUNTIME_API AccessType GetAccessTypeForName(const Aws::String& name);

AWS_ACCOUNTACCESSRUNTIME_API Aws::String GetNameForAccessType(AccessType value);
}  // namespace AccessTypeMapper
}  // namespace Model
}  // namespace AccountAccessRuntime
}  // namespace Aws
