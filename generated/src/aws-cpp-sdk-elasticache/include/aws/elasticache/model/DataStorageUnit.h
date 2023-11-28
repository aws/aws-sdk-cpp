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
  enum class DataStorageUnit
  {
    NOT_SET,
    GB
  };

namespace DataStorageUnitMapper
{
AWS_ELASTICACHE_API DataStorageUnit GetDataStorageUnitForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForDataStorageUnit(DataStorageUnit value);
} // namespace DataStorageUnitMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
