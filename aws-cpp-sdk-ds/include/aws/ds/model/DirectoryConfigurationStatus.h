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
  enum class DirectoryConfigurationStatus
  {
    NOT_SET,
    Requested,
    Updating,
    Updated,
    Failed,
    Default
  };

namespace DirectoryConfigurationStatusMapper
{
AWS_DIRECTORYSERVICE_API DirectoryConfigurationStatus GetDirectoryConfigurationStatusForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForDirectoryConfigurationStatus(DirectoryConfigurationStatus value);
} // namespace DirectoryConfigurationStatusMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
