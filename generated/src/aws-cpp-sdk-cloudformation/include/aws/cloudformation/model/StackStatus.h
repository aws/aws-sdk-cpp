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
    UPDATE_FAILED,
    UPDATE_ROLLBACK_IN_PROGRESS,
    UPDATE_ROLLBACK_FAILED,
    UPDATE_ROLLBACK_COMPLETE_CLEANUP_IN_PROGRESS,
    UPDATE_ROLLBACK_COMPLETE,
    REVIEW_IN_PROGRESS,
    IMPORT_IN_PROGRESS,
    IMPORT_COMPLETE,
    IMPORT_ROLLBACK_IN_PROGRESS,
    IMPORT_ROLLBACK_FAILED,
    IMPORT_ROLLBACK_COMPLETE
  };

namespace StackStatusMapper
{
AWS_CLOUDFORMATION_API StackStatus GetStackStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackStatus(StackStatus value);
} // namespace StackStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
