/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppRunner
{
namespace Model
{
  enum class OperationStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    FAILED,
    SUCCEEDED,
    ROLLBACK_IN_PROGRESS,
    ROLLBACK_FAILED,
    ROLLBACK_SUCCEEDED
  };

namespace OperationStatusMapper
{
AWS_APPRUNNER_API OperationStatus GetOperationStatusForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForOperationStatus(OperationStatus value);
} // namespace OperationStatusMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
