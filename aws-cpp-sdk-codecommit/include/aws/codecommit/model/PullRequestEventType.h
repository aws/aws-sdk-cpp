/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{
  enum class PullRequestEventType
  {
    NOT_SET,
    PULL_REQUEST_CREATED,
    PULL_REQUEST_STATUS_CHANGED,
    PULL_REQUEST_SOURCE_REFERENCE_UPDATED,
    PULL_REQUEST_MERGE_STATE_CHANGED,
    PULL_REQUEST_APPROVAL_RULE_CREATED,
    PULL_REQUEST_APPROVAL_RULE_UPDATED,
    PULL_REQUEST_APPROVAL_RULE_DELETED,
    PULL_REQUEST_APPROVAL_RULE_OVERRIDDEN,
    PULL_REQUEST_APPROVAL_STATE_CHANGED
  };

namespace PullRequestEventTypeMapper
{
AWS_CODECOMMIT_API PullRequestEventType GetPullRequestEventTypeForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForPullRequestEventType(PullRequestEventType value);
} // namespace PullRequestEventTypeMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
