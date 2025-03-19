/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/GetApplicationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetApplicationResult::GetApplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetApplicationResult& GetApplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationArn"))
  {
    m_applicationArn = jsonValue.GetString("applicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deployedVersion"))
  {
    m_deployedVersion = jsonValue.GetObject("deployedVersion");
    m_deployedVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));
    m_engineTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastStartTime"))
  {
    m_lastStartTime = jsonValue.GetDouble("lastStartTime");
    m_lastStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestVersion"))
  {
    m_latestVersion = jsonValue.GetObject("latestVersion");
    m_latestVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("listenerArns"))
  {
    Aws::Utils::Array<JsonView> listenerArnsJsonList = jsonValue.GetArray("listenerArns");
    for(unsigned listenerArnsIndex = 0; listenerArnsIndex < listenerArnsJsonList.GetLength(); ++listenerArnsIndex)
    {
      m_listenerArns.push_back(listenerArnsJsonList[listenerArnsIndex].AsString());
    }
    m_listenerArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("listenerPorts"))
  {
    Aws::Utils::Array<JsonView> listenerPortsJsonList = jsonValue.GetArray("listenerPorts");
    for(unsigned listenerPortsIndex = 0; listenerPortsIndex < listenerPortsJsonList.GetLength(); ++listenerPortsIndex)
    {
      m_listenerPorts.push_back(listenerPortsJsonList[listenerPortsIndex].AsInteger());
    }
    m_listenerPortsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("loadBalancerDnsName"))
  {
    m_loadBalancerDnsName = jsonValue.GetString("loadBalancerDnsName");
    m_loadBalancerDnsNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logGroups"))
  {
    Aws::Utils::Array<JsonView> logGroupsJsonList = jsonValue.GetArray("logGroups");
    for(unsigned logGroupsIndex = 0; logGroupsIndex < logGroupsJsonList.GetLength(); ++logGroupsIndex)
    {
      m_logGroups.push_back(logGroupsJsonList[logGroupsIndex].AsObject());
    }
    m_logGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ApplicationLifecycleMapper::GetApplicationLifecycleForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
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
  if(jsonValue.ValueExists("targetGroupArns"))
  {
    Aws::Utils::Array<JsonView> targetGroupArnsJsonList = jsonValue.GetArray("targetGroupArns");
    for(unsigned targetGroupArnsIndex = 0; targetGroupArnsIndex < targetGroupArnsJsonList.GetLength(); ++targetGroupArnsIndex)
    {
      m_targetGroupArns.push_back(targetGroupArnsJsonList[targetGroupArnsIndex].AsString());
    }
    m_targetGroupArnsHasBeenSet = true;
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
