/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Lambda {
namespace Model {
enum class TenantIsolationMode { NOT_SET, PER_TENANT };

namespace TenantIsolationModeMapper {
AWS_LAMBDA_API TenantIsolationMode GetTenantIsolationModeForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForTenantIsolationMode(TenantIsolationMode value);
}  // namespace TenantIsolationModeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
