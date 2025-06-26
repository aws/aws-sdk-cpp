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
  enum class ShardIteratorType
  {
    NOT_SET,
    TRIM_HORIZON,
    LATEST,
    AT_SEQUENCE_NUMBER,
    AFTER_SEQUENCE_NUMBER
  };

namespace ShardIteratorTypeMapper
{
AWS_KEYSPACESSTREAMS_API ShardIteratorType GetShardIteratorTypeForName(const Aws::String& name);

AWS_KEYSPACESSTREAMS_API Aws::String GetNameForShardIteratorType(ShardIteratorType value);
} // namespace ShardIteratorTypeMapper
} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
