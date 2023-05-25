/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Kafka
{
namespace Model
{
  enum class EnhancedMonitoring
  {
    NOT_SET,
    DEFAULT,
    PER_BROKER,
    PER_TOPIC_PER_BROKER,
    PER_TOPIC_PER_PARTITION
  };

namespace EnhancedMonitoringMapper
{
AWS_KAFKA_API EnhancedMonitoring GetEnhancedMonitoringForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForEnhancedMonitoring(EnhancedMonitoring value);
} // namespace EnhancedMonitoringMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
