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
#include <aws/opsworks/model/Recipes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

Recipes::Recipes() : 
    m_setupHasBeenSet(false),
    m_configureHasBeenSet(false),
    m_deployHasBeenSet(false),
    m_undeployHasBeenSet(false),
    m_shutdownHasBeenSet(false)
{
}

Recipes::Recipes(const JsonValue& jsonValue) : 
    m_setupHasBeenSet(false),
    m_configureHasBeenSet(false),
    m_deployHasBeenSet(false),
    m_undeployHasBeenSet(false),
    m_shutdownHasBeenSet(false)
{
  *this = jsonValue;
}

Recipes& Recipes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Setup"))
  {
    Array<JsonValue> setupJsonList = jsonValue.GetArray("Setup");
    for(unsigned setupIndex = 0; setupIndex < setupJsonList.GetLength(); ++setupIndex)
    {
      m_setup.push_back(setupJsonList[setupIndex].AsString());
    }
    m_setupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configure"))
  {
    Array<JsonValue> configureJsonList = jsonValue.GetArray("Configure");
    for(unsigned configureIndex = 0; configureIndex < configureJsonList.GetLength(); ++configureIndex)
    {
      m_configure.push_back(configureJsonList[configureIndex].AsString());
    }
    m_configureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Deploy"))
  {
    Array<JsonValue> deployJsonList = jsonValue.GetArray("Deploy");
    for(unsigned deployIndex = 0; deployIndex < deployJsonList.GetLength(); ++deployIndex)
    {
      m_deploy.push_back(deployJsonList[deployIndex].AsString());
    }
    m_deployHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Undeploy"))
  {
    Array<JsonValue> undeployJsonList = jsonValue.GetArray("Undeploy");
    for(unsigned undeployIndex = 0; undeployIndex < undeployJsonList.GetLength(); ++undeployIndex)
    {
      m_undeploy.push_back(undeployJsonList[undeployIndex].AsString());
    }
    m_undeployHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Shutdown"))
  {
    Array<JsonValue> shutdownJsonList = jsonValue.GetArray("Shutdown");
    for(unsigned shutdownIndex = 0; shutdownIndex < shutdownJsonList.GetLength(); ++shutdownIndex)
    {
      m_shutdown.push_back(shutdownJsonList[shutdownIndex].AsString());
    }
    m_shutdownHasBeenSet = true;
  }

  return *this;
}

JsonValue Recipes::Jsonize() const
{
  JsonValue payload;

  if(m_setupHasBeenSet)
  {
   Array<JsonValue> setupJsonList(m_setup.size());
   for(unsigned setupIndex = 0; setupIndex < setupJsonList.GetLength(); ++setupIndex)
   {
     setupJsonList[setupIndex].AsString(m_setup[setupIndex]);
   }
   payload.WithArray("Setup", std::move(setupJsonList));

  }

  if(m_configureHasBeenSet)
  {
   Array<JsonValue> configureJsonList(m_configure.size());
   for(unsigned configureIndex = 0; configureIndex < configureJsonList.GetLength(); ++configureIndex)
   {
     configureJsonList[configureIndex].AsString(m_configure[configureIndex]);
   }
   payload.WithArray("Configure", std::move(configureJsonList));

  }

  if(m_deployHasBeenSet)
  {
   Array<JsonValue> deployJsonList(m_deploy.size());
   for(unsigned deployIndex = 0; deployIndex < deployJsonList.GetLength(); ++deployIndex)
   {
     deployJsonList[deployIndex].AsString(m_deploy[deployIndex]);
   }
   payload.WithArray("Deploy", std::move(deployJsonList));

  }

  if(m_undeployHasBeenSet)
  {
   Array<JsonValue> undeployJsonList(m_undeploy.size());
   for(unsigned undeployIndex = 0; undeployIndex < undeployJsonList.GetLength(); ++undeployIndex)
   {
     undeployJsonList[undeployIndex].AsString(m_undeploy[undeployIndex]);
   }
   payload.WithArray("Undeploy", std::move(undeployJsonList));

  }

  if(m_shutdownHasBeenSet)
  {
   Array<JsonValue> shutdownJsonList(m_shutdown.size());
   for(unsigned shutdownIndex = 0; shutdownIndex < shutdownJsonList.GetLength(); ++shutdownIndex)
   {
     shutdownJsonList[shutdownIndex].AsString(m_shutdown[shutdownIndex]);
   }
   payload.WithArray("Shutdown", std::move(shutdownJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws