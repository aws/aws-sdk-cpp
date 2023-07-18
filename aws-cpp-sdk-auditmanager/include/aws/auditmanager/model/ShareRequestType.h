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
  enum class ShareRequestType
  {
    NOT_SET,
    SENT,
    RECEIVED
  };

namespace ShareRequestTypeMapper
{
AWS_AUDITMANAGER_API ShareRequestType GetShareRequestTypeForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForShareRequestType(ShareRequestType value);
} // namespace ShareRequestTypeMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
