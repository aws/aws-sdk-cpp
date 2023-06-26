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
  enum class ServiceUpdateSeverity
  {
    NOT_SET,
    critical,
    important,
    medium,
    low
  };

namespace ServiceUpdateSeverityMapper
{
AWS_ELASTICACHE_API ServiceUpdateSeverity GetServiceUpdateSeverityForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForServiceUpdateSeverity(ServiceUpdateSeverity value);
} // namespace ServiceUpdateSeverityMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
