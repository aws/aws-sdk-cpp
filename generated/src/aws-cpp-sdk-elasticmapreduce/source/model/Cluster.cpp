/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_instanceCollectionType(InstanceCollectionType::NOT_SET),
    m_instanceCollectionTypeHasBeenSet(false),
    m_logUriHasBeenSet(false),
    m_logEncryptionKmsKeyIdHasBeenSet(false),
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
    m_securityConfigurationHasBeenSet(false),
    m_autoScalingRoleHasBeenSet(false),
    m_scaleDownBehavior(ScaleDownBehavior::NOT_SET),
    m_scaleDownBehaviorHasBeenSet(false),
    m_customAmiIdHasBeenSet(false),
    m_ebsRootVolumeSize(0),
    m_ebsRootVolumeSizeHasBeenSet(false),
    m_repoUpgradeOnBoot(RepoUpgradeOnBoot::NOT_SET),
    m_repoUpgradeOnBootHasBeenSet(false),
    m_kerberosAttributesHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_stepConcurrencyLevel(0),
    m_stepConcurrencyLevelHasBeenSet(false),
    m_placementGroupsHasBeenSet(false),
    m_oSReleaseLabelHasBeenSet(false)
{
}

Cluster::Cluster(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ec2InstanceAttributesHasBeenSet(false),
    m_instanceCollectionType(InstanceCollectionType::NOT_SET),
    m_instanceCollectionTypeHasBeenSet(false),
    m_logUriHasBeenSet(false),
    m_logEncryptionKmsKeyIdHasBeenSet(false),
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
    m_securityConfigurationHasBeenSet(false),
    m_autoScalingRoleHasBeenSet(false),
    m_scaleDownBehavior(ScaleDownBehavior::NOT_SET),
    m_scaleDownBehaviorHasBeenSet(false),
    m_customAmiIdHasBeenSet(false),
    m_ebsRootVolumeSize(0),
    m_ebsRootVolumeSizeHasBeenSet(false),
    m_repoUpgradeOnBoot(RepoUpgradeOnBoot::NOT_SET),
    m_repoUpgradeOnBootHasBeenSet(false),
    m_kerberosAttributesHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_stepConcurrencyLevel(0),
    m_stepConcurrencyLevelHasBeenSet(false),
    m_placementGroupsHasBeenSet(false),
    m_oSReleaseLabelHasBeenSet(false)
{
  *this = jsonValue;
}

Cluster& Cluster::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("InstanceCollectionType"))
  {
    m_instanceCollectionType = InstanceCollectionTypeMapper::GetInstanceCollectionTypeForName(jsonValue.GetString("InstanceCollectionType"));

    m_instanceCollectionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogUri"))
  {
    m_logUri = jsonValue.GetString("LogUri");

    m_logUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogEncryptionKmsKeyId"))
  {
    m_logEncryptionKmsKeyId = jsonValue.GetString("LogEncryptionKmsKeyId");

    m_logEncryptionKmsKeyIdHasBeenSet = true;
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
    Aws::Utils::Array<JsonView> applicationsJsonList = jsonValue.GetArray("Applications");
    for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
    {
      m_applications.push_back(applicationsJsonList[applicationsIndex].AsObject());
    }
    m_applicationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
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
    Aws::Utils::Array<JsonView> configurationsJsonList = jsonValue.GetArray("Configurations");
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

  if(jsonValue.ValueExists("AutoScalingRole"))
  {
    m_autoScalingRole = jsonValue.GetString("AutoScalingRole");

    m_autoScalingRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScaleDownBehavior"))
  {
    m_scaleDownBehavior = ScaleDownBehaviorMapper::GetScaleDownBehaviorForName(jsonValue.GetString("ScaleDownBehavior"));

    m_scaleDownBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomAmiId"))
  {
    m_customAmiId = jsonValue.GetString("CustomAmiId");

    m_customAmiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsRootVolumeSize"))
  {
    m_ebsRootVolumeSize = jsonValue.GetInteger("EbsRootVolumeSize");

    m_ebsRootVolumeSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepoUpgradeOnBoot"))
  {
    m_repoUpgradeOnBoot = RepoUpgradeOnBootMapper::GetRepoUpgradeOnBootForName(jsonValue.GetString("RepoUpgradeOnBoot"));

    m_repoUpgradeOnBootHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KerberosAttributes"))
  {
    m_kerberosAttributes = jsonValue.GetObject("KerberosAttributes");

    m_kerberosAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterArn"))
  {
    m_clusterArn = jsonValue.GetString("ClusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutpostArn"))
  {
    m_outpostArn = jsonValue.GetString("OutpostArn");

    m_outpostArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StepConcurrencyLevel"))
  {
    m_stepConcurrencyLevel = jsonValue.GetInteger("StepConcurrencyLevel");

    m_stepConcurrencyLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlacementGroups"))
  {
    Aws::Utils::Array<JsonView> placementGroupsJsonList = jsonValue.GetArray("PlacementGroups");
    for(unsigned placementGroupsIndex = 0; placementGroupsIndex < placementGroupsJsonList.GetLength(); ++placementGroupsIndex)
    {
      m_placementGroups.push_back(placementGroupsJsonList[placementGroupsIndex].AsObject());
    }
    m_placementGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OSReleaseLabel"))
  {
    m_oSReleaseLabel = jsonValue.GetString("OSReleaseLabel");

    m_oSReleaseLabelHasBeenSet = true;
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

  if(m_instanceCollectionTypeHasBeenSet)
  {
   payload.WithString("InstanceCollectionType", InstanceCollectionTypeMapper::GetNameForInstanceCollectionType(m_instanceCollectionType));
  }

  if(m_logUriHasBeenSet)
  {
   payload.WithString("LogUri", m_logUri);

  }

  if(m_logEncryptionKmsKeyIdHasBeenSet)
  {
   payload.WithString("LogEncryptionKmsKeyId", m_logEncryptionKmsKeyId);

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
   Aws::Utils::Array<JsonValue> applicationsJsonList(m_applications.size());
   for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
   {
     applicationsJsonList[applicationsIndex].AsObject(m_applications[applicationsIndex].Jsonize());
   }
   payload.WithArray("Applications", std::move(applicationsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
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
   Aws::Utils::Array<JsonValue> configurationsJsonList(m_configurations.size());
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

  if(m_autoScalingRoleHasBeenSet)
  {
   payload.WithString("AutoScalingRole", m_autoScalingRole);

  }

  if(m_scaleDownBehaviorHasBeenSet)
  {
   payload.WithString("ScaleDownBehavior", ScaleDownBehaviorMapper::GetNameForScaleDownBehavior(m_scaleDownBehavior));
  }

  if(m_customAmiIdHasBeenSet)
  {
   payload.WithString("CustomAmiId", m_customAmiId);

  }

  if(m_ebsRootVolumeSizeHasBeenSet)
  {
   payload.WithInteger("EbsRootVolumeSize", m_ebsRootVolumeSize);

  }

  if(m_repoUpgradeOnBootHasBeenSet)
  {
   payload.WithString("RepoUpgradeOnBoot", RepoUpgradeOnBootMapper::GetNameForRepoUpgradeOnBoot(m_repoUpgradeOnBoot));
  }

  if(m_kerberosAttributesHasBeenSet)
  {
   payload.WithObject("KerberosAttributes", m_kerberosAttributes.Jsonize());

  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("ClusterArn", m_clusterArn);

  }

  if(m_outpostArnHasBeenSet)
  {
   payload.WithString("OutpostArn", m_outpostArn);

  }

  if(m_stepConcurrencyLevelHasBeenSet)
  {
   payload.WithInteger("StepConcurrencyLevel", m_stepConcurrencyLevel);

  }

  if(m_placementGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> placementGroupsJsonList(m_placementGroups.size());
   for(unsigned placementGroupsIndex = 0; placementGroupsIndex < placementGroupsJsonList.GetLength(); ++placementGroupsIndex)
   {
     placementGroupsJsonList[placementGroupsIndex].AsObject(m_placementGroups[placementGroupsIndex].Jsonize());
   }
   payload.WithArray("PlacementGroups", std::move(placementGroupsJsonList));

  }

  if(m_oSReleaseLabelHasBeenSet)
  {
   payload.WithString("OSReleaseLabel", m_oSReleaseLabel);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
