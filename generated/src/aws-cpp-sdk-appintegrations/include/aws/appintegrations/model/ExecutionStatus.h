/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{
  enum class ExecutionStatus
  {
    NOT_SET,
    COMPLETED,
    IN_PROGRESS,
    FAILED
  };

namespace ExecutionStatusMapper
{
AWS_APPINTEGRATIONSSERVICE_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_APPINTEGRATIONSSERVICE_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
} // namespace ExecutionStatusMapper
} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
