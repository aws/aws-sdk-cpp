/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribeApplicationInstanceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeApplicationInstanceResult::DescribeApplicationInstanceResult() : 
    m_healthStatus(ApplicationInstanceHealthStatus::NOT_SET),
    m_status(ApplicationInstanceStatus::NOT_SET)
{
}

DescribeApplicationInstanceResult::DescribeApplicationInstanceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_healthStatus(ApplicationInstanceHealthStatus::NOT_SET),
    m_status(ApplicationInstanceStatus::NOT_SET)
{
  *this = result;
}

DescribeApplicationInstanceResult& DescribeApplicationInstanceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationInstanceId"))
  {
    m_applicationInstanceId = jsonValue.GetString("ApplicationInstanceId");

  }

  if(jsonValue.ValueExists("ApplicationInstanceIdToReplace"))
  {
    m_applicationInstanceIdToReplace = jsonValue.GetString("ApplicationInstanceIdToReplace");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }

  if(jsonValue.ValueExists("DefaultRuntimeContextDevice"))
  {
    m_defaultRuntimeContextDevice = jsonValue.GetString("DefaultRuntimeContextDevice");

  }

  if(jsonValue.ValueExists("DefaultRuntimeContextDeviceName"))
  {
    m_defaultRuntimeContextDeviceName = jsonValue.GetString("DefaultRuntimeContextDeviceName");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("HealthStatus"))
  {
    m_healthStatus = ApplicationInstanceHealthStatusMapper::GetApplicationInstanceHealthStatusForName(jsonValue.GetString("HealthStatus"));

  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("RuntimeContextStates"))
  {
    Aws::Utils::Array<JsonView> runtimeContextStatesJsonList = jsonValue.GetArray("RuntimeContextStates");
    for(unsigned runtimeContextStatesIndex = 0; runtimeContextStatesIndex < runtimeContextStatesJsonList.GetLength(); ++runtimeContextStatesIndex)
    {
      m_runtimeContextStates.push_back(runtimeContextStatesJsonList[runtimeContextStatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("RuntimeRoleArn"))
  {
    m_runtimeRoleArn = jsonValue.GetString("RuntimeRoleArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ApplicationInstanceStatusMapper::GetApplicationInstanceStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusDescription"))
  {
    m_statusDescription = jsonValue.GetString("StatusDescription");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
