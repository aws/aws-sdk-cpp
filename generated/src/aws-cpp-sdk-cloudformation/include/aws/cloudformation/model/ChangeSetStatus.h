/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  enum class ChangeSetStatus
  {
    NOT_SET,
    CREATE_PENDING,
    CREATE_IN_PROGRESS,
    CREATE_COMPLETE,
    DELETE_PENDING,
    DELETE_IN_PROGRESS,
    DELETE_COMPLETE,
    DELETE_FAILED,
    FAILED
  };

namespace ChangeSetStatusMapper
{
AWS_CLOUDFORMATION_API ChangeSetStatus GetChangeSetStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForChangeSetStatus(ChangeSetStatus value);
} // namespace ChangeSetStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
