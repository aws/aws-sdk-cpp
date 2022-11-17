/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/EvaluateCodeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

EvaluateCodeResult::EvaluateCodeResult()
{
}

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

  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

  }

  if(jsonValue.ValueExists("logs"))
  {
    Aws::Utils::Array<JsonView> logsJsonList = jsonValue.GetArray("logs");
    for(unsigned logsIndex = 0; logsIndex < logsJsonList.GetLength(); ++logsIndex)
    {
      m_logs.push_back(logsJsonList[logsIndex].AsString());
    }
  }



  return *this;
}
