/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/model/Application.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

Application::Application() : 
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_additionalInfoHasBeenSet(false)
{
}

Application::Application(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_additionalInfoHasBeenSet(false)
{
  *this = jsonValue;
}

Application& Application::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Args"))
  {
    Array<JsonValue> argsJsonList = jsonValue.GetArray("Args");
    for(unsigned argsIndex = 0; argsIndex < argsJsonList.GetLength(); ++argsIndex)
    {
      m_args.push_back(argsJsonList[argsIndex].AsString());
    }
    m_argsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalInfo"))
  {
    Aws::Map<Aws::String, JsonValue> additionalInfoJsonMap = jsonValue.GetObject("AdditionalInfo").GetAllObjects();
    for(auto& additionalInfoItem : additionalInfoJsonMap)
    {
      m_additionalInfo[additionalInfoItem.first] = additionalInfoItem.second.AsString();
    }
    m_additionalInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue Application::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_argsHasBeenSet)
  {
   Array<JsonValue> argsJsonList(m_args.size());
   for(unsigned argsIndex = 0; argsIndex < argsJsonList.GetLength(); ++argsIndex)
   {
     argsJsonList[argsIndex].AsString(m_args[argsIndex]);
   }
   payload.WithArray("Args", std::move(argsJsonList));

  }

  if(m_additionalInfoHasBeenSet)
  {
   JsonValue additionalInfoJsonMap;
   for(auto& additionalInfoItem : m_additionalInfo)
   {
     additionalInfoJsonMap.WithString(additionalInfoItem.first, additionalInfoItem.second);
   }
   payload.WithObject("AdditionalInfo", std::move(additionalInfoJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws