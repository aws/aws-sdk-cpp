/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{
  enum class DestinationType
  {
    NOT_SET,
    cloudwatch_logs,
    kinesis_firehose
  };

namespace DestinationTypeMapper
{
AWS_ELASTICACHE_API DestinationType GetDestinationTypeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForDestinationType(DestinationType value);
} // namespace DestinationTypeMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
