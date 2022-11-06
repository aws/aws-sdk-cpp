/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> behaviorsJsonList = jsonValue.GetArray("behaviors");
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

  if(jsonValue.ValueExists("additionalMetricsToRetainV2"))
  {
    Aws::Utils::Array<JsonView> additionalMetricsToRetainV2JsonList = jsonValue.GetArray("additionalMetricsToRetainV2");
    for(unsigned additionalMetricsToRetainV2Index = 0; additionalMetricsToRetainV2Index < additionalMetricsToRetainV2JsonList.GetLength(); ++additionalMetricsToRetainV2Index)
    {
      m_additionalMetricsToRetainV2.push_back(additionalMetricsToRetainV2JsonList[additionalMetricsToRetainV2Index].AsObject());
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
