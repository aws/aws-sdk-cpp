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
  enum class AuthTokenUpdateStrategyType
  {
    NOT_SET,
    SET,
    ROTATE,
    DELETE_
  };

namespace AuthTokenUpdateStrategyTypeMapper
{
AWS_ELASTICACHE_API AuthTokenUpdateStrategyType GetAuthTokenUpdateStrategyTypeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForAuthTokenUpdateStrategyType(AuthTokenUpdateStrategyType value);
} // namespace AuthTokenUpdateStrategyTypeMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
