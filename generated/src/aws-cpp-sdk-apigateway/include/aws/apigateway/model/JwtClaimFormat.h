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
enum class JwtClaimFormat { NOT_SET, SINGLE_STRING };

namespace JwtClaimFormatMapper {
AWS_APIGATEWAY_API JwtClaimFormat GetJwtClaimFormatForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForJwtClaimFormat(JwtClaimFormat value);
}  // namespace JwtClaimFormatMapper
}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
