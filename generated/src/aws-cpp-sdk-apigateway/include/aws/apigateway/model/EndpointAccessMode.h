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
enum class EndpointAccessMode { NOT_SET, BASIC, STRICT };

namespace EndpointAccessModeMapper {
AWS_APIGATEWAY_API EndpointAccessMode GetEndpointAccessModeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForEndpointAccessMode(EndpointAccessMode value);
}  // namespace EndpointAccessModeMapper
}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
