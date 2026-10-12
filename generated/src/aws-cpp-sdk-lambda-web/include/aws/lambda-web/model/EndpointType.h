/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>

namespace Aws {
namespace LambdaWeb {
namespace Model {
enum class EndpointType { NOT_SET, HomeRegion, MultiRegion, PerRegion };

namespace EndpointTypeMapper {
AWS_LAMBDAWEB_API EndpointType GetEndpointTypeForName(const Aws::String& name);

AWS_LAMBDAWEB_API Aws::String GetNameForEndpointType(EndpointType value);
}  // namespace EndpointTypeMapper
}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
