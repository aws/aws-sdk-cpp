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
  enum class AssessmentReportDestinationType
  {
    NOT_SET,
    S3
  };

namespace AssessmentReportDestinationTypeMapper
{
AWS_AUDITMANAGER_API AssessmentReportDestinationType GetAssessmentReportDestinationTypeForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForAssessmentReportDestinationType(AssessmentReportDestinationType value);
} // namespace AssessmentReportDestinationTypeMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
