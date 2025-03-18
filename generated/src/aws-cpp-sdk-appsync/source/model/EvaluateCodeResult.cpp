/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/EvaluateCodeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

EvaluateCodeResult::EvaluateCodeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

EvaluateCodeResult& EvaluateCodeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("evaluationResult"))
  {
    m_evaluationResult = jsonValue.GetString("evaluationResult");
    m_evaluationResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logs"))
  {
    Aws::Utils::Array<JsonView> logsJsonList = jsonValue.GetArray("logs");
    for(unsigned logsIndex = 0; logsIndex < logsJsonList.GetLength(); ++logsIndex)
    {
      m_logs.push_back(logsJsonList[logsIndex].AsString());
    }
    m_logsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stash"))
  {
    m_stash = jsonValue.GetString("stash");
    m_stashHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outErrors"))
  {
    m_outErrors = jsonValue.GetString("outErrors");
    m_outErrorsHasBeenSet = true;
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
