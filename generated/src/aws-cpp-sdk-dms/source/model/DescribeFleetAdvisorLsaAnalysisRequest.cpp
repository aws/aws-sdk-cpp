/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeFleetAdvisorLsaAnalysisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFleetAdvisorLsaAnalysisRequest::DescribeFleetAdvisorLsaAnalysisRequest() : 
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeFleetAdvisorLsaAnalysisRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxRecordsHasBeenSet)
  {
   payload.WithInteger("MaxRecords", m_maxRecords);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeFleetAdvisorLsaAnalysisRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.DescribeFleetAdvisorLsaAnalysis"));
  return headers;

}




