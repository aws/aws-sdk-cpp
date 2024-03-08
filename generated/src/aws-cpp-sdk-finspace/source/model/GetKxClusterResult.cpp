/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/GetKxClusterResult.h>
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

GetKxClusterResult::GetKxClusterResult() : 
    m_status(KxClusterStatus::NOT_SET),
    m_clusterType(KxClusterType::NOT_SET),
    m_azMode(KxAzMode::NOT_SET)
{
}

GetKxClusterResult::GetKxClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(KxClusterStatus::NOT_SET),
    m_clusterType(KxClusterType::NOT_SET),
    m_azMode(KxAzMode::NOT_SET)
{
  *this = result;
}

GetKxClusterResult& GetKxClusterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = KxClusterStatusMapper::GetKxClusterStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

  }

  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

  }

  if(jsonValue.ValueExists("clusterType"))
  {
    m_clusterType = KxClusterTypeMapper::GetKxClusterTypeForName(jsonValue.GetString("clusterType"));

  }

  if(jsonValue.ValueExists("tickerplantLogConfiguration"))
  {
    m_tickerplantLogConfiguration = jsonValue.GetObject("tickerplantLogConfiguration");

  }

  if(jsonValue.ValueExists("volumes"))
  {
    Aws::Utils::Array<JsonView> volumesJsonList = jsonValue.GetArray("volumes");
    for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
    {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("databases"))
  {
    Aws::Utils::Array<JsonView> databasesJsonList = jsonValue.GetArray("databases");
    for(unsigned databasesIndex = 0; databasesIndex < databasesJsonList.GetLength(); ++databasesIndex)
    {
      m_databases.push_back(databasesJsonList[databasesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("cacheStorageConfigurations"))
  {
    Aws::Utils::Array<JsonView> cacheStorageConfigurationsJsonList = jsonValue.GetArray("cacheStorageConfigurations");
    for(unsigned cacheStorageConfigurationsIndex = 0; cacheStorageConfigurationsIndex < cacheStorageConfigurationsJsonList.GetLength(); ++cacheStorageConfigurationsIndex)
    {
      m_cacheStorageConfigurations.push_back(cacheStorageConfigurationsJsonList[cacheStorageConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("autoScalingConfiguration"))
  {
    m_autoScalingConfiguration = jsonValue.GetObject("autoScalingConfiguration");

  }

  if(jsonValue.ValueExists("clusterDescription"))
  {
    m_clusterDescription = jsonValue.GetString("clusterDescription");

  }

  if(jsonValue.ValueExists("capacityConfiguration"))
  {
    m_capacityConfiguration = jsonValue.GetObject("capacityConfiguration");

  }

  if(jsonValue.ValueExists("releaseLabel"))
  {
    m_releaseLabel = jsonValue.GetString("releaseLabel");

  }

  if(jsonValue.ValueExists("vpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("vpcConfiguration");

  }

  if(jsonValue.ValueExists("initializationScript"))
  {
    m_initializationScript = jsonValue.GetString("initializationScript");

  }

  if(jsonValue.ValueExists("commandLineArguments"))
  {
    Aws::Utils::Array<JsonView> commandLineArgumentsJsonList = jsonValue.GetArray("commandLineArguments");
    for(unsigned commandLineArgumentsIndex = 0; commandLineArgumentsIndex < commandLineArgumentsJsonList.GetLength(); ++commandLineArgumentsIndex)
    {
      m_commandLineArguments.push_back(commandLineArgumentsJsonList[commandLineArgumentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetObject("code");

  }

  if(jsonValue.ValueExists("executionRole"))
  {
    m_executionRole = jsonValue.GetString("executionRole");

  }

  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");

  }

  if(jsonValue.ValueExists("savedownStorageConfiguration"))
  {
    m_savedownStorageConfiguration = jsonValue.GetObject("savedownStorageConfiguration");

  }

  if(jsonValue.ValueExists("azMode"))
  {
    m_azMode = KxAzModeMapper::GetKxAzModeForName(jsonValue.GetString("azMode"));

  }

  if(jsonValue.ValueExists("availabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");

  }

  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");

  }

  if(jsonValue.ValueExists("scalingGroupConfiguration"))
  {
    m_scalingGroupConfiguration = jsonValue.GetObject("scalingGroupConfiguration");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
