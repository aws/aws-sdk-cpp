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
  enum class CacheClusterSize
  {
    NOT_SET,
    _0_5,
    _1_6,
    _6_1,
    _13_5,
    _28_4,
    _58_2,
    _118,
    _237
  };

namespace CacheClusterSizeMapper
{
AWS_APIGATEWAY_API CacheClusterSize GetCacheClusterSizeForName(const Aws::String& name);

AWS_APIGATEWAY_API Aws::String GetNameForCacheClusterSize(CacheClusterSize value);
} // namespace CacheClusterSizeMapper
} // namespace Model
} // namespace APIGateway
} // namespace Aws
