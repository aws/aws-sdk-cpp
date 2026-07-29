/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/gameliftstreams/model/GetStreamUrlResult.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStreamUrlResult::GetStreamUrlResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetStreamUrlResult& GetStreamUrlResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StreamUrlId")) {
    m_streamUrlId = jsonValue.GetString("StreamUrlId");
    m_streamUrlIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StreamUrl")) {
    m_streamUrl = jsonValue.GetString("StreamUrl");
    m_streamUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = StreamUrlStatusMapper::GetStreamUrlStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusReason")) {
    m_statusReason = StreamUrlStatusReasonMapper::GetStreamUrlStatusReasonForName(jsonValue.GetString("StatusReason"));
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetDouble("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UsageLimit")) {
    m_usageLimit = jsonValue.GetInteger("UsageLimit");
    m_usageLimitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RemainingUses")) {
    m_remainingUses = jsonValue.GetInteger("RemainingUses");
    m_remainingUsesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StreamGroupArn")) {
    m_streamGroupArn = jsonValue.GetString("StreamGroupArn");
    m_streamGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApplicationArn")) {
    m_applicationArn = jsonValue.GetString("ApplicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Protocol")) {
    m_protocol = ProtocolMapper::GetProtocolForName(jsonValue.GetString("Protocol"));
    m_protocolHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Locations")) {
    Aws::Utils::Array<JsonView> locationsJsonList = jsonValue.GetArray("Locations");
    for (unsigned locationsIndex = 0; locationsIndex < locationsJsonList.GetLength(); ++locationsIndex) {
      m_locations.push_back(locationsJsonList[locationsIndex].AsString());
    }
    m_locationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SessionLengthSeconds")) {
    m_sessionLengthSeconds = jsonValue.GetInteger("SessionLengthSeconds");
    m_sessionLengthSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdditionalLaunchArgs")) {
    Aws::Utils::Array<JsonView> additionalLaunchArgsJsonList = jsonValue.GetArray("AdditionalLaunchArgs");
    for (unsigned additionalLaunchArgsIndex = 0; additionalLaunchArgsIndex < additionalLaunchArgsJsonList.GetLength();
         ++additionalLaunchArgsIndex) {
      m_additionalLaunchArgs.push_back(additionalLaunchArgsJsonList[additionalLaunchArgsIndex].AsString());
    }
    m_additionalLaunchArgsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AdditionalEnvironmentVariables")) {
    Aws::Map<Aws::String, JsonView> additionalEnvironmentVariablesJsonMap =
        jsonValue.GetObject("AdditionalEnvironmentVariables").GetAllObjects();
    for (auto& additionalEnvironmentVariablesItem : additionalEnvironmentVariablesJsonMap) {
      m_additionalEnvironmentVariables[additionalEnvironmentVariablesItem.first] = additionalEnvironmentVariablesItem.second.AsString();
    }
    m_additionalEnvironmentVariablesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DisplayConfiguration")) {
    m_displayConfiguration = jsonValue.GetObject("DisplayConfiguration");
    m_displayConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StreamSessions")) {
    Aws::Utils::Array<JsonView> streamSessionsJsonList = jsonValue.GetArray("StreamSessions");
    for (unsigned streamSessionsIndex = 0; streamSessionsIndex < streamSessionsJsonList.GetLength(); ++streamSessionsIndex) {
      m_streamSessions.push_back(streamSessionsJsonList[streamSessionsIndex].AsObject());
    }
    m_streamSessionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
