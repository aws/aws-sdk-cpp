/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/CreateApplicationVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateApplicationVersionResult::CreateApplicationVersionResult() : 
    m_resourcesSupported(false)
{
}

CreateApplicationVersionResult::CreateApplicationVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_resourcesSupported(false)
{
  *this = result;
}

CreateApplicationVersionResult& CreateApplicationVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("parameterDefinitions"))
  {
    Aws::Utils::Array<JsonView> parameterDefinitionsJsonList = jsonValue.GetArray("parameterDefinitions");
    for(unsigned parameterDefinitionsIndex = 0; parameterDefinitionsIndex < parameterDefinitionsJsonList.GetLength(); ++parameterDefinitionsIndex)
    {
      m_parameterDefinitions.push_back(parameterDefinitionsJsonList[parameterDefinitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("requiredCapabilities"))
  {
    Aws::Utils::Array<JsonView> requiredCapabilitiesJsonList = jsonValue.GetArray("requiredCapabilities");
    for(unsigned requiredCapabilitiesIndex = 0; requiredCapabilitiesIndex < requiredCapabilitiesJsonList.GetLength(); ++requiredCapabilitiesIndex)
    {
      m_requiredCapabilities.push_back(CapabilityMapper::GetCapabilityForName(requiredCapabilitiesJsonList[requiredCapabilitiesIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("resourcesSupported"))
  {
    m_resourcesSupported = jsonValue.GetBool("resourcesSupported");

  }

  if(jsonValue.ValueExists("semanticVersion"))
  {
    m_semanticVersion = jsonValue.GetString("semanticVersion");

  }

  if(jsonValue.ValueExists("sourceCodeArchiveUrl"))
  {
    m_sourceCodeArchiveUrl = jsonValue.GetString("sourceCodeArchiveUrl");

  }

  if(jsonValue.ValueExists("sourceCodeUrl"))
  {
    m_sourceCodeUrl = jsonValue.GetString("sourceCodeUrl");

  }

  if(jsonValue.ValueExists("templateUrl"))
  {
    m_templateUrl = jsonValue.GetString("templateUrl");

  }



  return *this;
}
