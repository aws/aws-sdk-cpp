/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetResourceEvaluationSummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceEvaluationSummaryResult::GetResourceEvaluationSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceEvaluationSummaryResult& GetResourceEvaluationSummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceEvaluationId"))
  {
    m_resourceEvaluationId = jsonValue.GetString("ResourceEvaluationId");
    m_resourceEvaluationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationMode"))
  {
    m_evaluationMode = EvaluationModeMapper::GetEvaluationModeForName(jsonValue.GetString("EvaluationMode"));
    m_evaluationModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationStatus"))
  {
    m_evaluationStatus = jsonValue.GetObject("EvaluationStatus");
    m_evaluationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationStartTimestamp"))
  {
    m_evaluationStartTimestamp = jsonValue.GetDouble("EvaluationStartTimestamp");
    m_evaluationStartTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Compliance"))
  {
    m_compliance = ComplianceTypeMapper::GetComplianceTypeForName(jsonValue.GetString("Compliance"));
    m_complianceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationContext"))
  {
    m_evaluationContext = jsonValue.GetObject("EvaluationContext");
    m_evaluationContextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceDetails"))
  {
    m_resourceDetails = jsonValue.GetObject("ResourceDetails");
    m_resourceDetailsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
