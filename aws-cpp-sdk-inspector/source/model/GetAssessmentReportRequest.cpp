/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/GetAssessmentReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAssessmentReportRequest::GetAssessmentReportRequest() : 
    m_assessmentRunArnHasBeenSet(false),
    m_reportFileFormat(ReportFileFormat::NOT_SET),
    m_reportFileFormatHasBeenSet(false),
    m_reportType(ReportType::NOT_SET),
    m_reportTypeHasBeenSet(false)
{
}

Aws::String GetAssessmentReportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentRunArnHasBeenSet)
  {
   payload.WithString("assessmentRunArn", m_assessmentRunArn);

  }

  if(m_reportFileFormatHasBeenSet)
  {
   payload.WithString("reportFileFormat", ReportFileFormatMapper::GetNameForReportFileFormat(m_reportFileFormat));
  }

  if(m_reportTypeHasBeenSet)
  {
   payload.WithString("reportType", ReportTypeMapper::GetNameForReportType(m_reportType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAssessmentReportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.GetAssessmentReport"));
  return headers;

}




