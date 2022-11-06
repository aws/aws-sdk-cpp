/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ListAssessmentControlInsightsByControlDomainResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssessmentControlInsightsByControlDomainResult::ListAssessmentControlInsightsByControlDomainResult()
{
}

ListAssessmentControlInsightsByControlDomainResult::ListAssessmentControlInsightsByControlDomainResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssessmentControlInsightsByControlDomainResult& ListAssessmentControlInsightsByControlDomainResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("controlInsightsByAssessment"))
  {
    Aws::Utils::Array<JsonView> controlInsightsByAssessmentJsonList = jsonValue.GetArray("controlInsightsByAssessment");
    for(unsigned controlInsightsByAssessmentIndex = 0; controlInsightsByAssessmentIndex < controlInsightsByAssessmentJsonList.GetLength(); ++controlInsightsByAssessmentIndex)
    {
      m_controlInsightsByAssessment.push_back(controlInsightsByAssessmentJsonList[controlInsightsByAssessmentIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
