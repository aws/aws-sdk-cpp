/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{
  enum class ESWarmPartitionInstanceType
  {
    NOT_SET,
    ultrawarm1_medium_elasticsearch,
    ultrawarm1_large_elasticsearch
  };

namespace ESWarmPartitionInstanceTypeMapper
{
AWS_ELASTICSEARCHSERVICE_API ESWarmPartitionInstanceType GetESWarmPartitionInstanceTypeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForESWarmPartitionInstanceType(ESWarmPartitionInstanceType value);
} // namespace ESWarmPartitionInstanceTypeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
