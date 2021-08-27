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
  enum class KafkaVersionStatus
  {
    NOT_SET,
    ACTIVE,
    DEPRECATED
  };

namespace KafkaVersionStatusMapper
{
AWS_KAFKA_API KafkaVersionStatus GetKafkaVersionStatusForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForKafkaVersionStatus(KafkaVersionStatus value);
} // namespace KafkaVersionStatusMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
