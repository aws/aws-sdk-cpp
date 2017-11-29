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

#include <aws/greengrass/model/CreateSoftwareUpdateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSoftwareUpdateJobRequest::CreateSoftwareUpdateJobRequest() : 
    m_amznClientTokenHasBeenSet(false),
    m_s3UrlSignerRoleHasBeenSet(false),
    m_softwareToUpdate(SoftwareToUpdate::NOT_SET),
    m_softwareToUpdateHasBeenSet(false),
    m_updateAgentLogLevel(UpdateAgentLogLevel::NOT_SET),
    m_updateAgentLogLevelHasBeenSet(false),
    m_updateTargetsHasBeenSet(false),
    m_updateTargetsArchitecture(UpdateTargetsArchitecture::NOT_SET),
    m_updateTargetsArchitectureHasBeenSet(false),
    m_updateTargetsOperatingSystem(UpdateTargetsOperatingSystem::NOT_SET),
    m_updateTargetsOperatingSystemHasBeenSet(false)
{
}

Aws::String CreateSoftwareUpdateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_s3UrlSignerRoleHasBeenSet)
  {
   payload.WithString("S3UrlSignerRole", m_s3UrlSignerRole);

  }

  if(m_softwareToUpdateHasBeenSet)
  {
   payload.WithString("SoftwareToUpdate", SoftwareToUpdateMapper::GetNameForSoftwareToUpdate(m_softwareToUpdate));
  }

  if(m_updateAgentLogLevelHasBeenSet)
  {
   payload.WithString("UpdateAgentLogLevel", UpdateAgentLogLevelMapper::GetNameForUpdateAgentLogLevel(m_updateAgentLogLevel));
  }

  if(m_updateTargetsHasBeenSet)
  {
   Array<JsonValue> updateTargetsJsonList(m_updateTargets.size());
   for(unsigned updateTargetsIndex = 0; updateTargetsIndex < updateTargetsJsonList.GetLength(); ++updateTargetsIndex)
   {
     updateTargetsJsonList[updateTargetsIndex].AsString(m_updateTargets[updateTargetsIndex]);
   }
   payload.WithArray("UpdateTargets", std::move(updateTargetsJsonList));

  }

  if(m_updateTargetsArchitectureHasBeenSet)
  {
   payload.WithString("UpdateTargetsArchitecture", UpdateTargetsArchitectureMapper::GetNameForUpdateTargetsArchitecture(m_updateTargetsArchitecture));
  }

  if(m_updateTargetsOperatingSystemHasBeenSet)
  {
   payload.WithString("UpdateTargetsOperatingSystem", UpdateTargetsOperatingSystemMapper::GetNameForUpdateTargetsOperatingSystem(m_updateTargetsOperatingSystem));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSoftwareUpdateJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_amznClientTokenHasBeenSet)
  {
    ss << m_amznClientToken;
    headers.insert(Aws::Http::HeaderValuePair("x-amzn-client-token", ss.str()));
    ss.str("");
  }

  return headers;

}




