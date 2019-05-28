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

#include <aws/groundstation/model/GetConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConfigResult::GetConfigResult() : 
    m_configType(ConfigCapabilityType::NOT_SET)
{
}

GetConfigResult::GetConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_configType(ConfigCapabilityType::NOT_SET)
{
  *this = result;
}

GetConfigResult& GetConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("configArn"))
  {
    m_configArn = jsonValue.GetString("configArn");

  }

  if(jsonValue.ValueExists("configData"))
  {
    m_configData = jsonValue.GetObject("configData");

  }

  if(jsonValue.ValueExists("configId"))
  {
    m_configId = jsonValue.GetString("configId");

  }

  if(jsonValue.ValueExists("configType"))
  {
    m_configType = ConfigCapabilityTypeMapper::GetConfigCapabilityTypeForName(jsonValue.GetString("configType"));

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
