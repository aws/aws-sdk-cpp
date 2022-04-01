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
  enum class ClusterType
  {
    NOT_SET,
    PROVISIONED,
    SERVERLESS
  };

namespace ClusterTypeMapper
{
AWS_KAFKA_API ClusterType GetClusterTypeForName(const Aws::String& name);

AWS_KAFKA_API Aws::String GetNameForClusterType(ClusterType value);
} // namespace ClusterTypeMapper
} // namespace Model
} // namespace Kafka
} // namespace Aws
