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
  enum class ExportDestinationType
  {
    NOT_SET,
    S3
  };

namespace ExportDestinationTypeMapper
{
AWS_AUDITMANAGER_API ExportDestinationType GetExportDestinationTypeForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForExportDestinationType(ExportDestinationType value);
} // namespace ExportDestinationTypeMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
