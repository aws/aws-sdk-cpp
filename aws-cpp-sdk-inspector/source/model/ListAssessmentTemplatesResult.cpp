/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/ListAssessmentTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssessmentTemplatesResult::ListAssessmentTemplatesResult()
{
}

ListAssessmentTemplatesResult::ListAssessmentTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssessmentTemplatesResult& ListAssessmentTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assessmentTemplateArns"))
  {
    Aws::Utils::Array<JsonView> assessmentTemplateArnsJsonList = jsonValue.GetArray("assessmentTemplateArns");
    for(unsigned assessmentTemplateArnsIndex = 0; assessmentTemplateArnsIndex < assessmentTemplateArnsJsonList.GetLength(); ++assessmentTemplateArnsIndex)
    {
      m_assessmentTemplateArns.push_back(assessmentTemplateArnsJsonList[assessmentTemplateArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
