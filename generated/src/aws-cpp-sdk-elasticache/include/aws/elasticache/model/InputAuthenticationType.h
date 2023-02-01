/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{
  enum class InputAuthenticationType
  {
    NOT_SET,
    password,
    no_password_required,
    iam
  };

namespace InputAuthenticationTypeMapper
{
AWS_ELASTICACHE_API InputAuthenticationType GetInputAuthenticationTypeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForInputAuthenticationType(InputAuthenticationType value);
} // namespace InputAuthenticationTypeMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
