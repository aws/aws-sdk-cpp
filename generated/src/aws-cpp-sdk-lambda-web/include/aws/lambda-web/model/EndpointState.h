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
enum class EndpointState { NOT_SET, Pending, Active, Failed, Deleting };

namespace EndpointStateMapper {
AWS_LAMBDAWEB_API EndpointState GetEndpointStateForName(const Aws::String& name);

AWS_LAMBDAWEB_API Aws::String GetNameForEndpointState(EndpointState value);
}  // namespace EndpointStateMapper
}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
