/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIGateway {
namespace Model {
enum class ApiStatus { NOT_SET, UPDATING, AVAILABLE, PENDING, FAILED };

namespace ApiStatusMapper {
AWS_APIGATEWAY_API ApiStatus GetApiStatusForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForApiStatus(ApiStatus value);
}  // namespace ApiStatusMapper
}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
