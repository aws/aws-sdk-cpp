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
  enum class BrokerAZDistribution
  {
    NOT_SET,
    DEFAULT
  };

namespace BrokerAZDistributionMapper
{
AWS_KAFKA_API BrokerAZDistribution GetBrokerAZDistributionForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForBrokerAZDistribution(BrokerAZDistribution value);
} // namespace BrokerAZDistributionMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
