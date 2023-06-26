/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class InferredWorkloadType
  {
    NOT_SET,
    AmazonEmr,
    ApacheCassandra,
    ApacheHadoop,
    Memcached,
    Nginx,
    PostgreSql,
    Redis,
    Kafka,
    SQLServer
  };

namespace InferredWorkloadTypeMapper
{
AWS_COMPUTEOPTIMIZER_API InferredWorkloadType GetInferredWorkloadTypeForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForInferredWorkloadType(InferredWorkloadType value);
} // namespace InferredWorkloadTypeMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
