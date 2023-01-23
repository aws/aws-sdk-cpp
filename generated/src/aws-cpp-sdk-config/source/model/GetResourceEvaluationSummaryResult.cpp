/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetResourceEvaluationSummaryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceEvaluationSummaryResult::GetResourceEvaluationSummaryResult() : 
    m_evaluationMode(EvaluationMode::NOT_SET),
    m_compliance(ComplianceType::NOT_SET)
{
}

GetResourceEvaluationSummaryResult::GetResourceEvaluationSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_evaluationMode(EvaluationMode::NOT_SET),
    m_compliance(ComplianceType::NOT_SET)
{
  *this = result;
}

GetResourceEvaluationSummaryResult& GetResourceEvaluationSummaryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceEvaluationId"))
  {
    m_resourceEvaluationId = jsonValue.GetString("ResourceEvaluationId");

  }

  if(jsonValue.ValueExists("EvaluationMode"))
  {
    m_evaluationMode = EvaluationModeMapper::GetEvaluationModeForName(jsonValue.GetString("EvaluationMode"));

  }

  if(jsonValue.ValueExists("EvaluationStatus"))
  {
    m_evaluationStatus = jsonValue.GetObject("EvaluationStatus");

  }

  if(jsonValue.ValueExists("EvaluationStartTimestamp"))
  {
    m_evaluationStartTimestamp = jsonValue.GetDouble("EvaluationStartTimestamp");

  }

  if(jsonValue.ValueExists("Compliance"))
  {
    m_compliance = ComplianceTypeMapper::GetComplianceTypeForName(jsonValue.GetString("Compliance"));

  }

  if(jsonValue.ValueExists("EvaluationContext"))
  {
    m_evaluationContext = jsonValue.GetObject("EvaluationContext");

  }

  if(jsonValue.ValueExists("ResourceDetails"))
  {
    m_resourceDetails = jsonValue.GetObject("ResourceDetails");

  }



  return *this;
}
