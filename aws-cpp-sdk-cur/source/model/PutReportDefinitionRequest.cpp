/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/model/PutReportDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CostandUsageReportService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutReportDefinitionRequest::PutReportDefinitionRequest() : 
    m_reportDefinitionHasBeenSet(false)
{
}

Aws::String PutReportDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reportDefinitionHasBeenSet)
  {
   payload.WithObject("ReportDefinition", m_reportDefinition.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutReportDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrigamiServiceGatewayService.PutReportDefinition"));
  return headers;

}




