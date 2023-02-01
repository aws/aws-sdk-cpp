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
  enum class EvidenceFinderBackfillStatus
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    COMPLETED
  };

namespace EvidenceFinderBackfillStatusMapper
{
AWS_AUDITMANAGER_API EvidenceFinderBackfillStatus GetEvidenceFinderBackfillStatusForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForEvidenceFinderBackfillStatus(EvidenceFinderBackfillStatus value);
} // namespace EvidenceFinderBackfillStatusMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
