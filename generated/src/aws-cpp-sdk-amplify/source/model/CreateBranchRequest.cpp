/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/CreateBranchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBranchRequest::CreateBranchRequest() : 
    m_appIdHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_stage(Stage::NOT_SET),
    m_stageHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_enableNotification(false),
    m_enableNotificationHasBeenSet(false),
    m_enableAutoBuild(false),
    m_enableAutoBuildHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_basicAuthCredentialsHasBeenSet(false),
    m_enableBasicAuth(false),
    m_enableBasicAuthHasBeenSet(false),
    m_enablePerformanceMode(false),
    m_enablePerformanceModeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_buildSpecHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_enablePullRequestPreview(false),
    m_enablePullRequestPreviewHasBeenSet(false),
    m_pullRequestEnvironmentNameHasBeenSet(false),
    m_backendEnvironmentArnHasBeenSet(false)
{
}

Aws::String CreateBranchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_branchNameHasBeenSet)
  {
   payload.WithString("branchName", m_branchName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", StageMapper::GetNameForStage(m_stage));
  }

  if(m_frameworkHasBeenSet)
  {
   payload.WithString("framework", m_framework);

  }

  if(m_enableNotificationHasBeenSet)
  {
   payload.WithBool("enableNotification", m_enableNotification);

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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_buildSpecHasBeenSet)
  {
   payload.WithString("buildSpec", m_buildSpec);

  }

  if(m_ttlHasBeenSet)
  {
   payload.WithString("ttl", m_ttl);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_enablePullRequestPreviewHasBeenSet)
  {
   payload.WithBool("enablePullRequestPreview", m_enablePullRequestPreview);

  }

  if(m_pullRequestEnvironmentNameHasBeenSet)
  {
   payload.WithString("pullRequestEnvironmentName", m_pullRequestEnvironmentName);

  }

  if(m_backendEnvironmentArnHasBeenSet)
  {
   payload.WithString("backendEnvironmentArn", m_backendEnvironmentArn);

  }

  return payload.View().WriteReadable();
}




