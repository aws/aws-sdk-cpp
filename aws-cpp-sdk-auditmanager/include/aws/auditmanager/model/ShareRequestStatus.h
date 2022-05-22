/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AuditManager
{
namespace Model
{
  enum class ShareRequestStatus
  {
    NOT_SET,
    ACTIVE,
    REPLICATING,
    SHARED,
    EXPIRING,
    FAILED,
    EXPIRED,
    DECLINED,
    REVOKED
  };

namespace ShareRequestStatusMapper
{
AWS_AUDITMANAGER_API ShareRequestStatus GetShareRequestStatusForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForShareRequestStatus(ShareRequestStatus value);
} // namespace ShareRequestStatusMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
