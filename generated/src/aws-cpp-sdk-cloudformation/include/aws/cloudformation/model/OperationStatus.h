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
  enum class OperationStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    SUCCESS,
    FAILED
  };

namespace OperationStatusMapper
{
AWS_CLOUDFORMATION_API OperationStatus GetOperationStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForOperationStatus(OperationStatus value);
} // namespace OperationStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
