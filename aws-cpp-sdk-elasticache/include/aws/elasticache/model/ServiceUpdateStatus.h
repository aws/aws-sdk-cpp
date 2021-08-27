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
  enum class ServiceUpdateStatus
  {
    NOT_SET,
    available,
    cancelled,
    expired
  };

namespace ServiceUpdateStatusMapper
{
AWS_ELASTICACHE_API ServiceUpdateStatus GetServiceUpdateStatusForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForServiceUpdateStatus(ServiceUpdateStatus value);
} // namespace ServiceUpdateStatusMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
