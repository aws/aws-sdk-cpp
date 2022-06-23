/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{
  enum class KafkaClusterEncryptionInTransitType
  {
    NOT_SET,
    PLAINTEXT,
    TLS
  };

namespace KafkaClusterEncryptionInTransitTypeMapper
{
AWS_KAFKACONNECT_API KafkaClusterEncryptionInTransitType GetKafkaClusterEncryptionInTransitTypeForName(const Aws::String& name);

AWS_KAFKACONNECT_API Aws::String GetNameForKafkaClusterEncryptionInTransitType(KafkaClusterEncryptionInTransitType value);
} // namespace KafkaClusterEncryptionInTransitTypeMapper
} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
