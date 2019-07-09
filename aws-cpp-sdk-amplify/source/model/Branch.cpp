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
    m_thumbnailUrlHasBeenSet(false),
    m_basicAuthCredentialsHasBeenSet(false),
    m_buildSpecHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_associatedResourcesHasBeenSet(false)
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
    m_thumbnailUrlHasBeenSet(false),
    m_basicAuthCredentialsHasBeenSet(false),
    m_buildSpecHasBeenSet(false),
    m_ttlHasBeenSet(false),
    m_associatedResourcesHasBeenSet(false)
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
    Array<JsonView> customDomainsJsonList = jsonValue.GetArray("customDomains");
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
    Array<JsonView> associatedResourcesJsonList = jsonValue.GetArray("associatedResources");
    for(unsigned associatedResourcesIndex = 0; associatedResourcesIndex < associatedResourcesJsonList.GetLength(); ++associatedResourcesIndex)
    {
      m_associatedResources.push_back(associatedResourcesJsonList[associatedResourcesIndex].AsString());
    }
    m_associatedResourcesHasBeenSet = true;
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
   Array<JsonValue> customDomainsJsonList(m_customDomains.size());
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
   Array<JsonValue> associatedResourcesJsonList(m_associatedResources.size());
   for(unsigned associatedResourcesIndex = 0; associatedResourcesIndex < associatedResourcesJsonList.GetLength(); ++associatedResourcesIndex)
   {
     associatedResourcesJsonList[associatedResourcesIndex].AsString(m_associatedResources[associatedResourcesIndex]);
   }
   payload.WithArray("associatedResources", std::move(associatedResourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
