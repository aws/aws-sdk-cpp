/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-a2i-runtime/model/ListHumanLoopsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AugmentedAIRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListHumanLoopsResult::ListHumanLoopsResult()
{
}

ListHumanLoopsResult::ListHumanLoopsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListHumanLoopsResult& ListHumanLoopsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HumanLoopSummaries"))
  {
    Aws::Utils::Array<JsonView> humanLoopSummariesJsonList = jsonValue.GetArray("HumanLoopSummaries");
    for(unsigned humanLoopSummariesIndex = 0; humanLoopSummariesIndex < humanLoopSummariesJsonList.GetLength(); ++humanLoopSummariesIndex)
    {
      m_humanLoopSummaries.push_back(humanLoopSummariesJsonList[humanLoopSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
