/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/BatchGetCalculatedAttributeForProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetCalculatedAttributeForProfileResult::BatchGetCalculatedAttributeForProfileResult()
{
}

BatchGetCalculatedAttributeForProfileResult::BatchGetCalculatedAttributeForProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetCalculatedAttributeForProfileResult& BatchGetCalculatedAttributeForProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("CalculatedAttributeValues"))
  {
    Aws::Utils::Array<JsonView> calculatedAttributeValuesJsonList = jsonValue.GetArray("CalculatedAttributeValues");
    for(unsigned calculatedAttributeValuesIndex = 0; calculatedAttributeValuesIndex < calculatedAttributeValuesJsonList.GetLength(); ++calculatedAttributeValuesIndex)
    {
      m_calculatedAttributeValues.push_back(calculatedAttributeValuesJsonList[calculatedAttributeValuesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ConditionOverrides"))
  {
    m_conditionOverrides = jsonValue.GetObject("ConditionOverrides");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
