/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/model/ModifyReportDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostandUsageReportService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyReportDefinitionRequest::ModifyReportDefinitionRequest() : 
    m_reportNameHasBeenSet(false),
    m_reportDefinitionHasBeenSet(false)
{
}

Aws::String ModifyReportDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reportNameHasBeenSet)
  {
   payload.WithString("ReportName", m_reportName);

  }

  if(m_reportDefinitionHasBeenSet)
  {
   payload.WithObject("ReportDefinition", m_reportDefinition.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyReportDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrigamiServiceGatewayService.ModifyReportDefinition"));
  return headers;

}




