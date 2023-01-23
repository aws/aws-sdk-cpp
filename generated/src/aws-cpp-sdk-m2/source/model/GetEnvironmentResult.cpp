/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/GetEnvironmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEnvironmentResult::GetEnvironmentResult() : 
    m_actualCapacity(0),
    m_engineType(EngineType::NOT_SET),
    m_publiclyAccessible(false),
    m_status(EnvironmentLifecycle::NOT_SET)
{
}

GetEnvironmentResult::GetEnvironmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_actualCapacity(0),
    m_engineType(EngineType::NOT_SET),
    m_publiclyAccessible(false),
    m_status(EnvironmentLifecycle::NOT_SET)
{
  *this = result;
}

GetEnvironmentResult& GetEnvironmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("actualCapacity"))
  {
    m_actualCapacity = jsonValue.GetInteger("actualCapacity");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("engineType"))
  {
    m_engineType = EngineTypeMapper::GetEngineTypeForName(jsonValue.GetString("engineType"));

  }

  if(jsonValue.ValueExists("engineVersion"))
  {
    m_engineVersion = jsonValue.GetString("engineVersion");

  }

  if(jsonValue.ValueExists("environmentArn"))
  {
    m_environmentArn = jsonValue.GetString("environmentArn");

  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

  }

  if(jsonValue.ValueExists("highAvailabilityConfig"))
  {
    m_highAvailabilityConfig = jsonValue.GetObject("highAvailabilityConfig");

  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

  }

  if(jsonValue.ValueExists("loadBalancerArn"))
  {
    m_loadBalancerArn = jsonValue.GetString("loadBalancerArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("pendingMaintenance"))
  {
    m_pendingMaintenance = jsonValue.GetObject("pendingMaintenance");

  }

  if(jsonValue.ValueExists("preferredMaintenanceWindow"))
  {
    m_preferredMaintenanceWindow = jsonValue.GetString("preferredMaintenanceWindow");

  }

  if(jsonValue.ValueExists("publiclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("publiclyAccessible");

  }

  if(jsonValue.ValueExists("securityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = EnvironmentLifecycleMapper::GetEnvironmentLifecycleForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

  }

  if(jsonValue.ValueExists("storageConfigurations"))
  {
    Aws::Utils::Array<JsonView> storageConfigurationsJsonList = jsonValue.GetArray("storageConfigurations");
    for(unsigned storageConfigurationsIndex = 0; storageConfigurationsIndex < storageConfigurationsJsonList.GetLength(); ++storageConfigurationsIndex)
    {
      m_storageConfigurations.push_back(storageConfigurationsJsonList[storageConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("subnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");

  }



  return *this;
}
