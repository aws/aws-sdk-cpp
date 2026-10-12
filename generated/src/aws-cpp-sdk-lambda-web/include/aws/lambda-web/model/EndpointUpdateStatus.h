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
enum class EndpointUpdateStatus { NOT_SET, InProgress, Successful, Failed };

namespace EndpointUpdateStatusMapper {
AWS_LAMBDAWEB_API EndpointUpdateStatus GetEndpointUpdateStatusForName(const Aws::String& name);

AWS_LAMBDAWEB_API Aws::String GetNameForEndpointUpdateStatus(EndpointUpdateStatus value);
}  // namespace EndpointUpdateStatusMapper
}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
