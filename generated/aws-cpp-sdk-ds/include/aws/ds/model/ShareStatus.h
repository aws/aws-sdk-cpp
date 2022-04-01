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
  enum class ShareStatus
  {
    NOT_SET,
    Shared,
    PendingAcceptance,
    Rejected,
    Rejecting,
    RejectFailed,
    Sharing,
    ShareFailed,
    Deleted,
    Deleting
  };

namespace ShareStatusMapper
{
AWS_DIRECTORYSERVICE_API ShareStatus GetShareStatusForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForShareStatus(ShareStatus value);
} // namespace ShareStatusMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
