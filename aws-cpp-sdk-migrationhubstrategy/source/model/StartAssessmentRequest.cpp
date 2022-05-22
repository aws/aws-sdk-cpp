/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/StartAssessmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartAssessmentRequest::StartAssessmentRequest() : 
    m_s3bucketForAnalysisDataHasBeenSet(false),
    m_s3bucketForReportDataHasBeenSet(false)
{
}

Aws::String StartAssessmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_s3bucketForAnalysisDataHasBeenSet)
  {
   payload.WithString("s3bucketForAnalysisData", m_s3bucketForAnalysisData);

  }

  if(m_s3bucketForReportDataHasBeenSet)
  {
   payload.WithString("s3bucketForReportData", m_s3bucketForReportData);

  }

  return payload.View().WriteReadable();
}




