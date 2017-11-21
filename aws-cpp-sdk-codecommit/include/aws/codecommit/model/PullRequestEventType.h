/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    PULL_REQUEST_MERGE_STATE_CHANGED
  };

namespace PullRequestEventTypeMapper
{
AWS_CODECOMMIT_API PullRequestEventType GetPullRequestEventTypeForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForPullRequestEventType(PullRequestEventType value);
} // namespace PullRequestEventTypeMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
