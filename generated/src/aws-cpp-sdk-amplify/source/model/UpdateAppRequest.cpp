/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/UpdateAppRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAppRequest::UpdateAppRequest() : 
    m_appIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_platform(Platform::NOT_SET),
    m_platformHasBeenSet(false),
    m_iamServiceRoleArnHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_enableBranchAutoBuild(false),
    m_enableBranchAutoBuildHasBeenSet(false),
    m_enableBranchAutoDeletion(false),
    m_enableBranchAutoDeletionHasBeenSet(false),
    m_enableBasicAuth(false),
    m_enableBasicAuthHasBeenSet(false),
    m_basicAuthCredentialsHasBeenSet(false),
    m_customRulesHasBeenSet(false),
    m_buildSpecHasBeenSet(false),
    m_customHeadersHasBeenSet(false),
    m_enableAutoBranchCreation(false),
    m_enableAutoBranchCreationHasBeenSet(false),
    m_autoBranchCreationPatternsHasBeenSet(false),
    m_autoBranchCreationConfigHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_oauthTokenHasBeenSet(false),
    m_accessTokenHasBeenSet(false)
{
}

Aws::String UpdateAppRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", PlatformMapper::GetNameForPlatform(m_platform));
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

  if(m_repositoryHasBeenSet)
  {
   payload.WithString("repository", m_repository);

  }

  if(m_oauthTokenHasBeenSet)
  {
   payload.WithString("oauthToken", m_oauthToken);

  }

  if(m_accessTokenHasBeenSet)
  {
   payload.WithString("accessToken", m_accessToken);

  }

  return payload.View().WriteReadable();
}




