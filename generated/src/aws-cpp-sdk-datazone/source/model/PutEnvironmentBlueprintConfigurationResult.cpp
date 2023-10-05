/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/PutEnvironmentBlueprintConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutEnvironmentBlueprintConfigurationResult::PutEnvironmentBlueprintConfigurationResult()
{
}

PutEnvironmentBlueprintConfigurationResult::PutEnvironmentBlueprintConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutEnvironmentBlueprintConfigurationResult& PutEnvironmentBlueprintConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("enabledRegions"))
  {
    Aws::Utils::Array<JsonView> enabledRegionsJsonList = jsonValue.GetArray("enabledRegions");
    for(unsigned enabledRegionsIndex = 0; enabledRegionsIndex < enabledRegionsJsonList.GetLength(); ++enabledRegionsIndex)
    {
      m_enabledRegions.push_back(enabledRegionsJsonList[enabledRegionsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("environmentBlueprintId"))
  {
    m_environmentBlueprintId = jsonValue.GetString("environmentBlueprintId");

  }

  if(jsonValue.ValueExists("manageAccessRoleArn"))
  {
    m_manageAccessRoleArn = jsonValue.GetString("manageAccessRoleArn");

  }

  if(jsonValue.ValueExists("provisioningRoleArn"))
  {
    m_provisioningRoleArn = jsonValue.GetString("provisioningRoleArn");

  }

  if(jsonValue.ValueExists("regionalParameters"))
  {
    Aws::Map<Aws::String, JsonView> regionalParametersJsonMap = jsonValue.GetObject("regionalParameters").GetAllObjects();
    for(auto& regionalParametersItem : regionalParametersJsonMap)
    {
      Aws::Map<Aws::String, JsonView> regionalParameterJsonMap = regionalParametersItem.second.GetAllObjects();
      Aws::Map<Aws::String, Aws::String> regionalParameterMap;
      for(auto& regionalParameterItem : regionalParameterJsonMap)
      {
        regionalParameterMap[regionalParameterItem.first] = regionalParameterItem.second.AsString();
      }
      m_regionalParameters[regionalParametersItem.first] = std::move(regionalParameterMap);
    }
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
