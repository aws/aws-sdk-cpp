/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateEnvironmentResult.h>
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

UpdateEnvironmentResult::UpdateEnvironmentResult() : 
    m_status(EnvironmentStatus::NOT_SET)
{
}

UpdateEnvironmentResult::UpdateEnvironmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(EnvironmentStatus::NOT_SET)
{
  *this = result;
}

UpdateEnvironmentResult& UpdateEnvironmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

  }

  if(jsonValue.ValueExists("awsAccountRegion"))
  {
    m_awsAccountRegion = jsonValue.GetString("awsAccountRegion");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("deploymentProperties"))
  {
    m_deploymentProperties = jsonValue.GetObject("deploymentProperties");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("environmentActions"))
  {
    Aws::Utils::Array<JsonView> environmentActionsJsonList = jsonValue.GetArray("environmentActions");
    for(unsigned environmentActionsIndex = 0; environmentActionsIndex < environmentActionsJsonList.GetLength(); ++environmentActionsIndex)
    {
      m_environmentActions.push_back(environmentActionsJsonList[environmentActionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("environmentBlueprintId"))
  {
    m_environmentBlueprintId = jsonValue.GetString("environmentBlueprintId");

  }

  if(jsonValue.ValueExists("environmentProfileId"))
  {
    m_environmentProfileId = jsonValue.GetString("environmentProfileId");

  }

  if(jsonValue.ValueExists("glossaryTerms"))
  {
    Aws::Utils::Array<JsonView> glossaryTermsJsonList = jsonValue.GetArray("glossaryTerms");
    for(unsigned glossaryTermsIndex = 0; glossaryTermsIndex < glossaryTermsJsonList.GetLength(); ++glossaryTermsIndex)
    {
      m_glossaryTerms.push_back(glossaryTermsJsonList[glossaryTermsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("lastDeployment"))
  {
    m_lastDeployment = jsonValue.GetObject("lastDeployment");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");

  }

  if(jsonValue.ValueExists("provider"))
  {
    m_provider = jsonValue.GetString("provider");

  }

  if(jsonValue.ValueExists("provisionedResources"))
  {
    Aws::Utils::Array<JsonView> provisionedResourcesJsonList = jsonValue.GetArray("provisionedResources");
    for(unsigned provisionedResourcesIndex = 0; provisionedResourcesIndex < provisionedResourcesJsonList.GetLength(); ++provisionedResourcesIndex)
    {
      m_provisionedResources.push_back(provisionedResourcesJsonList[provisionedResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("provisioningProperties"))
  {
    m_provisioningProperties = jsonValue.GetObject("provisioningProperties");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }

  if(jsonValue.ValueExists("userParameters"))
  {
    Aws::Utils::Array<JsonView> userParametersJsonList = jsonValue.GetArray("userParameters");
    for(unsigned userParametersIndex = 0; userParametersIndex < userParametersJsonList.GetLength(); ++userParametersIndex)
    {
      m_userParameters.push_back(userParametersJsonList[userParametersIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
