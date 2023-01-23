/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/ListAssessmentRunAgentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssessmentRunAgentsResult::ListAssessmentRunAgentsResult()
{
}

ListAssessmentRunAgentsResult::ListAssessmentRunAgentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssessmentRunAgentsResult& ListAssessmentRunAgentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assessmentRunAgents"))
  {
    Aws::Utils::Array<JsonView> assessmentRunAgentsJsonList = jsonValue.GetArray("assessmentRunAgents");
    for(unsigned assessmentRunAgentsIndex = 0; assessmentRunAgentsIndex < assessmentRunAgentsJsonList.GetLength(); ++assessmentRunAgentsIndex)
    {
      m_assessmentRunAgents.push_back(assessmentRunAgentsJsonList[assessmentRunAgentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
