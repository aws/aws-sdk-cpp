/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetAssessmentReportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "InspectorService.GetAssessmentReport"));
  return headers;

}




