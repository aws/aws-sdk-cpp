/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/Region.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{

namespace Kafka
{
namespace KafkaEndpoint
{
AWS_KAFKA_API Aws::String ForRegion(const Aws::String& regionName, bool useDualStack = false);
} // namespace KafkaEndpoint
} // namespace Kafka
} // namespace Aws
