﻿/*
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

#include <aws/opsworks/model/DeploymentCommand.h>
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

DeploymentCommand::DeploymentCommand() : 
    m_name(DeploymentCommandName::NOT_SET),
    m_nameHasBeenSet(false),
    m_argsHasBeenSet(false)
{
}

DeploymentCommand::DeploymentCommand(JsonView jsonValue) : 
    m_name(DeploymentCommandName::NOT_SET),
    m_nameHasBeenSet(false),
    m_argsHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentCommand& DeploymentCommand::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = DeploymentCommandNameMapper::GetDeploymentCommandNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Args"))
  {
    Aws::Map<Aws::String, JsonView> argsJsonMap = jsonValue.GetObject("Args").GetAllObjects();
    for(auto& argsItem : argsJsonMap)
    {
      Array<JsonView> stringsJsonList = argsItem.second.AsArray();
      Aws::Vector<Aws::String> stringsList;
      stringsList.reserve((size_t)stringsJsonList.GetLength());
      for(unsigned stringsIndex = 0; stringsIndex < stringsJsonList.GetLength(); ++stringsIndex)
      {
        stringsList.push_back(stringsJsonList[stringsIndex].AsString());
      }
      m_args[argsItem.first] = std::move(stringsList);
    }
    m_argsHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentCommand::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", DeploymentCommandNameMapper::GetNameForDeploymentCommandName(m_name));
  }

  if(m_argsHasBeenSet)
  {
   JsonValue argsJsonMap;
   for(auto& argsItem : m_args)
   {
     Array<JsonValue> stringsJsonList(argsItem.second.size());
     for(unsigned stringsIndex = 0; stringsIndex < stringsJsonList.GetLength(); ++stringsIndex)
     {
       stringsJsonList[stringsIndex].AsString(argsItem.second[stringsIndex]);
     }
     argsJsonMap.WithArray(argsItem.first, std::move(stringsJsonList));
   }
   payload.WithObject("Args", std::move(argsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
