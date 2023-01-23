/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ListAssessmentReportsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssessmentReportsResult::ListAssessmentReportsResult()
{
}

ListAssessmentReportsResult::ListAssessmentReportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssessmentReportsResult& ListAssessmentReportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assessmentReports"))
  {
    Aws::Utils::Array<JsonView> assessmentReportsJsonList = jsonValue.GetArray("assessmentReports");
    for(unsigned assessmentReportsIndex = 0; assessmentReportsIndex < assessmentReportsJsonList.GetLength(); ++assessmentReportsIndex)
    {
      m_assessmentReports.push_back(assessmentReportsJsonList[assessmentReportsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
