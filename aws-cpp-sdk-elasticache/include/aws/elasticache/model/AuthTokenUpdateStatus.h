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
  enum class AuthTokenUpdateStatus
  {
    NOT_SET,
    SETTING,
    ROTATING
  };

namespace AuthTokenUpdateStatusMapper
{
AWS_ELASTICACHE_API AuthTokenUpdateStatus GetAuthTokenUpdateStatusForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForAuthTokenUpdateStatus(AuthTokenUpdateStatus value);
} // namespace AuthTokenUpdateStatusMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
