/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AssessmentEvidenceFolder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

AssessmentEvidenceFolder::AssessmentEvidenceFolder() : 
    m_nameHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_assessmentIdHasBeenSet(false),
    m_controlSetIdHasBeenSet(false),
    m_controlIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_totalEvidence(0),
    m_totalEvidenceHasBeenSet(false),
    m_assessmentReportSelectionCount(0),
    m_assessmentReportSelectionCountHasBeenSet(false),
    m_controlNameHasBeenSet(false),
    m_evidenceResourcesIncludedCount(0),
    m_evidenceResourcesIncludedCountHasBeenSet(false),
    m_evidenceByTypeConfigurationDataCount(0),
    m_evidenceByTypeConfigurationDataCountHasBeenSet(false),
    m_evidenceByTypeManualCount(0),
    m_evidenceByTypeManualCountHasBeenSet(false),
    m_evidenceByTypeComplianceCheckCount(0),
    m_evidenceByTypeComplianceCheckCountHasBeenSet(false),
    m_evidenceByTypeComplianceCheckIssuesCount(0),
    m_evidenceByTypeComplianceCheckIssuesCountHasBeenSet(false),
    m_evidenceByTypeUserActivityCount(0),
    m_evidenceByTypeUserActivityCountHasBeenSet(false),
    m_evidenceAwsServiceSourceCount(0),
    m_evidenceAwsServiceSourceCountHasBeenSet(false)
{
}

AssessmentEvidenceFolder::AssessmentEvidenceFolder(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_assessmentIdHasBeenSet(false),
    m_controlSetIdHasBeenSet(false),
    m_controlIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_totalEvidence(0),
    m_totalEvidenceHasBeenSet(false),
    m_assessmentReportSelectionCount(0),
    m_assessmentReportSelectionCountHasBeenSet(false),
    m_controlNameHasBeenSet(false),
    m_evidenceResourcesIncludedCount(0),
    m_evidenceResourcesIncludedCountHasBeenSet(false),
    m_evidenceByTypeConfigurationDataCount(0),
    m_evidenceByTypeConfigurationDataCountHasBeenSet(false),
    m_evidenceByTypeManualCount(0),
    m_evidenceByTypeManualCountHasBeenSet(false),
    m_evidenceByTypeComplianceCheckCount(0),
    m_evidenceByTypeComplianceCheckCountHasBeenSet(false),
    m_evidenceByTypeComplianceCheckIssuesCount(0),
    m_evidenceByTypeComplianceCheckIssuesCountHasBeenSet(false),
    m_evidenceByTypeUserActivityCount(0),
    m_evidenceByTypeUserActivityCountHasBeenSet(false),
    m_evidenceAwsServiceSourceCount(0),
    m_evidenceAwsServiceSourceCountHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentEvidenceFolder& AssessmentEvidenceFolder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("date"))
  {
    m_date = jsonValue.GetDouble("date");

    m_dateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentId"))
  {
    m_assessmentId = jsonValue.GetString("assessmentId");

    m_assessmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlSetId"))
  {
    m_controlSetId = jsonValue.GetString("controlSetId");

    m_controlSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlId"))
  {
    m_controlId = jsonValue.GetString("controlId");

    m_controlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSource"))
  {
    m_dataSource = jsonValue.GetString("dataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("author"))
  {
    m_author = jsonValue.GetString("author");

    m_authorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalEvidence"))
  {
    m_totalEvidence = jsonValue.GetInteger("totalEvidence");

    m_totalEvidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentReportSelectionCount"))
  {
    m_assessmentReportSelectionCount = jsonValue.GetInteger("assessmentReportSelectionCount");

    m_assessmentReportSelectionCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlName"))
  {
    m_controlName = jsonValue.GetString("controlName");

    m_controlNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceResourcesIncludedCount"))
  {
    m_evidenceResourcesIncludedCount = jsonValue.GetInteger("evidenceResourcesIncludedCount");

    m_evidenceResourcesIncludedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceByTypeConfigurationDataCount"))
  {
    m_evidenceByTypeConfigurationDataCount = jsonValue.GetInteger("evidenceByTypeConfigurationDataCount");

    m_evidenceByTypeConfigurationDataCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceByTypeManualCount"))
  {
    m_evidenceByTypeManualCount = jsonValue.GetInteger("evidenceByTypeManualCount");

    m_evidenceByTypeManualCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceByTypeComplianceCheckCount"))
  {
    m_evidenceByTypeComplianceCheckCount = jsonValue.GetInteger("evidenceByTypeComplianceCheckCount");

    m_evidenceByTypeComplianceCheckCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceByTypeComplianceCheckIssuesCount"))
  {
    m_evidenceByTypeComplianceCheckIssuesCount = jsonValue.GetInteger("evidenceByTypeComplianceCheckIssuesCount");

    m_evidenceByTypeComplianceCheckIssuesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceByTypeUserActivityCount"))
  {
    m_evidenceByTypeUserActivityCount = jsonValue.GetInteger("evidenceByTypeUserActivityCount");

    m_evidenceByTypeUserActivityCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceAwsServiceSourceCount"))
  {
    m_evidenceAwsServiceSourceCount = jsonValue.GetInteger("evidenceAwsServiceSourceCount");

    m_evidenceAwsServiceSourceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentEvidenceFolder::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_dateHasBeenSet)
  {
   payload.WithDouble("date", m_date.SecondsWithMSPrecision());
  }

  if(m_assessmentIdHasBeenSet)
  {
   payload.WithString("assessmentId", m_assessmentId);

  }

  if(m_controlSetIdHasBeenSet)
  {
   payload.WithString("controlSetId", m_controlSetId);

  }

  if(m_controlIdHasBeenSet)
  {
   payload.WithString("controlId", m_controlId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("dataSource", m_dataSource);

  }

  if(m_authorHasBeenSet)
  {
   payload.WithString("author", m_author);

  }

  if(m_totalEvidenceHasBeenSet)
  {
   payload.WithInteger("totalEvidence", m_totalEvidence);

  }

  if(m_assessmentReportSelectionCountHasBeenSet)
  {
   payload.WithInteger("assessmentReportSelectionCount", m_assessmentReportSelectionCount);

  }

  if(m_controlNameHasBeenSet)
  {
   payload.WithString("controlName", m_controlName);

  }

  if(m_evidenceResourcesIncludedCountHasBeenSet)
  {
   payload.WithInteger("evidenceResourcesIncludedCount", m_evidenceResourcesIncludedCount);

  }

  if(m_evidenceByTypeConfigurationDataCountHasBeenSet)
  {
   payload.WithInteger("evidenceByTypeConfigurationDataCount", m_evidenceByTypeConfigurationDataCount);

  }

  if(m_evidenceByTypeManualCountHasBeenSet)
  {
   payload.WithInteger("evidenceByTypeManualCount", m_evidenceByTypeManualCount);

  }

  if(m_evidenceByTypeComplianceCheckCountHasBeenSet)
  {
   payload.WithInteger("evidenceByTypeComplianceCheckCount", m_evidenceByTypeComplianceCheckCount);

  }

  if(m_evidenceByTypeComplianceCheckIssuesCountHasBeenSet)
  {
   payload.WithInteger("evidenceByTypeComplianceCheckIssuesCount", m_evidenceByTypeComplianceCheckIssuesCount);

  }

  if(m_evidenceByTypeUserActivityCountHasBeenSet)
  {
   payload.WithInteger("evidenceByTypeUserActivityCount", m_evidenceByTypeUserActivityCount);

  }

  if(m_evidenceAwsServiceSourceCountHasBeenSet)
  {
   payload.WithInteger("evidenceAwsServiceSourceCount", m_evidenceAwsServiceSourceCount);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
