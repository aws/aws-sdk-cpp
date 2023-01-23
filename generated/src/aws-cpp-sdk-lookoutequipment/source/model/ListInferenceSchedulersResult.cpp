/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ListInferenceSchedulersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInferenceSchedulersResult::ListInferenceSchedulersResult()
{
}

ListInferenceSchedulersResult::ListInferenceSchedulersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInferenceSchedulersResult& ListInferenceSchedulersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("InferenceSchedulerSummaries"))
  {
    Aws::Utils::Array<JsonView> inferenceSchedulerSummariesJsonList = jsonValue.GetArray("InferenceSchedulerSummaries");
    for(unsigned inferenceSchedulerSummariesIndex = 0; inferenceSchedulerSummariesIndex < inferenceSchedulerSummariesJsonList.GetLength(); ++inferenceSchedulerSummariesIndex)
    {
      m_inferenceSchedulerSummaries.push_back(inferenceSchedulerSummariesJsonList[inferenceSchedulerSummariesIndex].AsObject());
    }
  }



  return *this;
}
