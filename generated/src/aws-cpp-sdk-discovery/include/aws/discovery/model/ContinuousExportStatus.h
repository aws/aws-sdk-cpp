/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{
  enum class ContinuousExportStatus
  {
    NOT_SET,
    START_IN_PROGRESS,
    START_FAILED,
    ACTIVE,
    ERROR_,
    STOP_IN_PROGRESS,
    STOP_FAILED,
    INACTIVE
  };

namespace ContinuousExportStatusMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API ContinuousExportStatus GetContinuousExportStatusForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForContinuousExportStatus(ContinuousExportStatus value);
} // namespace ContinuousExportStatusMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
