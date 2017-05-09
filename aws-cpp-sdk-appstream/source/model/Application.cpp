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

#include <aws/appstream/model/Application.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

Application::Application() : 
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_iconURLHasBeenSet(false),
    m_launchPathHasBeenSet(false),
    m_launchParametersHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

Application::Application(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_iconURLHasBeenSet(false),
    m_launchPathHasBeenSet(false),
    m_launchParametersHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_metadataHasBeenSet(false)
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

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IconURL"))
  {
    m_iconURL = jsonValue.GetString("IconURL");

    m_iconURLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchPath"))
  {
    m_launchPath = jsonValue.GetString("LaunchPath");

    m_launchPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchParameters"))
  {
    m_launchParameters = jsonValue.GetString("LaunchParameters");

    m_launchParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    Aws::Map<Aws::String, JsonValue> metadataJsonMap = jsonValue.GetObject("Metadata").GetAllObjects();
    for(auto& metadataItem : metadataJsonMap)
    {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
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

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_iconURLHasBeenSet)
  {
   payload.WithString("IconURL", m_iconURL);

  }

  if(m_launchPathHasBeenSet)
  {
   payload.WithString("LaunchPath", m_launchPath);

  }

  if(m_launchParametersHasBeenSet)
  {
   payload.WithString("LaunchParameters", m_launchParameters);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
   }
   payload.WithObject("Metadata", std::move(metadataJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws