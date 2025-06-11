/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/GetControlResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ControlCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetControlResult::GetControlResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetControlResult& GetControlResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Aliases"))
  {
    Aws::Utils::Array<JsonView> aliasesJsonList = jsonValue.GetArray("Aliases");
    for(unsigned aliasesIndex = 0; aliasesIndex < aliasesJsonList.GetLength(); ++aliasesIndex)
    {
      m_aliases.push_back(aliasesJsonList[aliasesIndex].AsString());
    }
    m_aliasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Behavior"))
  {
    m_behavior = ControlBehaviorMapper::GetControlBehaviorForName(jsonValue.GetString("Behavior"));
    m_behaviorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = ControlSeverityMapper::GetControlSeverityForName(jsonValue.GetString("Severity"));
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegionConfiguration"))
  {
    m_regionConfiguration = jsonValue.GetObject("RegionConfiguration");
    m_regionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Implementation"))
  {
    m_implementation = jsonValue.GetObject("Implementation");
    m_implementationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("Parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetDouble("CreateTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GovernedResources"))
  {
    Aws::Utils::Array<JsonView> governedResourcesJsonList = jsonValue.GetArray("GovernedResources");
    for(unsigned governedResourcesIndex = 0; governedResourcesIndex < governedResourcesJsonList.GetLength(); ++governedResourcesIndex)
    {
      m_governedResources.push_back(governedResourcesJsonList[governedResourcesIndex].AsString());
    }
    m_governedResourcesHasBeenSet = true;
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
