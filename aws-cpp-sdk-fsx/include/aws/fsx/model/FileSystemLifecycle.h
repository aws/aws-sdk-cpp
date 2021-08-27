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
  enum class FileSystemLifecycle
  {
    NOT_SET,
    AVAILABLE,
    CREATING,
    FAILED,
    DELETING,
    MISCONFIGURED,
    UPDATING
  };

namespace FileSystemLifecycleMapper
{
AWS_FSX_API FileSystemLifecycle GetFileSystemLifecycleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForFileSystemLifecycle(FileSystemLifecycle value);
} // namespace FileSystemLifecycleMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
