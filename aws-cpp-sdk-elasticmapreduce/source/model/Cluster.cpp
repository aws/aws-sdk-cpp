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
#include <aws/elasticmapreduce/model/Cluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

Cluster::Cluster() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ec2InstanceAttributesHasBeenSet(false),
    m_logUriHasBeenSet(false),
    m_requestedAmiVersionHasBeenSet(false),
    m_runningAmiVersionHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_autoTerminate(false),
    m_autoTerminateHasBeenSet(false),
    m_terminationProtected(false),
    m_terminationProtectedHasBeenSet(false),
    m_visibleToAllUsers(false),
    m_visibleToAllUsersHasBeenSet(false),
    m_applicationsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_normalizedInstanceHours(0),
    m_normalizedInstanceHoursHasBeenSet(false),
    m_masterPublicDnsNameHasBeenSet(false),
    m_configurationsHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false)
{
}

Cluster::Cluster(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ec2InstanceAttributesHasBeenSet(false),
    m_logUriHasBeenSet(false),
    m_requestedAmiVersionHasBeenSet(false),
    m_runningAmiVersionHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_autoTerminate(false),
    m_autoTerminateHasBeenSet(false),
    m_terminationProtected(false),
    m_terminationProtectedHasBeenSet(false),
    m_visibleToAllUsers(false),
    m_visibleToAllUsersHasBeenSet(false),
    m_applicationsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_normalizedInstanceHours(0),
    m_normalizedInstanceHoursHasBeenSet(false),
    m_masterPublicDnsNameHasBeenSet(false),
    m_configurationsHasBeenSet(false),
    m_securityConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

Cluster& Cluster::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2InstanceAttributes"))
  {
    m_ec2InstanceAttributes = jsonValue.GetObject("Ec2InstanceAttributes");

    m_ec2InstanceAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogUri"))
  {
    m_logUri = jsonValue.GetString("LogUri");

    m_logUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestedAmiVersion"))
  {
    m_requestedAmiVersion = jsonValue.GetString("RequestedAmiVersion");

    m_requestedAmiVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunningAmiVersion"))
  {
    m_runningAmiVersion = jsonValue.GetString("RunningAmiVersion");

    m_runningAmiVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReleaseLabel"))
  {
    m_releaseLabel = jsonValue.GetString("ReleaseLabel");

    m_releaseLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoTerminate"))
  {
    m_autoTerminate = jsonValue.GetBool("AutoTerminate");

    m_autoTerminateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TerminationProtected"))
  {
    m_terminationProtected = jsonValue.GetBool("TerminationProtected");

    m_terminationProtectedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisibleToAllUsers"))
  {
    m_visibleToAllUsers = jsonValue.GetBool("VisibleToAllUsers");

    m_visibleToAllUsersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Applications"))
  {
    Array<JsonValue> applicationsJsonList = jsonValue.GetArray("Applications");
    for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
    {
      m_applications.push_back(applicationsJsonList[applicationsIndex].AsObject());
    }
    m_applicationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Array<JsonValue> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceRole"))
  {
    m_serviceRole = jsonValue.GetString("ServiceRole");

    m_serviceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NormalizedInstanceHours"))
  {
    m_normalizedInstanceHours = jsonValue.GetInteger("NormalizedInstanceHours");

    m_normalizedInstanceHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterPublicDnsName"))
  {
    m_masterPublicDnsName = jsonValue.GetString("MasterPublicDnsName");

    m_masterPublicDnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configurations"))
  {
    Array<JsonValue> configurationsJsonList = jsonValue.GetArray("Configurations");
    for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
    {
      m_configurations.push_back(configurationsJsonList[configurationsIndex].AsObject());
    }
    m_configurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityConfiguration"))
  {
    m_securityConfiguration = jsonValue.GetString("SecurityConfiguration");

    m_securityConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue Cluster::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_ec2InstanceAttributesHasBeenSet)
  {
   payload.WithObject("Ec2InstanceAttributes", m_ec2InstanceAttributes.Jsonize());

  }

  if(m_logUriHasBeenSet)
  {
   payload.WithString("LogUri", m_logUri);

  }

  if(m_requestedAmiVersionHasBeenSet)
  {
   payload.WithString("RequestedAmiVersion", m_requestedAmiVersion);

  }

  if(m_runningAmiVersionHasBeenSet)
  {
   payload.WithString("RunningAmiVersion", m_runningAmiVersion);

  }

  if(m_releaseLabelHasBeenSet)
  {
   payload.WithString("ReleaseLabel", m_releaseLabel);

  }

  if(m_autoTerminateHasBeenSet)
  {
   payload.WithBool("AutoTerminate", m_autoTerminate);

  }

  if(m_terminationProtectedHasBeenSet)
  {
   payload.WithBool("TerminationProtected", m_terminationProtected);

  }

  if(m_visibleToAllUsersHasBeenSet)
  {
   payload.WithBool("VisibleToAllUsers", m_visibleToAllUsers);

  }

  if(m_applicationsHasBeenSet)
  {
   Array<JsonValue> applicationsJsonList(m_applications.size());
   for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
   {
     applicationsJsonList[applicationsIndex].AsObject(m_applications[applicationsIndex].Jsonize());
   }
   payload.WithArray("Applications", std::move(applicationsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("ServiceRole", m_serviceRole);

  }

  if(m_normalizedInstanceHoursHasBeenSet)
  {
   payload.WithInteger("NormalizedInstanceHours", m_normalizedInstanceHours);

  }

  if(m_masterPublicDnsNameHasBeenSet)
  {
   payload.WithString("MasterPublicDnsName", m_masterPublicDnsName);

  }

  if(m_configurationsHasBeenSet)
  {
   Array<JsonValue> configurationsJsonList(m_configurations.size());
   for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
   {
     configurationsJsonList[configurationsIndex].AsObject(m_configurations[configurationsIndex].Jsonize());
   }
   payload.WithArray("Configurations", std::move(configurationsJsonList));

  }

  if(m_securityConfigurationHasBeenSet)
  {
   payload.WithString("SecurityConfiguration", m_securityConfiguration);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws