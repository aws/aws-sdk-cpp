/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/GetDataAutomationStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockDataAutomationRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataAutomationStatusResult::GetDataAutomationStatusResult() : 
    m_status(AutomationJobStatus::NOT_SET)
{
}

GetDataAutomationStatusResult::GetDataAutomationStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetDataAutomationStatusResult()
{
  *this = result;
}

GetDataAutomationStatusResult& GetDataAutomationStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = AutomationJobStatusMapper::GetAutomationJobStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("errorType"))
  {
    m_errorType = jsonValue.GetString("errorType");

  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

  }

  if(jsonValue.ValueExists("outputConfiguration"))
  {
    m_outputConfiguration = jsonValue.GetObject("outputConfiguration");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
