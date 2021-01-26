/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_enablePerformanceMode(false),
    m_enablePerformanceModeHasBeenSet(false),
    m_buildSpecHasBeenSet(false),
    m_enablePullRequestPreview(false),
    m_enablePullRequestPreviewHasBeenSet(false),
    m_pullRequestEnvironmentNameHasBeenSet(false)
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
    m_enablePerformanceMode(false),
    m_enablePerformanceModeHasBeenSet(false),
    m_buildSpecHasBeenSet(false),
    m_enablePullRequestPreview(false),
    m_enablePullRequestPreviewHasBeenSet(false),
    m_pullRequestEnvironmentNameHasBeenSet(false)
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

  if(jsonValue.ValueExists("enablePerformanceMode"))
  {
    m_enablePerformanceMode = jsonValue.GetBool("enablePerformanceMode");

    m_enablePerformanceModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buildSpec"))
  {
    m_buildSpec = jsonValue.GetString("buildSpec");

    m_buildSpecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enablePullRequestPreview"))
  {
    m_enablePullRequestPreview = jsonValue.GetBool("enablePullRequestPreview");

    m_enablePullRequestPreviewHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pullRequestEnvironmentName"))
  {
    m_pullRequestEnvironmentName = jsonValue.GetString("pullRequestEnvironmentName");

    m_pullRequestEnvironmentNameHasBeenSet = true;
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

  if(m_enablePerformanceModeHasBeenSet)
  {
   payload.WithBool("enablePerformanceMode", m_enablePerformanceMode);

  }

  if(m_buildSpecHasBeenSet)
  {
   payload.WithString("buildSpec", m_buildSpec);

  }

  if(m_enablePullRequestPreviewHasBeenSet)
  {
   payload.WithBool("enablePullRequestPreview", m_enablePullRequestPreview);

  }

  if(m_pullRequestEnvironmentNameHasBeenSet)
  {
   payload.WithString("pullRequestEnvironmentName", m_pullRequestEnvironmentName);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
