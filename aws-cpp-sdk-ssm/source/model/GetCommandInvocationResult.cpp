/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetCommandInvocationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCommandInvocationResult::GetCommandInvocationResult() : 
    m_responseCode(0),
    m_status(CommandInvocationStatus::NOT_SET)
{
}

GetCommandInvocationResult::GetCommandInvocationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_responseCode(0),
    m_status(CommandInvocationStatus::NOT_SET)
{
  *this = result;
}

GetCommandInvocationResult& GetCommandInvocationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CommandId"))
  {
    m_commandId = jsonValue.GetString("CommandId");

  }

  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

  }

  if(jsonValue.ValueExists("Comment"))
  {
    m_comment = jsonValue.GetString("Comment");

  }

  if(jsonValue.ValueExists("DocumentName"))
  {
    m_documentName = jsonValue.GetString("DocumentName");

  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

  }

  if(jsonValue.ValueExists("PluginName"))
  {
    m_pluginName = jsonValue.GetString("PluginName");

  }

  if(jsonValue.ValueExists("ResponseCode"))
  {
    m_responseCode = jsonValue.GetInteger("ResponseCode");

  }

  if(jsonValue.ValueExists("ExecutionStartDateTime"))
  {
    m_executionStartDateTime = jsonValue.GetString("ExecutionStartDateTime");

  }

  if(jsonValue.ValueExists("ExecutionElapsedTime"))
  {
    m_executionElapsedTime = jsonValue.GetString("ExecutionElapsedTime");

  }

  if(jsonValue.ValueExists("ExecutionEndDateTime"))
  {
    m_executionEndDateTime = jsonValue.GetString("ExecutionEndDateTime");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CommandInvocationStatusMapper::GetCommandInvocationStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusDetails"))
  {
    m_statusDetails = jsonValue.GetString("StatusDetails");

  }

  if(jsonValue.ValueExists("StandardOutputContent"))
  {
    m_standardOutputContent = jsonValue.GetString("StandardOutputContent");

  }

  if(jsonValue.ValueExists("StandardOutputUrl"))
  {
    m_standardOutputUrl = jsonValue.GetString("StandardOutputUrl");

  }

  if(jsonValue.ValueExists("StandardErrorContent"))
  {
    m_standardErrorContent = jsonValue.GetString("StandardErrorContent");

  }

  if(jsonValue.ValueExists("StandardErrorUrl"))
  {
    m_standardErrorUrl = jsonValue.GetString("StandardErrorUrl");

  }

  if(jsonValue.ValueExists("CloudWatchOutputConfig"))
  {
    m_cloudWatchOutputConfig = jsonValue.GetObject("CloudWatchOutputConfig");

  }



  return *this;
}
