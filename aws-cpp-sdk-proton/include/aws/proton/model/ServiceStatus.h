/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Proton
{
namespace Model
{
  enum class ServiceStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_FAILED_CLEANUP_IN_PROGRESS,
    CREATE_FAILED_CLEANUP_COMPLETE,
    CREATE_FAILED_CLEANUP_FAILED,
    CREATE_FAILED,
    ACTIVE,
    DELETE_IN_PROGRESS,
    DELETE_FAILED,
    UPDATE_IN_PROGRESS,
    UPDATE_FAILED_CLEANUP_IN_PROGRESS,
    UPDATE_FAILED_CLEANUP_COMPLETE,
    UPDATE_FAILED_CLEANUP_FAILED,
    UPDATE_FAILED,
    UPDATE_COMPLETE_CLEANUP_FAILED
  };

namespace ServiceStatusMapper
{
AWS_PROTON_API ServiceStatus GetServiceStatusForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForServiceStatus(ServiceStatus value);
} // namespace ServiceStatusMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
