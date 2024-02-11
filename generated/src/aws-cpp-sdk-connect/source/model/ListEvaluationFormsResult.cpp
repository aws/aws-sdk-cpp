/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListEvaluationFormsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEvaluationFormsResult::ListEvaluationFormsResult()
{
}

ListEvaluationFormsResult::ListEvaluationFormsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEvaluationFormsResult& ListEvaluationFormsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EvaluationFormSummaryList"))
  {
    Aws::Utils::Array<JsonView> evaluationFormSummaryListJsonList = jsonValue.GetArray("EvaluationFormSummaryList");
    for(unsigned evaluationFormSummaryListIndex = 0; evaluationFormSummaryListIndex < evaluationFormSummaryListJsonList.GetLength(); ++evaluationFormSummaryListIndex)
    {
      m_evaluationFormSummaryList.push_back(evaluationFormSummaryListJsonList[evaluationFormSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
