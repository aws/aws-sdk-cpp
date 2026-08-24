/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

namespace Aws {
namespace Kafka {
namespace Model {
enum class TokenEndpointAuthenticationMethod { NOT_SET, POST, BASIC, NONE };

namespace TokenEndpointAuthenticationMethodMapper {
AWS_KAFKA_API TokenEndpointAuthenticationMethod GetTokenEndpointAuthenticationMethodForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForTokenEndpointAuthenticationMethod(TokenEndpointAuthenticationMethod value);
}  // namespace TokenEndpointAuthenticationMethodMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
