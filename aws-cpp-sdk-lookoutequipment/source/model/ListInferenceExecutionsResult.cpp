/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListInferenceExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInferenceExecutionsResult::ListInferenceExecutionsResult()
{
}

ListInferenceExecutionsResult::ListInferenceExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInferenceExecutionsResult& ListInferenceExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("InferenceExecutionSummaries"))
  {
    Aws::Utils::Array<JsonView> inferenceExecutionSummariesJsonList = jsonValue.GetArray("InferenceExecutionSummaries");
    for(unsigned inferenceExecutionSummariesIndex = 0; inferenceExecutionSummariesIndex < inferenceExecutionSummariesJsonList.GetLength(); ++inferenceExecutionSummariesIndex)
    {
      m_inferenceExecutionSummaries.push_back(inferenceExecutionSummariesJsonList[inferenceExecutionSummariesIndex].AsObject());
    }
  }



  return *this;
}
