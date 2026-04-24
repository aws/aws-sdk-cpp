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
enum class CapacityProviderState { NOT_SET, Pending, Active, Failed, Deleting };

namespace CapacityProviderStateMapper {
AWS_LAMBDA_API CapacityProviderState GetCapacityProviderStateForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForCapacityProviderState(CapacityProviderState value);
}  // namespace CapacityProviderStateMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
