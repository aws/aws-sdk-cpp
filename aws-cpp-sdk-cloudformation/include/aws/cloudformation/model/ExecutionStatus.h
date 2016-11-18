﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  enum class ExecutionStatus
  {
    NOT_SET,
    UNAVAILABLE,
    AVAILABLE,
    EXECUTE_IN_PROGRESS,
    EXECUTE_COMPLETE,
    EXECUTE_FAILED,
    OBSOLETE
  };

namespace ExecutionStatusMapper
{
AWS_CLOUDFORMATION_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
} // namespace ExecutionStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
