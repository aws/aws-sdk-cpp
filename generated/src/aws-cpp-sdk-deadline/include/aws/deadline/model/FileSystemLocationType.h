/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class FileSystemLocationType
  {
    NOT_SET,
    SHARED,
    LOCAL
  };

namespace FileSystemLocationTypeMapper
{
AWS_DEADLINE_API FileSystemLocationType GetFileSystemLocationTypeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForFileSystemLocationType(FileSystemLocationType value);
} // namespace FileSystemLocationTypeMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
