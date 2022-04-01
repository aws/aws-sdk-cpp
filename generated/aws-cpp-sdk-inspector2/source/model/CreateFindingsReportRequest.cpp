/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CreateFindingsReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFindingsReportRequest::CreateFindingsReportRequest() : 
    m_filterCriteriaHasBeenSet(false),
    m_reportFormat(ReportFormat::NOT_SET),
    m_reportFormatHasBeenSet(false),
    m_s3DestinationHasBeenSet(false)
{
}

Aws::String CreateFindingsReportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterCriteriaHasBeenSet)
  {
   payload.WithObject("filterCriteria", m_filterCriteria.Jsonize());

  }

  if(m_reportFormatHasBeenSet)
  {
   payload.WithString("reportFormat", ReportFormatMapper::GetNameForReportFormat(m_reportFormat));
  }

  if(m_s3DestinationHasBeenSet)
  {
   payload.WithObject("s3Destination", m_s3Destination.Jsonize());

  }

  return payload.View().WriteReadable();
}




