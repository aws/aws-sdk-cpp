/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{
  enum class ShardFilterType
  {
    NOT_SET,
    CHILD_SHARDS
  };

namespace ShardFilterTypeMapper
{
AWS_KEYSPACESSTREAMS_API ShardFilterType GetShardFilterTypeForName(const Aws::String& name);

AWS_KEYSPACESSTREAMS_API Aws::String GetNameForShardFilterType(ShardFilterType value);
} // namespace ShardFilterTypeMapper
} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
