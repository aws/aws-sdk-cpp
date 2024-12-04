/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DeleteDataAutomationProjectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteDataAutomationProjectResult::DeleteDataAutomationProjectResult() : 
    m_status(DataAutomationProjectStatus::NOT_SET)
{
}

DeleteDataAutomationProjectResult::DeleteDataAutomationProjectResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DeleteDataAutomationProjectResult()
{
  *this = result;
}

DeleteDataAutomationProjectResult& DeleteDataAutomationProjectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("projectArn"))
  {
    m_projectArn = jsonValue.GetString("projectArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DataAutomationProjectStatusMapper::GetDataAutomationProjectStatusForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
