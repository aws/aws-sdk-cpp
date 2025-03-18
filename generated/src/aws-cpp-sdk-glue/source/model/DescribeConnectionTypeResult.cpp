/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DescribeConnectionTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConnectionTypeResult::DescribeConnectionTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConnectionTypeResult& DescribeConnectionTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConnectionType"))
  {
    m_connectionType = jsonValue.GetString("ConnectionType");
    m_connectionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Capabilities"))
  {
    m_capabilities = jsonValue.GetObject("Capabilities");
    m_capabilitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionProperties"))
  {
    Aws::Map<Aws::String, JsonView> connectionPropertiesJsonMap = jsonValue.GetObject("ConnectionProperties").GetAllObjects();
    for(auto& connectionPropertiesItem : connectionPropertiesJsonMap)
    {
      m_connectionProperties[connectionPropertiesItem.first] = connectionPropertiesItem.second.AsObject();
    }
    m_connectionPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionOptions"))
  {
    Aws::Map<Aws::String, JsonView> connectionOptionsJsonMap = jsonValue.GetObject("ConnectionOptions").GetAllObjects();
    for(auto& connectionOptionsItem : connectionOptionsJsonMap)
    {
      m_connectionOptions[connectionOptionsItem.first] = connectionOptionsItem.second.AsObject();
    }
    m_connectionOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthenticationConfiguration"))
  {
    m_authenticationConfiguration = jsonValue.GetObject("AuthenticationConfiguration");
    m_authenticationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ComputeEnvironmentConfigurations"))
  {
    Aws::Map<Aws::String, JsonView> computeEnvironmentConfigurationsJsonMap = jsonValue.GetObject("ComputeEnvironmentConfigurations").GetAllObjects();
    for(auto& computeEnvironmentConfigurationsItem : computeEnvironmentConfigurationsJsonMap)
    {
      m_computeEnvironmentConfigurations[computeEnvironmentConfigurationsItem.first] = computeEnvironmentConfigurationsItem.second.AsObject();
    }
    m_computeEnvironmentConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PhysicalConnectionRequirements"))
  {
    Aws::Map<Aws::String, JsonView> physicalConnectionRequirementsJsonMap = jsonValue.GetObject("PhysicalConnectionRequirements").GetAllObjects();
    for(auto& physicalConnectionRequirementsItem : physicalConnectionRequirementsJsonMap)
    {
      m_physicalConnectionRequirements[physicalConnectionRequirementsItem.first] = physicalConnectionRequirementsItem.second.AsObject();
    }
    m_physicalConnectionRequirementsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AthenaConnectionProperties"))
  {
    Aws::Map<Aws::String, JsonView> athenaConnectionPropertiesJsonMap = jsonValue.GetObject("AthenaConnectionProperties").GetAllObjects();
    for(auto& athenaConnectionPropertiesItem : athenaConnectionPropertiesJsonMap)
    {
      m_athenaConnectionProperties[athenaConnectionPropertiesItem.first] = athenaConnectionPropertiesItem.second.AsObject();
    }
    m_athenaConnectionPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PythonConnectionProperties"))
  {
    Aws::Map<Aws::String, JsonView> pythonConnectionPropertiesJsonMap = jsonValue.GetObject("PythonConnectionProperties").GetAllObjects();
    for(auto& pythonConnectionPropertiesItem : pythonConnectionPropertiesJsonMap)
    {
      m_pythonConnectionProperties[pythonConnectionPropertiesItem.first] = pythonConnectionPropertiesItem.second.AsObject();
    }
    m_pythonConnectionPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SparkConnectionProperties"))
  {
    Aws::Map<Aws::String, JsonView> sparkConnectionPropertiesJsonMap = jsonValue.GetObject("SparkConnectionProperties").GetAllObjects();
    for(auto& sparkConnectionPropertiesItem : sparkConnectionPropertiesJsonMap)
    {
      m_sparkConnectionProperties[sparkConnectionPropertiesItem.first] = sparkConnectionPropertiesItem.second.AsObject();
    }
    m_sparkConnectionPropertiesHasBeenSet = true;
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
