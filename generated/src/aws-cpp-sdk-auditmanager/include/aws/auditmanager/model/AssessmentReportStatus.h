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
  enum class AssessmentReportStatus
  {
    NOT_SET,
    COMPLETE,
    IN_PROGRESS,
    FAILED
  };

namespace AssessmentReportStatusMapper
{
AWS_AUDITMANAGER_API AssessmentReportStatus GetAssessmentReportStatusForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForAssessmentReportStatus(AssessmentReportStatus value);
} // namespace AssessmentReportStatusMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
