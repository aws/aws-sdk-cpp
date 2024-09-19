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
  enum class PullRequestComment
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace PullRequestCommentMapper
{
AWS_CODECONNECTIONS_API PullRequestComment GetPullRequestCommentForName(const Aws::String& name);

AWS_CODECONNECTIONS_API Aws::String GetNameForPullRequestComment(PullRequestComment value);
} // namespace PullRequestCommentMapper
} // namespace Model
} // namespace CodeConnections
} // namespace Aws
