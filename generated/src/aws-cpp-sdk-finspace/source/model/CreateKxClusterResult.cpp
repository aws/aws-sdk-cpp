/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/CreateKxClusterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateKxClusterResult::CreateKxClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateKxClusterResult& CreateKxClusterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = KxClusterStatusMapper::GetKxClusterStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");
    m_clusterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterType"))
  {
    m_clusterType = KxClusterTypeMapper::GetKxClusterTypeForName(jsonValue.GetString("clusterType"));
    m_clusterTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tickerplantLogConfiguration"))
  {
    m_tickerplantLogConfiguration = jsonValue.GetObject("tickerplantLogConfiguration");
    m_tickerplantLogConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("volumes"))
  {
    Aws::Utils::Array<JsonView> volumesJsonList = jsonValue.GetArray("volumes");
    for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
    {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
    m_volumesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("databases"))
  {
    Aws::Utils::Array<JsonView> databasesJsonList = jsonValue.GetArray("databases");
    for(unsigned databasesIndex = 0; databasesIndex < databasesJsonList.GetLength(); ++databasesIndex)
    {
      m_databases.push_back(databasesJsonList[databasesIndex].AsObject());
    }
    m_databasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheStorageConfigurations"))
  {
    Aws::Utils::Array<JsonView> cacheStorageConfigurationsJsonList = jsonValue.GetArray("cacheStorageConfigurations");
    for(unsigned cacheStorageConfigurationsIndex = 0; cacheStorageConfigurationsIndex < cacheStorageConfigurationsJsonList.GetLength(); ++cacheStorageConfigurationsIndex)
    {
      m_cacheStorageConfigurations.push_back(cacheStorageConfigurationsJsonList[cacheStorageConfigurationsIndex].AsObject());
    }
    m_cacheStorageConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoScalingConfiguration"))
  {
    m_autoScalingConfiguration = jsonValue.GetObject("autoScalingConfiguration");
    m_autoScalingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterDescription"))
  {
    m_clusterDescription = jsonValue.GetString("clusterDescription");
    m_clusterDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("capacityConfiguration"))
  {
    m_capacityConfiguration = jsonValue.GetObject("capacityConfiguration");
    m_capacityConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("releaseLabel"))
  {
    m_releaseLabel = jsonValue.GetString("releaseLabel");
    m_releaseLabelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("vpcConfiguration");
    m_vpcConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("initializationScript"))
  {
    m_initializationScript = jsonValue.GetString("initializationScript");
    m_initializationScriptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commandLineArguments"))
  {
    Aws::Utils::Array<JsonView> commandLineArgumentsJsonList = jsonValue.GetArray("commandLineArguments");
    for(unsigned commandLineArgumentsIndex = 0; commandLineArgumentsIndex < commandLineArgumentsJsonList.GetLength(); ++commandLineArgumentsIndex)
    {
      m_commandLineArguments.push_back(commandLineArgumentsJsonList[commandLineArgumentsIndex].AsObject());
    }
    m_commandLineArgumentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetObject("code");
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionRole"))
  {
    m_executionRole = jsonValue.GetString("executionRole");
    m_executionRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");
    m_lastModifiedTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("savedownStorageConfiguration"))
  {
    m_savedownStorageConfiguration = jsonValue.GetObject("savedownStorageConfiguration");
    m_savedownStorageConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("azMode"))
  {
    m_azMode = KxAzModeMapper::GetKxAzModeForName(jsonValue.GetString("azMode"));
    m_azModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");
    m_availabilityZoneIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scalingGroupConfiguration"))
  {
    m_scalingGroupConfiguration = jsonValue.GetObject("scalingGroupConfiguration");
    m_scalingGroupConfigurationHasBeenSet = true;
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
