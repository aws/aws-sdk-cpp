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
  enum class ClientBroker
  {
    NOT_SET,
    TLS,
    TLS_PLAINTEXT,
    PLAINTEXT
  };

namespace ClientBrokerMapper
{
AWS_KAFKA_API ClientBroker GetClientBrokerForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForClientBroker(ClientBroker value);
} // namespace ClientBrokerMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
