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
  enum class KafkaClusterClientAuthenticationType
  {
    NOT_SET,
    NONE,
    IAM
  };

namespace KafkaClusterClientAuthenticationTypeMapper
{
AWS_KAFKACONNECT_API KafkaClusterClientAuthenticationType GetKafkaClusterClientAuthenticationTypeForName(const Aws::String& name);

AWS_KAFKACONNECT_API Aws::String GetNameForKafkaClusterClientAuthenticationType(KafkaClusterClientAuthenticationType value);
} // namespace KafkaClusterClientAuthenticationTypeMapper
} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
