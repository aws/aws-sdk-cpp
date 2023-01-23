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
  enum class EvidenceFinderEnablementStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    ENABLE_IN_PROGRESS,
    DISABLE_IN_PROGRESS
  };

namespace EvidenceFinderEnablementStatusMapper
{
AWS_AUDITMANAGER_API EvidenceFinderEnablementStatus GetEvidenceFinderEnablementStatusForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForEvidenceFinderEnablementStatus(EvidenceFinderEnablementStatus value);
} // namespace EvidenceFinderEnablementStatusMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
