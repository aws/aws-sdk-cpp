/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/DisconnectSourceServerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisconnectSourceServerResult::DisconnectSourceServerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisconnectSourceServerResult& DisconnectSourceServerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("agentVersion"))
  {
    m_agentVersion = jsonValue.GetString("agentVersion");
    m_agentVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataReplicationInfo"))
  {
    m_dataReplicationInfo = jsonValue.GetObject("dataReplicationInfo");
    m_dataReplicationInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastLaunchResult"))
  {
    m_lastLaunchResult = LastLaunchResultMapper::GetLastLaunchResultForName(jsonValue.GetString("lastLaunchResult"));
    m_lastLaunchResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lifeCycle"))
  {
    m_lifeCycle = jsonValue.GetObject("lifeCycle");
    m_lifeCycleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recoveryInstanceId"))
  {
    m_recoveryInstanceId = jsonValue.GetString("recoveryInstanceId");
    m_recoveryInstanceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicationDirection"))
  {
    m_replicationDirection = ReplicationDirectionMapper::GetReplicationDirectionForName(jsonValue.GetString("replicationDirection"));
    m_replicationDirectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reversedDirectionSourceServerArn"))
  {
    m_reversedDirectionSourceServerArn = jsonValue.GetString("reversedDirectionSourceServerArn");
    m_reversedDirectionSourceServerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceCloudProperties"))
  {
    m_sourceCloudProperties = jsonValue.GetObject("sourceCloudProperties");
    m_sourceCloudPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceNetworkID"))
  {
    m_sourceNetworkID = jsonValue.GetString("sourceNetworkID");
    m_sourceNetworkIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceProperties"))
  {
    m_sourceProperties = jsonValue.GetObject("sourceProperties");
    m_sourcePropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");
    m_sourceServerIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stagingArea"))
  {
    m_stagingArea = jsonValue.GetObject("stagingArea");
    m_stagingAreaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
