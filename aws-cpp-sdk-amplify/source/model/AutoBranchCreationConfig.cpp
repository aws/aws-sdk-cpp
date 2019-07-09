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

#include <aws/amplify/model/AutoBranchCreationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

AutoBranchCreationConfig::AutoBranchCreationConfig() : 
    m_stage(Stage::NOT_SET),
    m_stageHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_enableAutoBuild(false),
    m_enableAutoBuildHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_basicAuthCredentialsHasBeenSet(false),
    m_enableBasicAuth(false),
    m_enableBasicAuthHasBeenSet(false),
    m_buildSpecHasBeenSet(false)
{
}

AutoBranchCreationConfig::AutoBranchCreationConfig(JsonView jsonValue) : 
    m_stage(Stage::NOT_SET),
    m_stageHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_enableAutoBuild(false),
    m_enableAutoBuildHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_basicAuthCredentialsHasBeenSet(false),
    m_enableBasicAuth(false),
    m_enableBasicAuthHasBeenSet(false),
    m_buildSpecHasBeenSet(false)
{
  *this = jsonValue;
}

AutoBranchCreationConfig& AutoBranchCreationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stage"))
  {
    m_stage = StageMapper::GetStageForName(jsonValue.GetString("stage"));

    m_stageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framework"))
  {
    m_framework = jsonValue.GetString("framework");

    m_frameworkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableAutoBuild"))
  {
    m_enableAutoBuild = jsonValue.GetBool("enableAutoBuild");

    m_enableAutoBuildHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentVariables"))
  {
    Aws::Map<Aws::String, JsonView> environmentVariablesJsonMap = jsonValue.GetObject("environmentVariables").GetAllObjects();
    for(auto& environmentVariablesItem : environmentVariablesJsonMap)
    {
      m_environmentVariables[environmentVariablesItem.first] = environmentVariablesItem.second.AsString();
    }
    m_environmentVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("basicAuthCredentials"))
  {
    m_basicAuthCredentials = jsonValue.GetString("basicAuthCredentials");

    m_basicAuthCredentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableBasicAuth"))
  {
    m_enableBasicAuth = jsonValue.GetBool("enableBasicAuth");

    m_enableBasicAuthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buildSpec"))
  {
    m_buildSpec = jsonValue.GetString("buildSpec");

    m_buildSpecHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoBranchCreationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", StageMapper::GetNameForStage(m_stage));
  }

  if(m_frameworkHasBeenSet)
  {
   payload.WithString("framework", m_framework);

  }

  if(m_enableAutoBuildHasBeenSet)
  {
   payload.WithBool("enableAutoBuild", m_enableAutoBuild);

  }

  if(m_environmentVariablesHasBeenSet)
  {
   JsonValue environmentVariablesJsonMap;
   for(auto& environmentVariablesItem : m_environmentVariables)
   {
     environmentVariablesJsonMap.WithString(environmentVariablesItem.first, environmentVariablesItem.second);
   }
   payload.WithObject("environmentVariables", std::move(environmentVariablesJsonMap));

  }

  if(m_basicAuthCredentialsHasBeenSet)
  {
   payload.WithString("basicAuthCredentials", m_basicAuthCredentials);

  }

  if(m_enableBasicAuthHasBeenSet)
  {
   payload.WithBool("enableBasicAuth", m_enableBasicAuth);

  }

  if(m_buildSpecHasBeenSet)
  {
   payload.WithString("buildSpec", m_buildSpec);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
