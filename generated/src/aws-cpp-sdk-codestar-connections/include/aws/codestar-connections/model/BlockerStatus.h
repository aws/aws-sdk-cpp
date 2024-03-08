/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeStarconnections
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
AWS_CODESTARCONNECTIONS_API BlockerStatus GetBlockerStatusForName(const Aws::String& name);

AWS_CODESTARCONNECTIONS_API Aws::String GetNameForBlockerStatus(BlockerStatus value);
} // namespace BlockerStatusMapper
} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
