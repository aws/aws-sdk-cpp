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
enum class ProvisionedConcurrencyStatusEnum { NOT_SET, IN_PROGRESS, READY, FAILED };

namespace ProvisionedConcurrencyStatusEnumMapper {
AWS_LAMBDA_API ProvisionedConcurrencyStatusEnum GetProvisionedConcurrencyStatusEnumForName(const Aws::String& name);

AWS_LAMBDA_API Aws::String GetNameForProvisionedConcurrencyStatusEnum(ProvisionedConcurrencyStatusEnum value);
}  // namespace ProvisionedConcurrencyStatusEnumMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
