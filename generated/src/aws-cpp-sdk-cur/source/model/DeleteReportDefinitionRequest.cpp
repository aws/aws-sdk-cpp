/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/model/DeleteReportDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostandUsageReportService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteReportDefinitionRequest::DeleteReportDefinitionRequest() : 
    m_reportNameHasBeenSet(false)
{
}

Aws::String DeleteReportDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reportNameHasBeenSet)
  {
   payload.WithString("ReportName", m_reportName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteReportDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrigamiServiceGatewayService.DeleteReportDefinition"));
  return headers;

}




