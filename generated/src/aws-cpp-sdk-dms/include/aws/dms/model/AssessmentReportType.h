/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{
  enum class AssessmentReportType
  {
    NOT_SET,
    pdf,
    csv
  };

namespace AssessmentReportTypeMapper
{
AWS_DATABASEMIGRATIONSERVICE_API AssessmentReportType GetAssessmentReportTypeForName(const Aws::String& name);

AWS_DATABASEMIGRATIONSERVICE_API Aws::String GetNameForAssessmentReportType(AssessmentReportType value);
} // namespace AssessmentReportTypeMapper
} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
