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
  enum class ExecutionMode
  {
    NOT_SET,
    ON_DEMAND,
    SCHEDULED
  };

namespace ExecutionModeMapper
{
AWS_APPINTEGRATIONSSERVICE_API ExecutionMode GetExecutionModeForName(const Aws::String& name);

AWS_APPINTEGRATIONSSERVICE_API Aws::String GetNameForExecutionMode(ExecutionMode value);
} // namespace ExecutionModeMapper
} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
