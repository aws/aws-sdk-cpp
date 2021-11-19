/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetInsightsByAssessmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInsightsByAssessmentResult::GetInsightsByAssessmentResult()
{
}

GetInsightsByAssessmentResult::GetInsightsByAssessmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInsightsByAssessmentResult& GetInsightsByAssessmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("insights"))
  {
    m_insights = jsonValue.GetObject("insights");

  }



  return *this;
}
