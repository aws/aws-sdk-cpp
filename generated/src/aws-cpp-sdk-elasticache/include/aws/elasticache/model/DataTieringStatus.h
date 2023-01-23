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
  enum class DataTieringStatus
  {
    NOT_SET,
    enabled,
    disabled
  };

namespace DataTieringStatusMapper
{
AWS_ELASTICACHE_API DataTieringStatus GetDataTieringStatusForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForDataTieringStatus(DataTieringStatus value);
} // namespace DataTieringStatusMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
