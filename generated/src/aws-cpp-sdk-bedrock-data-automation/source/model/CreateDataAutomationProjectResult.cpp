/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/CreateDataAutomationProjectResult.h>
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

CreateDataAutomationProjectResult::CreateDataAutomationProjectResult() : 
    m_projectStage(DataAutomationProjectStage::NOT_SET),
    m_status(DataAutomationProjectStatus::NOT_SET)
{
}

CreateDataAutomationProjectResult::CreateDataAutomationProjectResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateDataAutomationProjectResult()
{
  *this = result;
}

CreateDataAutomationProjectResult& CreateDataAutomationProjectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("projectArn"))
  {
    m_projectArn = jsonValue.GetString("projectArn");

  }

  if(jsonValue.ValueExists("projectStage"))
  {
    m_projectStage = DataAutomationProjectStageMapper::GetDataAutomationProjectStageForName(jsonValue.GetString("projectStage"));

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
