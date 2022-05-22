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
  enum class ResourceStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    CREATE_COMPLETE,
    DELETE_IN_PROGRESS,
    DELETE_FAILED,
    DELETE_COMPLETE,
    DELETE_SKIPPED,
    UPDATE_IN_PROGRESS,
    UPDATE_FAILED,
    UPDATE_COMPLETE,
    IMPORT_FAILED,
    IMPORT_COMPLETE,
    IMPORT_IN_PROGRESS,
    IMPORT_ROLLBACK_IN_PROGRESS,
    IMPORT_ROLLBACK_FAILED,
    IMPORT_ROLLBACK_COMPLETE,
    UPDATE_ROLLBACK_IN_PROGRESS,
    UPDATE_ROLLBACK_COMPLETE,
    UPDATE_ROLLBACK_FAILED,
    ROLLBACK_IN_PROGRESS,
    ROLLBACK_COMPLETE,
    ROLLBACK_FAILED
  };

namespace ResourceStatusMapper
{
AWS_CLOUDFORMATION_API ResourceStatus GetResourceStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForResourceStatus(ResourceStatus value);
} // namespace ResourceStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
