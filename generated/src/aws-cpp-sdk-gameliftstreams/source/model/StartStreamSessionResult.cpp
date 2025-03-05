/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/StartStreamSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartStreamSessionResult::StartStreamSessionResult() : 
    m_connectionTimeoutSeconds(0),
    m_protocol(Protocol::NOT_SET),
    m_sessionLengthSeconds(0),
    m_status(StreamSessionStatus::NOT_SET),
    m_statusReason(StreamSessionStatusReason::NOT_SET)
{
}

StartStreamSessionResult::StartStreamSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : StartStreamSessionResult()
{
  *this = result;
}

StartStreamSessionResult& StartStreamSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AdditionalEnvironmentVariables"))
  {
    Aws::Map<Aws::String, JsonView> additionalEnvironmentVariablesJsonMap = jsonValue.GetObject("AdditionalEnvironmentVariables").GetAllObjects();
    for(auto& additionalEnvironmentVariablesItem : additionalEnvironmentVariablesJsonMap)
    {
      m_additionalEnvironmentVariables[additionalEnvironmentVariablesItem.first] = additionalEnvironmentVariablesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("AdditionalLaunchArgs"))
  {
    Aws::Utils::Array<JsonView> additionalLaunchArgsJsonList = jsonValue.GetArray("AdditionalLaunchArgs");
    for(unsigned additionalLaunchArgsIndex = 0; additionalLaunchArgsIndex < additionalLaunchArgsJsonList.GetLength(); ++additionalLaunchArgsIndex)
    {
      m_additionalLaunchArgs.push_back(additionalLaunchArgsJsonList[additionalLaunchArgsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("ConnectionTimeoutSeconds"))
  {
    m_connectionTimeoutSeconds = jsonValue.GetInteger("ConnectionTimeoutSeconds");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("ExportFilesMetadata"))
  {
    m_exportFilesMetadata = jsonValue.GetObject("ExportFilesMetadata");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

  }

  if(jsonValue.ValueExists("LogFileLocationUri"))
  {
    m_logFileLocationUri = jsonValue.GetString("LogFileLocationUri");

  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("Protocol"));

  }

  if(jsonValue.ValueExists("SessionLengthSeconds"))
  {
    m_sessionLengthSeconds = jsonValue.GetInteger("SessionLengthSeconds");

  }

  if(jsonValue.ValueExists("SignalRequest"))
  {
    m_signalRequest = jsonValue.GetString("SignalRequest");

  }

  if(jsonValue.ValueExists("SignalResponse"))
  {
    m_signalResponse = jsonValue.GetString("SignalResponse");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StreamSessionStatusMapper::GetStreamSessionStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = StreamSessionStatusReasonMapper::GetStreamSessionStatusReasonForName(jsonValue.GetString("StatusReason"));

  }

  if(jsonValue.ValueExists("StreamGroupId"))
  {
    m_streamGroupId = jsonValue.GetString("StreamGroupId");

  }

  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

  }

  if(jsonValue.ValueExists("WebSdkProtocolUrl"))
  {
    m_webSdkProtocolUrl = jsonValue.GetString("WebSdkProtocolUrl");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
