/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class FileSystemMaintenanceOperation
  {
    NOT_SET,
    PATCHING,
    BACKING_UP
  };

namespace FileSystemMaintenanceOperationMapper
{
AWS_FSX_API FileSystemMaintenanceOperation GetFileSystemMaintenanceOperationForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForFileSystemMaintenanceOperation(FileSystemMaintenanceOperation value);
} // namespace FileSystemMaintenanceOperationMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
