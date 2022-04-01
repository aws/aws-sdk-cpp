/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/GetReportGroupTrendRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetReportGroupTrendRequest::GetReportGroupTrendRequest() : 
    m_reportGroupArnHasBeenSet(false),
    m_numOfReports(0),
    m_numOfReportsHasBeenSet(false),
    m_trendField(ReportGroupTrendFieldType::NOT_SET),
    m_trendFieldHasBeenSet(false)
{
}

Aws::String GetReportGroupTrendRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reportGroupArnHasBeenSet)
  {
   payload.WithString("reportGroupArn", m_reportGroupArn);

  }

  if(m_numOfReportsHasBeenSet)
  {
   payload.WithInteger("numOfReports", m_numOfReports);

  }

  if(m_trendFieldHasBeenSet)
  {
   payload.WithString("trendField", ReportGroupTrendFieldTypeMapper::GetNameForReportGroupTrendFieldType(m_trendField));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetReportGroupTrendRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.GetReportGroupTrend"));
  return headers;

}




