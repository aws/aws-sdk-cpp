/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/UpdateApplicationResult.h>
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

UpdateApplicationResult::UpdateApplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateApplicationResult& UpdateApplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
  if(jsonValue.ValueExists("RuntimeEnvironment"))
  {
    m_runtimeEnvironment = jsonValue.GetObject("RuntimeEnvironment");
    m_runtimeEnvironmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutablePath"))
  {
    m_executablePath = jsonValue.GetString("ExecutablePath");
    m_executablePathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationLogPaths"))
  {
    Aws::Utils::Array<JsonView> applicationLogPathsJsonList = jsonValue.GetArray("ApplicationLogPaths");
    for(unsigned applicationLogPathsIndex = 0; applicationLogPathsIndex < applicationLogPathsJsonList.GetLength(); ++applicationLogPathsIndex)
    {
      m_applicationLogPaths.push_back(applicationLogPathsJsonList[applicationLogPathsIndex].AsString());
    }
    m_applicationLogPathsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationLogOutputUri"))
  {
    m_applicationLogOutputUri = jsonValue.GetString("ApplicationLogOutputUri");
    m_applicationLogOutputUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationSourceUri"))
  {
    m_applicationSourceUri = jsonValue.GetString("ApplicationSourceUri");
    m_applicationSourceUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ApplicationStatusMapper::GetApplicationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = ApplicationStatusReasonMapper::GetApplicationStatusReasonForName(jsonValue.GetString("StatusReason"));
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReplicationStatuses"))
  {
    Aws::Utils::Array<JsonView> replicationStatusesJsonList = jsonValue.GetArray("ReplicationStatuses");
    for(unsigned replicationStatusesIndex = 0; replicationStatusesIndex < replicationStatusesJsonList.GetLength(); ++replicationStatusesIndex)
    {
      m_replicationStatuses.push_back(replicationStatusesJsonList[replicationStatusesIndex].AsObject());
    }
    m_replicationStatusesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociatedStreamGroups"))
  {
    Aws::Utils::Array<JsonView> associatedStreamGroupsJsonList = jsonValue.GetArray("AssociatedStreamGroups");
    for(unsigned associatedStreamGroupsIndex = 0; associatedStreamGroupsIndex < associatedStreamGroupsJsonList.GetLength(); ++associatedStreamGroupsIndex)
    {
      m_associatedStreamGroups.push_back(associatedStreamGroupsJsonList[associatedStreamGroupsIndex].AsString());
    }
    m_associatedStreamGroupsHasBeenSet = true;
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
