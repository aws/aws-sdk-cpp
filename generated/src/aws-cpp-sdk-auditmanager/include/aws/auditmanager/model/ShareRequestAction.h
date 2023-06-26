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
  enum class ShareRequestAction
  {
    NOT_SET,
    ACCEPT,
    DECLINE,
    REVOKE
  };

namespace ShareRequestActionMapper
{
AWS_AUDITMANAGER_API ShareRequestAction GetShareRequestActionForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForShareRequestAction(ShareRequestAction value);
} // namespace ShareRequestActionMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
