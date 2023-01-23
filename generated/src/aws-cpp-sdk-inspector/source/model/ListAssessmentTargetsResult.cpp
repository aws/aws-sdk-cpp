/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/ListAssessmentTargetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssessmentTargetsResult::ListAssessmentTargetsResult()
{
}

ListAssessmentTargetsResult::ListAssessmentTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssessmentTargetsResult& ListAssessmentTargetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assessmentTargetArns"))
  {
    Aws::Utils::Array<JsonView> assessmentTargetArnsJsonList = jsonValue.GetArray("assessmentTargetArns");
    for(unsigned assessmentTargetArnsIndex = 0; assessmentTargetArnsIndex < assessmentTargetArnsJsonList.GetLength(); ++assessmentTargetArnsIndex)
    {
      m_assessmentTargetArns.push_back(assessmentTargetArnsJsonList[assessmentTargetArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
