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
  enum class FileSystemType
  {
    NOT_SET,
    WINDOWS,
    LUSTRE
  };

namespace FileSystemTypeMapper
{
AWS_FSX_API FileSystemType GetFileSystemTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForFileSystemType(FileSystemType value);
} // namespace FileSystemTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
