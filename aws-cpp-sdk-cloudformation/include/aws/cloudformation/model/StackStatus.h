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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class StackStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    CREATE_COMPLETE,
    ROLLBACK_IN_PROGRESS,
    ROLLBACK_FAILED,
    ROLLBACK_COMPLETE,
    DELETE_IN_PROGRESS,
    DELETE_FAILED,
    DELETE_COMPLETE,
    UPDATE_IN_PROGRESS,
    UPDATE_COMPLETE_CLEANUP_IN_PROGRESS,
    UPDATE_COMPLETE,
    UPDATE_ROLLBACK_IN_PROGRESS,
    UPDATE_ROLLBACK_FAILED,
    UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS,
    UPDATE_ROLLBACK_COMPLETE,
    REVIEW_IN_PROGRESS
  };

namespace StackStatusMapper
{
AWS_CLOUDFORMATION_API StackStatus GetStackStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackStatus(StackStatus value);
} // namespace StackStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
