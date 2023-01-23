/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ListControlDomainInsightsByAssessmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListControlDomainInsightsByAssessmentResult::ListControlDomainInsightsByAssessmentResult()
{
}

ListControlDomainInsightsByAssessmentResult::ListControlDomainInsightsByAssessmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListControlDomainInsightsByAssessmentResult& ListControlDomainInsightsByAssessmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("controlDomainInsights"))
  {
    Aws::Utils::Array<JsonView> controlDomainInsightsJsonList = jsonValue.GetArray("controlDomainInsights");
    for(unsigned controlDomainInsightsIndex = 0; controlDomainInsightsIndex < controlDomainInsightsJsonList.GetLength(); ++controlDomainInsightsIndex)
    {
      m_controlDomainInsights.push_back(controlDomainInsightsJsonList[controlDomainInsightsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
