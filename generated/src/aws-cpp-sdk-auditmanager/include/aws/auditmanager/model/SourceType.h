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
  enum class SourceType
  {
    NOT_SET,
    AWS_Cloudtrail,
    AWS_Config,
    AWS_Security_Hub,
    AWS_API_Call,
    MANUAL
  };

namespace SourceTypeMapper
{
AWS_AUDITMANAGER_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
