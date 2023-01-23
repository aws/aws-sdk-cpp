/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/Branch.h>
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

Branch::Branch() : 
    m_branchArnHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_stage(Stage::NOT_SET),
    m_stageHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_enableNotification(false),
    m_enableNotificationHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_enableAutoBuild(false),
    m_enableAutoBuildHasBeenSet(false),
    m_customDomainsHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_activeJobIdHasBeenSet(false),
    m_totalNumberOfJobsHasBeenSet(false),
    m_enableBasicAuth(false),
    m_enableBasicAuthHasBeenSet(false),
    m_enablePerformanceMode(false),
    m_enablePerformanceModeHasBeenSet(false),
    m_thumbnailUrlHasBeenSet(false),
    m_basicAuthCredentialsHasBeenSet(false),
    m_buildSpecHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_associatedResourcesHasBeenSet(false),
    m_enablePullRequestPreview(false),
    m_enablePullRequestPreviewHasBeenSet(false),
    m_pullRequestEnvironmentNameHasBeenSet(false),
    m_destinationBranchHasBeenSet(false),
    m_sourceBranchHasBeenSet(false),
    m_backendEnvironmentArnHasBeenSet(false)
{
}

Branch::Branch(JsonView jsonValue) : 
    m_branchArnHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_stage(Stage::NOT_SET),
    m_stageHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_enableNotification(false),
    m_enableNotificationHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_environmentVariablesHasBeenSet(false),
    m_enableAutoBuild(false),
    m_enableAutoBuildHasBeenSet(false),
    m_customDomainsHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_activeJobIdHasBeenSet(false),
    m_totalNumberOfJobsHasBeenSet(false),
    m_enableBasicAuth(false),
    m_enableBasicAuthHasBeenSet(false),
    m_enablePerformanceMode(false),
    m_enablePerformanceModeHasBeenSet(false),
    m_thumbnailUrlHasBeenSet(false),
    m_basicAuthCredentialsHasBeenSet(false),
    m_buildSpecHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_associatedResourcesHasBeenSet(false),
    m_enablePullRequestPreview(false),
    m_enablePullRequestPreviewHasBeenSet(false),
    m_pullRequestEnvironmentNameHasBeenSet(false),
    m_destinationBranchHasBeenSet(false),
    m_sourceBranchHasBeenSet(false),
    m_backendEnvironmentArnHasBeenSet(false)
{
  *this = jsonValue;
}

Branch& Branch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("branchArn"))
  {
    m_branchArn = jsonValue.GetString("branchArn");

    m_branchArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branchName"))
  {
    m_branchName = jsonValue.GetString("branchName");

    m_branchNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
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

  if(jsonValue.ValueExists("stage"))
  {
    m_stage = StageMapper::GetStageForName(jsonValue.GetString("stage"));

    m_stageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableNotification"))
  {
    m_enableNotification = jsonValue.GetBool("enableNotification");

    m_enableNotificationHasBeenSet = true;
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

  if(jsonValue.ValueExists("environmentVariables"))
  {
    Aws::Map<Aws::String, JsonView> environmentVariablesJsonMap = jsonValue.GetObject("environmentVariables").GetAllObjects();
    for(auto& environmentVariablesItem : environmentVariablesJsonMap)
    {
      m_environmentVariables[environmentVariablesItem.first] = environmentVariablesItem.second.AsString();
    }
    m_environmentVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableAutoBuild"))
  {
    m_enableAutoBuild = jsonValue.GetBool("enableAutoBuild");

    m_enableAutoBuildHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customDomains"))
  {
    Aws::Utils::Array<JsonView> customDomainsJsonList = jsonValue.GetArray("customDomains");
    for(unsigned customDomainsIndex = 0; customDomainsIndex < customDomainsJsonList.GetLength(); ++customDomainsIndex)
    {
      m_customDomains.push_back(customDomainsJsonList[customDomainsIndex].AsString());
    }
    m_customDomainsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framework"))
  {
    m_framework = jsonValue.GetString("framework");

    m_frameworkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeJobId"))
  {
    m_activeJobId = jsonValue.GetString("activeJobId");

    m_activeJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalNumberOfJobs"))
  {
    m_totalNumberOfJobs = jsonValue.GetString("totalNumberOfJobs");

    m_totalNumberOfJobsHasBeenSet = true;
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

  if(jsonValue.ValueExists("thumbnailUrl"))
  {
    m_thumbnailUrl = jsonValue.GetString("thumbnailUrl");

    m_thumbnailUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("basicAuthCredentials"))
  {
    m_basicAuthCredentials = jsonValue.GetString("basicAuthCredentials");

    m_basicAuthCredentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buildSpec"))
  {
    m_buildSpec = jsonValue.GetString("buildSpec");

    m_buildSpecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ttl"))
  {
    m_ttl = jsonValue.GetString("ttl");

    m_ttlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associatedResources"))
  {
    Aws::Utils::Array<JsonView> associatedResourcesJsonList = jsonValue.GetArray("associatedResources");
    for(unsigned associatedResourcesIndex = 0; associatedResourcesIndex < associatedResourcesJsonList.GetLength(); ++associatedResourcesIndex)
    {
      m_associatedResources.push_back(associatedResourcesJsonList[associatedResourcesIndex].AsString());
    }
    m_associatedResourcesHasBeenSet = true;
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

  if(jsonValue.ValueExists("destinationBranch"))
  {
    m_destinationBranch = jsonValue.GetString("destinationBranch");

    m_destinationBranchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceBranch"))
  {
    m_sourceBranch = jsonValue.GetString("sourceBranch");

    m_sourceBranchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("backendEnvironmentArn"))
  {
    m_backendEnvironmentArn = jsonValue.GetString("backendEnvironmentArn");

    m_backendEnvironmentArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Branch::Jsonize() const
{
  JsonValue payload;

  if(m_branchArnHasBeenSet)
  {
   payload.WithString("branchArn", m_branchArn);

  }

  if(m_branchNameHasBeenSet)
  {
   payload.WithString("branchName", m_branchName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

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

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", StageMapper::GetNameForStage(m_stage));
  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_enableNotificationHasBeenSet)
  {
   payload.WithBool("enableNotification", m_enableNotification);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
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

  if(m_enableAutoBuildHasBeenSet)
  {
   payload.WithBool("enableAutoBuild", m_enableAutoBuild);

  }

  if(m_customDomainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customDomainsJsonList(m_customDomains.size());
   for(unsigned customDomainsIndex = 0; customDomainsIndex < customDomainsJsonList.GetLength(); ++customDomainsIndex)
   {
     customDomainsJsonList[customDomainsIndex].AsString(m_customDomains[customDomainsIndex]);
   }
   payload.WithArray("customDomains", std::move(customDomainsJsonList));

  }

  if(m_frameworkHasBeenSet)
  {
   payload.WithString("framework", m_framework);

  }

  if(m_activeJobIdHasBeenSet)
  {
   payload.WithString("activeJobId", m_activeJobId);

  }

  if(m_totalNumberOfJobsHasBeenSet)
  {
   payload.WithString("totalNumberOfJobs", m_totalNumberOfJobs);

  }

  if(m_enableBasicAuthHasBeenSet)
  {
   payload.WithBool("enableBasicAuth", m_enableBasicAuth);

  }

  if(m_enablePerformanceModeHasBeenSet)
  {
   payload.WithBool("enablePerformanceMode", m_enablePerformanceMode);

  }

  if(m_thumbnailUrlHasBeenSet)
  {
   payload.WithString("thumbnailUrl", m_thumbnailUrl);

  }

  if(m_basicAuthCredentialsHasBeenSet)
  {
   payload.WithString("basicAuthCredentials", m_basicAuthCredentials);

  }

  if(m_buildSpecHasBeenSet)
  {
   payload.WithString("buildSpec", m_buildSpec);

  }

  if(m_ttlHasBeenSet)
  {
   payload.WithString("ttl", m_ttl);

  }

  if(m_associatedResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associatedResourcesJsonList(m_associatedResources.size());
   for(unsigned associatedResourcesIndex = 0; associatedResourcesIndex < associatedResourcesJsonList.GetLength(); ++associatedResourcesIndex)
   {
     associatedResourcesJsonList[associatedResourcesIndex].AsString(m_associatedResources[associatedResourcesIndex]);
   }
   payload.WithArray("associatedResources", std::move(associatedResourcesJsonList));

  }

  if(m_enablePullRequestPreviewHasBeenSet)
  {
   payload.WithBool("enablePullRequestPreview", m_enablePullRequestPreview);

  }

  if(m_pullRequestEnvironmentNameHasBeenSet)
  {
   payload.WithString("pullRequestEnvironmentName", m_pullRequestEnvironmentName);

  }

  if(m_destinationBranchHasBeenSet)
  {
   payload.WithString("destinationBranch", m_destinationBranch);

  }

  if(m_sourceBranchHasBeenSet)
  {
   payload.WithString("sourceBranch", m_sourceBranch);

  }

  if(m_backendEnvironmentArnHasBeenSet)
  {
   payload.WithString("backendEnvironmentArn", m_backendEnvironmentArn);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
