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
  enum class AssessmentStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace AssessmentStatusMapper
{
AWS_AUDITMANAGER_API AssessmentStatus GetAssessmentStatusForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForAssessmentStatus(AssessmentStatus value);
} // namespace AssessmentStatusMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
