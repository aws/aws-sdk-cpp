/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/App.h>
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

App::App() : 
    m_appIdHasBeenSet(false),
    m_appArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_iamServiceRoleArnHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_defaultDomainHasBeenSet(false),
    m_enableBranchAutoBuild(false),
    m_enableBranchAutoBuildHasBeenSet(false),
    m_enableBranchAutoDeletion(false),
    m_enableBranchAutoDeletionHasBeenSet(false),
    m_enableBasicAuth(false),
    m_enableBasicAuthHasBeenSet(false),
    m_basicAuthCredentialsHasBeenSet(false),
    m_customRulesHasBeenSet(false),
    m_productionBranchHasBeenSet(false),
    m_buildSpecHasBeenSet(false),
    m_customHeadersHasBeenSet(false),
    m_enableAutoBranchCreation(false),
    m_enableAutoBranchCreationHasBeenSet(false),
    m_autoBranchCreationPatternsHasBeenSet(false),
    m_autoBranchCreationConfigHasBeenSet(false),
    m_repositoryCloneMethod(RepositoryCloneMethod::NOT_SET),
    m_repositoryCloneMethodHasBeenSet(false)
{
}

App::App(JsonView jsonValue) : 
    m_appIdHasBeenSet(false),
    m_appArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_iamServiceRoleArnHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_defaultDomainHasBeenSet(false),
    m_enableBranchAutoBuild(false),
    m_enableBranchAutoBuildHasBeenSet(false),
    m_enableBranchAutoDeletion(false),
    m_enableBranchAutoDeletionHasBeenSet(false),
    m_enableBasicAuth(false),
    m_enableBasicAuthHasBeenSet(false),
    m_basicAuthCredentialsHasBeenSet(false),
    m_customRulesHasBeenSet(false),
    m_productionBranchHasBeenSet(false),
    m_buildSpecHasBeenSet(false),
    m_customHeadersHasBeenSet(false),
    m_enableAutoBranchCreation(false),
    m_enableAutoBranchCreationHasBeenSet(false),
    m_autoBranchCreationPatternsHasBeenSet(false),
    m_autoBranchCreationConfigHasBeenSet(false),
    m_repositoryCloneMethod(RepositoryCloneMethod::NOT_SET),
    m_repositoryCloneMethodHasBeenSet(false)
{
  *this = jsonValue;
}

App& App::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appId"))
  {
    m_appId = jsonValue.GetString("appId");

    m_appIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appArn"))
  {
    m_appArn = jsonValue.GetString("appArn");

    m_appArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repository"))
  {
    m_repository = jsonValue.GetString("repository");

    m_repositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = PlatformMapper::GetPlatformForName(jsonValue.GetString("platform"));

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetDouble("updateTime");

    m_updateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iamServiceRoleArn"))
  {
    m_iamServiceRoleArn = jsonValue.GetString("iamServiceRoleArn");

    m_iamServiceRoleArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("defaultDomain"))
  {
    m_defaultDomain = jsonValue.GetString("defaultDomain");

    m_defaultDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableBranchAutoBuild"))
  {
    m_enableBranchAutoBuild = jsonValue.GetBool("enableBranchAutoBuild");

    m_enableBranchAutoBuildHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableBranchAutoDeletion"))
  {
    m_enableBranchAutoDeletion = jsonValue.GetBool("enableBranchAutoDeletion");

    m_enableBranchAutoDeletionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableBasicAuth"))
  {
    m_enableBasicAuth = jsonValue.GetBool("enableBasicAuth");

    m_enableBasicAuthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("basicAuthCredentials"))
  {
    m_basicAuthCredentials = jsonValue.GetString("basicAuthCredentials");

    m_basicAuthCredentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customRules"))
  {
    Aws::Utils::Array<JsonView> customRulesJsonList = jsonValue.GetArray("customRules");
    for(unsigned customRulesIndex = 0; customRulesIndex < customRulesJsonList.GetLength(); ++customRulesIndex)
    {
      m_customRules.push_back(customRulesJsonList[customRulesIndex].AsObject());
    }
    m_customRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("productionBranch"))
  {
    m_productionBranch = jsonValue.GetObject("productionBranch");

    m_productionBranchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buildSpec"))
  {
    m_buildSpec = jsonValue.GetString("buildSpec");

    m_buildSpecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customHeaders"))
  {
    m_customHeaders = jsonValue.GetString("customHeaders");

    m_customHeadersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableAutoBranchCreation"))
  {
    m_enableAutoBranchCreation = jsonValue.GetBool("enableAutoBranchCreation");

    m_enableAutoBranchCreationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoBranchCreationPatterns"))
  {
    Aws::Utils::Array<JsonView> autoBranchCreationPatternsJsonList = jsonValue.GetArray("autoBranchCreationPatterns");
    for(unsigned autoBranchCreationPatternsIndex = 0; autoBranchCreationPatternsIndex < autoBranchCreationPatternsJsonList.GetLength(); ++autoBranchCreationPatternsIndex)
    {
      m_autoBranchCreationPatterns.push_back(autoBranchCreationPatternsJsonList[autoBranchCreationPatternsIndex].AsString());
    }
    m_autoBranchCreationPatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoBranchCreationConfig"))
  {
    m_autoBranchCreationConfig = jsonValue.GetObject("autoBranchCreationConfig");

    m_autoBranchCreationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryCloneMethod"))
  {
    m_repositoryCloneMethod = RepositoryCloneMethodMapper::GetRepositoryCloneMethodForName(jsonValue.GetString("repositoryCloneMethod"));

    m_repositoryCloneMethodHasBeenSet = true;
  }

  return *this;
}

JsonValue App::Jsonize() const
{
  JsonValue payload;

  if(m_appIdHasBeenSet)
  {
   payload.WithString("appId", m_appId);

  }

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_repositoryHasBeenSet)
  {
   payload.WithString("repository", m_repository);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", PlatformMapper::GetNameForPlatform(m_platform));
  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_iamServiceRoleArnHasBeenSet)
  {
   payload.WithString("iamServiceRoleArn", m_iamServiceRoleArn);

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

  if(m_defaultDomainHasBeenSet)
  {
   payload.WithString("defaultDomain", m_defaultDomain);

  }

  if(m_enableBranchAutoBuildHasBeenSet)
  {
   payload.WithBool("enableBranchAutoBuild", m_enableBranchAutoBuild);

  }

  if(m_enableBranchAutoDeletionHasBeenSet)
  {
   payload.WithBool("enableBranchAutoDeletion", m_enableBranchAutoDeletion);

  }

  if(m_enableBasicAuthHasBeenSet)
  {
   payload.WithBool("enableBasicAuth", m_enableBasicAuth);

  }

  if(m_basicAuthCredentialsHasBeenSet)
  {
   payload.WithString("basicAuthCredentials", m_basicAuthCredentials);

  }

  if(m_customRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customRulesJsonList(m_customRules.size());
   for(unsigned customRulesIndex = 0; customRulesIndex < customRulesJsonList.GetLength(); ++customRulesIndex)
   {
     customRulesJsonList[customRulesIndex].AsObject(m_customRules[customRulesIndex].Jsonize());
   }
   payload.WithArray("customRules", std::move(customRulesJsonList));

  }

  if(m_productionBranchHasBeenSet)
  {
   payload.WithObject("productionBranch", m_productionBranch.Jsonize());

  }

  if(m_buildSpecHasBeenSet)
  {
   payload.WithString("buildSpec", m_buildSpec);

  }

  if(m_customHeadersHasBeenSet)
  {
   payload.WithString("customHeaders", m_customHeaders);

  }

  if(m_enableAutoBranchCreationHasBeenSet)
  {
   payload.WithBool("enableAutoBranchCreation", m_enableAutoBranchCreation);

  }

  if(m_autoBranchCreationPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autoBranchCreationPatternsJsonList(m_autoBranchCreationPatterns.size());
   for(unsigned autoBranchCreationPatternsIndex = 0; autoBranchCreationPatternsIndex < autoBranchCreationPatternsJsonList.GetLength(); ++autoBranchCreationPatternsIndex)
   {
     autoBranchCreationPatternsJsonList[autoBranchCreationPatternsIndex].AsString(m_autoBranchCreationPatterns[autoBranchCreationPatternsIndex]);
   }
   payload.WithArray("autoBranchCreationPatterns", std::move(autoBranchCreationPatternsJsonList));

  }

  if(m_autoBranchCreationConfigHasBeenSet)
  {
   payload.WithObject("autoBranchCreationConfig", m_autoBranchCreationConfig.Jsonize());

  }

  if(m_repositoryCloneMethodHasBeenSet)
  {
   payload.WithString("repositoryCloneMethod", RepositoryCloneMethodMapper::GetNameForRepositoryCloneMethod(m_repositoryCloneMethod));
  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
