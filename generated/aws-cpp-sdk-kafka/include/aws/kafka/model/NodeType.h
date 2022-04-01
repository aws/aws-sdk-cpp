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
  enum class NodeType
  {
    NOT_SET,
    BROKER
  };

namespace NodeTypeMapper
{
AWS_KAFKA_API NodeType GetNodeTypeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForNodeType(NodeType value);
} // namespace NodeTypeMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
