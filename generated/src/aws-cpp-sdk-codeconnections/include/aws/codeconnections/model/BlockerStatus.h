/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{
  enum class BlockerStatus
  {
    NOT_SET,
    ACTIVE,
    RESOLVED
  };

namespace BlockerStatusMapper
{
AWS_CODECONNECTIONS_API BlockerStatus GetBlockerStatusForName(const Aws::String& name);

AWS_CODECONNECTIONS_API Aws::String GetNameForBlockerStatus(BlockerStatus value);
} // namespace BlockerStatusMapper
} // namespace Model
} // namespace CodeConnections
} // namespace Aws
