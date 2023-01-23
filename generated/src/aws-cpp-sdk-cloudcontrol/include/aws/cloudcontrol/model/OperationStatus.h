/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudControlApi
{
namespace Model
{
  enum class OperationStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    SUCCESS,
    FAILED,
    CANCEL_IN_PROGRESS,
    CANCEL_COMPLETE
  };

namespace OperationStatusMapper
{
AWS_CLOUDCONTROLAPI_API OperationStatus GetOperationStatusForName(const Aws::String& name);

AWS_CLOUDCONTROLAPI_API Aws::String GetNameForOperationStatus(OperationStatus value);
} // namespace OperationStatusMapper
} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
