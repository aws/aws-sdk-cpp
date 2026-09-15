/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>

namespace Aws {
namespace DirectConnect {
namespace Model {
enum class ResiliencyModel { NOT_SET, maximum_resiliency, high_resiliency, basic_resiliency };

namespace ResiliencyModelMapper {
AWS_DIRECTCONNECT_API ResiliencyModel GetResiliencyModelForName(const Aws::String& name);

AWS_DIRECTCONNECT_API Aws::String GetNameForResiliencyModel(ResiliencyModel value);
}  // namespace ResiliencyModelMapper
}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
