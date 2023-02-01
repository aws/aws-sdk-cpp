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
  enum class UpdateStatus
  {
    NOT_SET,
    Updated,
    Updating,
    UpdateFailed
  };

namespace UpdateStatusMapper
{
AWS_DIRECTORYSERVICE_API UpdateStatus GetUpdateStatusForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForUpdateStatus(UpdateStatus value);
} // namespace UpdateStatusMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
