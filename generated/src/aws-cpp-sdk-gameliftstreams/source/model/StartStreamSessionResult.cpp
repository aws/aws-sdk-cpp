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

StartStreamSessionResult::StartStreamSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartStreamSessionResult& StartStreamSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamGroupId"))
  {
    m_streamGroupId = jsonValue.GetString("StreamGroupId");
    m_streamGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");
    m_userIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StreamSessionStatusMapper::GetStreamSessionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = StreamSessionStatusReasonMapper::GetStreamSessionStatusReasonForName(jsonValue.GetString("StatusReason"));
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("Protocol"));
    m_protocolHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");
    m_locationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SignalRequest"))
  {
    m_signalRequest = jsonValue.GetString("SignalRequest");
    m_signalRequestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SignalResponse"))
  {
    m_signalResponse = jsonValue.GetString("SignalResponse");
    m_signalResponseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionTimeoutSeconds"))
  {
    m_connectionTimeoutSeconds = jsonValue.GetInteger("ConnectionTimeoutSeconds");
    m_connectionTimeoutSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SessionLengthSeconds"))
  {
    m_sessionLengthSeconds = jsonValue.GetInteger("SessionLengthSeconds");
    m_sessionLengthSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalLaunchArgs"))
  {
    Aws::Utils::Array<JsonView> additionalLaunchArgsJsonList = jsonValue.GetArray("AdditionalLaunchArgs");
    for(unsigned additionalLaunchArgsIndex = 0; additionalLaunchArgsIndex < additionalLaunchArgsJsonList.GetLength(); ++additionalLaunchArgsIndex)
    {
      m_additionalLaunchArgs.push_back(additionalLaunchArgsJsonList[additionalLaunchArgsIndex].AsString());
    }
    m_additionalLaunchArgsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdditionalEnvironmentVariables"))
  {
    Aws::Map<Aws::String, JsonView> additionalEnvironmentVariablesJsonMap = jsonValue.GetObject("AdditionalEnvironmentVariables").GetAllObjects();
    for(auto& additionalEnvironmentVariablesItem : additionalEnvironmentVariablesJsonMap)
    {
      m_additionalEnvironmentVariables[additionalEnvironmentVariablesItem.first] = additionalEnvironmentVariablesItem.second.AsString();
    }
    m_additionalEnvironmentVariablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogFileLocationUri"))
  {
    m_logFileLocationUri = jsonValue.GetString("LogFileLocationUri");
    m_logFileLocationUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebSdkProtocolUrl"))
  {
    m_webSdkProtocolUrl = jsonValue.GetString("WebSdkProtocolUrl");
    m_webSdkProtocolUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportFilesMetadata"))
  {
    m_exportFilesMetadata = jsonValue.GetObject("ExportFilesMetadata");
    m_exportFilesMetadataHasBeenSet = true;
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
