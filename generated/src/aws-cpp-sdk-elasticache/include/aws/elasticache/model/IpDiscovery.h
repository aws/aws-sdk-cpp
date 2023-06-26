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
  enum class IpDiscovery
  {
    NOT_SET,
    ipv4,
    ipv6
  };

namespace IpDiscoveryMapper
{
AWS_ELASTICACHE_API IpDiscovery GetIpDiscoveryForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForIpDiscovery(IpDiscovery value);
} // namespace IpDiscoveryMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
