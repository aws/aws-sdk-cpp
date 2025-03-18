/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetTableOptimizerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetTableOptimizerResult::BatchGetTableOptimizerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetTableOptimizerResult& BatchGetTableOptimizerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TableOptimizers"))
  {
    Aws::Utils::Array<JsonView> tableOptimizersJsonList = jsonValue.GetArray("TableOptimizers");
    for(unsigned tableOptimizersIndex = 0; tableOptimizersIndex < tableOptimizersJsonList.GetLength(); ++tableOptimizersIndex)
    {
      m_tableOptimizers.push_back(tableOptimizersJsonList[tableOptimizersIndex].AsObject());
    }
    m_tableOptimizersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Failures"))
  {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("Failures");
    for(unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex)
    {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
    m_failuresHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
