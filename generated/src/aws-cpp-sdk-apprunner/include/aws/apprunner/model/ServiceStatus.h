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
  enum class ServiceStatus
  {
    NOT_SET,
    CREATE_FAILED,
    RUNNING,
    DELETED,
    DELETE_FAILED,
    PAUSED,
    OPERATION_IN_PROGRESS
  };

namespace ServiceStatusMapper
{
AWS_APPRUNNER_API ServiceStatus GetServiceStatusForName(const Aws::String& name);

AWS_APPRUNNER_API Aws::String GetNameForServiceStatus(ServiceStatus value);
} // namespace ServiceStatusMapper
} // namespace Model
} // namespace AppRunner
} // namespace Aws
