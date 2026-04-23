/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iot/model/UpdateSecurityProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateSecurityProfileResult::UpdateSecurityProfileResult() : 
    m_version(0)
{
}

UpdateSecurityProfileResult::UpdateSecurityProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_version(0)
{
  *this = result;
}

UpdateSecurityProfileResult& UpdateSecurityProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("securityProfileName"))
  {
    m_securityProfileName = jsonValue.GetString("securityProfileName");

  }

  if(jsonValue.ValueExists("securityProfileArn"))
  {
    m_securityProfileArn = jsonValue.GetString("securityProfileArn");

  }

  if(jsonValue.ValueExists("securityProfileDescription"))
  {
    m_securityProfileDescription = jsonValue.GetString("securityProfileDescription");

  }

  if(jsonValue.ValueExists("behaviors"))
  {
    Array<JsonView> behaviorsJsonList = jsonValue.GetArray("behaviors");
    for(unsigned behaviorsIndex = 0; behaviorsIndex < behaviorsJsonList.GetLength(); ++behaviorsIndex)
    {
      m_behaviors.push_back(behaviorsJsonList[behaviorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("alertTargets"))
  {
    Aws::Map<Aws::String, JsonView> alertTargetsJsonMap = jsonValue.GetObject("alertTargets").GetAllObjects();
    for(auto& alertTargetsItem : alertTargetsJsonMap)
    {
      m_alertTargets[AlertTargetTypeMapper::GetAlertTargetTypeForName(alertTargetsItem.first)] = alertTargetsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("additionalMetricsToRetain"))
  {
    Array<JsonView> additionalMetricsToRetainJsonList = jsonValue.GetArray("additionalMetricsToRetain");
    for(unsigned additionalMetricsToRetainIndex = 0; additionalMetricsToRetainIndex < additionalMetricsToRetainJsonList.GetLength(); ++additionalMetricsToRetainIndex)
    {
      m_additionalMetricsToRetain.push_back(additionalMetricsToRetainJsonList[additionalMetricsToRetainIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInt64("version");

  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

  }



  return *this;
}
