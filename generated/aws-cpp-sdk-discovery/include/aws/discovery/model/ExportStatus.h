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
  enum class ExportStatus
  {
    NOT_SET,
    FAILED,
    SUCCEEDED,
    IN_PROGRESS
  };

namespace ExportStatusMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API ExportStatus GetExportStatusForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForExportStatus(ExportStatus value);
} // namespace ExportStatusMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
