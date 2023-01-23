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
  enum class LogDeliveryConfigurationStatus
  {
    NOT_SET,
    active,
    enabling,
    modifying,
    disabling,
    error
  };

namespace LogDeliveryConfigurationStatusMapper
{
AWS_ELASTICACHE_API LogDeliveryConfigurationStatus GetLogDeliveryConfigurationStatusForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForLogDeliveryConfigurationStatus(LogDeliveryConfigurationStatus value);
} // namespace LogDeliveryConfigurationStatusMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
