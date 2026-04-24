/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {
enum class Status { NOT_SET, AVAILABLE, IN_PROGRESS, FAILED };

namespace StatusMapper {
AWS_APIGATEWAYV2_API Status GetStatusForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForStatus(Status value);
}  // namespace StatusMapper
}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
