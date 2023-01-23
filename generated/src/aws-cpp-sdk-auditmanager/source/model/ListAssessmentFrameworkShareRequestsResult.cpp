/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ListAssessmentFrameworkShareRequestsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssessmentFrameworkShareRequestsResult::ListAssessmentFrameworkShareRequestsResult()
{
}

ListAssessmentFrameworkShareRequestsResult::ListAssessmentFrameworkShareRequestsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssessmentFrameworkShareRequestsResult& ListAssessmentFrameworkShareRequestsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assessmentFrameworkShareRequests"))
  {
    Aws::Utils::Array<JsonView> assessmentFrameworkShareRequestsJsonList = jsonValue.GetArray("assessmentFrameworkShareRequests");
    for(unsigned assessmentFrameworkShareRequestsIndex = 0; assessmentFrameworkShareRequestsIndex < assessmentFrameworkShareRequestsJsonList.GetLength(); ++assessmentFrameworkShareRequestsIndex)
    {
      m_assessmentFrameworkShareRequests.push_back(assessmentFrameworkShareRequestsJsonList[assessmentFrameworkShareRequestsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
