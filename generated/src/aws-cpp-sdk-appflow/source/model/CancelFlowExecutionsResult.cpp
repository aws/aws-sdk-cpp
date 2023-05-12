/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/CancelFlowExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CancelFlowExecutionsResult::CancelFlowExecutionsResult()
{
}

CancelFlowExecutionsResult::CancelFlowExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CancelFlowExecutionsResult& CancelFlowExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("invalidExecutions"))
  {
    Aws::Utils::Array<JsonView> invalidExecutionsJsonList = jsonValue.GetArray("invalidExecutions");
    for(unsigned invalidExecutionsIndex = 0; invalidExecutionsIndex < invalidExecutionsJsonList.GetLength(); ++invalidExecutionsIndex)
    {
      m_invalidExecutions.push_back(invalidExecutionsJsonList[invalidExecutionsIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
