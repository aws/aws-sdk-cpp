/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>

namespace Aws {
namespace ElastiCache {
namespace Model {
enum class AuthenticationType { NOT_SET, password, no_password, iam };

namespace AuthenticationTypeMapper {
AWS_ELASTICACHE_API AuthenticationType GetAuthenticationTypeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForAuthenticationType(AuthenticationType value);
}  // namespace AuthenticationTypeMapper
}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
