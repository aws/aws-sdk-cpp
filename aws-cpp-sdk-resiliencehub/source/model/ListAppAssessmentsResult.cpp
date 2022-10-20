/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListAppAssessmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppAssessmentsResult::ListAppAssessmentsResult()
{
}

ListAppAssessmentsResult::ListAppAssessmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppAssessmentsResult& ListAppAssessmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assessmentSummaries"))
  {
    Aws::Utils::Array<JsonView> assessmentSummariesJsonList = jsonValue.GetArray("assessmentSummaries");
    for(unsigned assessmentSummariesIndex = 0; assessmentSummariesIndex < assessmentSummariesJsonList.GetLength(); ++assessmentSummariesIndex)
    {
      m_assessmentSummaries.push_back(assessmentSummariesJsonList[assessmentSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
