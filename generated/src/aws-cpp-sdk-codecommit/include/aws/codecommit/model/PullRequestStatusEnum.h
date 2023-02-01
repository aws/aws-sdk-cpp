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
  enum class PullRequestStatusEnum
  {
    NOT_SET,
    OPEN,
    CLOSED
  };

namespace PullRequestStatusEnumMapper
{
AWS_CODECOMMIT_API PullRequestStatusEnum GetPullRequestStatusEnumForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForPullRequestStatusEnum(PullRequestStatusEnum value);
} // namespace PullRequestStatusEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
