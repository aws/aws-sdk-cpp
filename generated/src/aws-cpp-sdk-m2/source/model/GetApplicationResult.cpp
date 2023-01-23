/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/GetApplicationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetApplicationResult::GetApplicationResult() : 
    m_engineType(EngineType::NOT_SET),
    m_status(ApplicationLifecycle::NOT_SET)
{
}

GetApplicationResult::GetApplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_engineType(EngineType::NOT_SET),
    m_status(ApplicationLifecycle::NOT_SET)
{
  *this = result;
}

GetApplicationResult& GetApplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationArn"))
  {
    m_applicationArn = jsonValue.GetString("applicationArn");

  }

  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("deployedVersion"))
  {
    m_deployedVersion = jsonValue.GetObject("deployedVersion");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));

  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

  }

  if(jsonValue.ValueExists("lastStartTime"))
  {
    m_lastStartTime = jsonValue.GetDouble("lastStartTime");

  }

  if(jsonValue.ValueExists("latestVersion"))
  {
    m_latestVersion = jsonValue.GetObject("latestVersion");

  }

  if(jsonValue.ValueExists("listenerArns"))
  {
    Aws::Utils::Array<JsonView> listenerArnsJsonList = jsonValue.GetArray("listenerArns");
    for(unsigned listenerArnsIndex = 0; listenerArnsIndex < listenerArnsJsonList.GetLength(); ++listenerArnsIndex)
    {
      m_listenerArns.push_back(listenerArnsJsonList[listenerArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("listenerPorts"))
  {
    Aws::Utils::Array<JsonView> listenerPortsJsonList = jsonValue.GetArray("listenerPorts");
    for(unsigned listenerPortsIndex = 0; listenerPortsIndex < listenerPortsJsonList.GetLength(); ++listenerPortsIndex)
    {
      m_listenerPorts.push_back(listenerPortsJsonList[listenerPortsIndex].AsInteger());
    }
  }

  if(jsonValue.ValueExists("loadBalancerDnsName"))
  {
    m_loadBalancerDnsName = jsonValue.GetString("loadBalancerDnsName");

  }

  if(jsonValue.ValueExists("logGroups"))
  {
    Aws::Utils::Array<JsonView> logGroupsJsonList = jsonValue.GetArray("logGroups");
    for(unsigned logGroupsIndex = 0; logGroupsIndex < logGroupsJsonList.GetLength(); ++logGroupsIndex)
    {
      m_logGroups.push_back(logGroupsJsonList[logGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ApplicationLifecycleMapper::GetApplicationLifecycleForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("targetGroupArns"))
  {
    Aws::Utils::Array<JsonView> targetGroupArnsJsonList = jsonValue.GetArray("targetGroupArns");
    for(unsigned targetGroupArnsIndex = 0; targetGroupArnsIndex < targetGroupArnsJsonList.GetLength(); ++targetGroupArnsIndex)
    {
      m_targetGroupArns.push_back(targetGroupArnsJsonList[targetGroupArnsIndex].AsString());
    }
  }



  return *this;
}
