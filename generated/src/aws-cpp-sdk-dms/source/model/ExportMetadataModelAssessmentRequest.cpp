/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ExportMetadataModelAssessmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExportMetadataModelAssessmentRequest::ExportMetadataModelAssessmentRequest() : 
    m_migrationProjectIdentifierHasBeenSet(false),
    m_selectionRulesHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_assessmentReportTypesHasBeenSet(false)
{
}

Aws::String ExportMetadataModelAssessmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_migrationProjectIdentifierHasBeenSet)
  {
   payload.WithString("MigrationProjectIdentifier", m_migrationProjectIdentifier);

  }

  if(m_selectionRulesHasBeenSet)
  {
   payload.WithString("SelectionRules", m_selectionRules);

  }

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("FileName", m_fileName);

  }

  if(m_assessmentReportTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assessmentReportTypesJsonList(m_assessmentReportTypes.size());
   for(unsigned assessmentReportTypesIndex = 0; assessmentReportTypesIndex < assessmentReportTypesJsonList.GetLength(); ++assessmentReportTypesIndex)
   {
     assessmentReportTypesJsonList[assessmentReportTypesIndex].AsString(AssessmentReportTypeMapper::GetNameForAssessmentReportType(m_assessmentReportTypes[assessmentReportTypesIndex]));
   }
   payload.WithArray("AssessmentReportTypes", std::move(assessmentReportTypesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExportMetadataModelAssessmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ExportMetadataModelAssessment"));
  return headers;

}




