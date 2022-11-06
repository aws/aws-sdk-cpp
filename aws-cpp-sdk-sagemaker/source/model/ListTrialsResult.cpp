/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListTrialsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTrialsResult::ListTrialsResult()
{
}

ListTrialsResult::ListTrialsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTrialsResult& ListTrialsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrialSummaries"))
  {
    Aws::Utils::Array<JsonView> trialSummariesJsonList = jsonValue.GetArray("TrialSummaries");
    for(unsigned trialSummariesIndex = 0; trialSummariesIndex < trialSummariesJsonList.GetLength(); ++trialSummariesIndex)
    {
      m_trialSummaries.push_back(trialSummariesJsonList[trialSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
