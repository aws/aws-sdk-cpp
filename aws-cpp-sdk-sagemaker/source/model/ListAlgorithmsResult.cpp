/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListAlgorithmsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAlgorithmsResult::ListAlgorithmsResult()
{
}

ListAlgorithmsResult::ListAlgorithmsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAlgorithmsResult& ListAlgorithmsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AlgorithmSummaryList"))
  {
    Aws::Utils::Array<JsonView> algorithmSummaryListJsonList = jsonValue.GetArray("AlgorithmSummaryList");
    for(unsigned algorithmSummaryListIndex = 0; algorithmSummaryListIndex < algorithmSummaryListJsonList.GetLength(); ++algorithmSummaryListIndex)
    {
      m_algorithmSummaryList.push_back(algorithmSummaryListJsonList[algorithmSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
