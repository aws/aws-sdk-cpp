/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class DirectorySize
  {
    NOT_SET,
    Small,
    Large
  };

namespace DirectorySizeMapper
{
AWS_DIRECTORYSERVICE_API DirectorySize GetDirectorySizeForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForDirectorySize(DirectorySize value);
} // namespace DirectorySizeMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
