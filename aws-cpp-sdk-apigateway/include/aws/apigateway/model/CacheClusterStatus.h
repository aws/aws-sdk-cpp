/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{
  enum class CacheClusterStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    AVAILABLE,
    DELETE_IN_PROGRESS,
    NOT_AVAILABLE,
    FLUSH_IN_PROGRESS
  };

namespace CacheClusterStatusMapper
{
AWS_APIGATEWAY_API CacheClusterStatus GetCacheClusterStatusForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForCacheClusterStatus(CacheClusterStatus value);
} // namespace CacheClusterStatusMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
