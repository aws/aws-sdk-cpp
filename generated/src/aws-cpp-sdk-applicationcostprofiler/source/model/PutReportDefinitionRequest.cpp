/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/model/PutReportDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationCostProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutReportDefinitionRequest::PutReportDefinitionRequest() : 
    m_reportIdHasBeenSet(false),
    m_reportDescriptionHasBeenSet(false),
    m_reportFrequency(ReportFrequency::NOT_SET),
    m_reportFrequencyHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_destinationS3LocationHasBeenSet(false)
{
}

Aws::String PutReportDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reportIdHasBeenSet)
  {
   payload.WithString("reportId", m_reportId);

  }

  if(m_reportDescriptionHasBeenSet)
  {
   payload.WithString("reportDescription", m_reportDescription);

  }

  if(m_reportFrequencyHasBeenSet)
  {
   payload.WithString("reportFrequency", ReportFrequencyMapper::GetNameForReportFrequency(m_reportFrequency));
  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", FormatMapper::GetNameForFormat(m_format));
  }

  if(m_destinationS3LocationHasBeenSet)
  {
   payload.WithObject("destinationS3Location", m_destinationS3Location.Jsonize());

  }

  return payload.View().WriteReadable();
}




