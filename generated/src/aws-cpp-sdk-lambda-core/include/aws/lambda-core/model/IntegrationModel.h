/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

namespace Aws {
namespace LambdaCore {
namespace Model {
enum class IntegrationModel { NOT_SET, RuntimeAPI };

namespace IntegrationModelMapper {
AWS_LAMBDACORE_API IntegrationModel GetIntegrationModelForName(const Aws::String& name);

AWS_LAMBDACORE_API Aws::String GetNameForIntegrationModel(IntegrationModel value);
}  // namespace IntegrationModelMapper
}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
