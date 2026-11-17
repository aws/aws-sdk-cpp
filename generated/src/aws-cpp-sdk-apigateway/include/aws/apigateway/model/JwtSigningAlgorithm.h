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
enum class JwtSigningAlgorithm { NOT_SET, RS256, RS384, RS512, ES256, ES384, ES512 };

namespace JwtSigningAlgorithmMapper {
AWS_APIGATEWAY_API JwtSigningAlgorithm GetJwtSigningAlgorithmForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForJwtSigningAlgorithm(JwtSigningAlgorithm value);
}  // namespace JwtSigningAlgorithmMapper
}  // namespace Model
}  // namespace APIGateway
}  // namespace Aws
