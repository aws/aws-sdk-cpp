/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/RunJobFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RunJobFlowRequest::RunJobFlowRequest() : 
    m_nameHasBeenSet(false),
    m_logUriHasBeenSet(false),
    m_logEncryptionKmsKeyIdHasBeenSet(false),
    m_additionalInfoHasBeenSet(false),
    m_amiVersionHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_stepsHasBeenSet(false),
    m_bootstrapActionsHasBeenSet(false),
    m_supportedProductsHasBeenSet(false),
    m_newSupportedProductsHasBeenSet(false),
    m_applicationsHasBeenSet(false),
    m_configurationsHasBeenSet(false),
    m_visibleToAllUsers(false),
    m_visibleToAllUsersHasBeenSet(false),
    m_jobFlowRoleHasBeenSet(false),
    m_serviceRoleHasBeenSet(false),
    m_tagsHasBeenSet(false),
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
    m_stepConcurrencyLevel(0),
    m_stepConcurrencyLevelHasBeenSet(false),
    m_managedScalingPolicyHasBeenSet(false),
    m_placementGroupConfigsHasBeenSet(false),
    m_autoTerminationPolicyHasBeenSet(false),
    m_oSReleaseLabelHasBeenSet(false)
{
}

Aws::String RunJobFlowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_logUriHasBeenSet)
  {
   payload.WithString("LogUri", m_logUri);

  }

  if(m_logEncryptionKmsKeyIdHasBeenSet)
  {
   payload.WithString("LogEncryptionKmsKeyId", m_logEncryptionKmsKeyId);

  }

  if(m_additionalInfoHasBeenSet)
  {
   payload.WithString("AdditionalInfo", m_additionalInfo);

  }

  if(m_amiVersionHasBeenSet)
  {
   payload.WithString("AmiVersion", m_amiVersion);

  }

  if(m_releaseLabelHasBeenSet)
  {
   payload.WithString("ReleaseLabel", m_releaseLabel);

  }

  if(m_instancesHasBeenSet)
  {
   payload.WithObject("Instances", m_instances.Jsonize());

  }

  if(m_stepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("Steps", std::move(stepsJsonList));

  }

  if(m_bootstrapActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bootstrapActionsJsonList(m_bootstrapActions.size());
   for(unsigned bootstrapActionsIndex = 0; bootstrapActionsIndex < bootstrapActionsJsonList.GetLength(); ++bootstrapActionsIndex)
   {
     bootstrapActionsJsonList[bootstrapActionsIndex].AsObject(m_bootstrapActions[bootstrapActionsIndex].Jsonize());
   }
   payload.WithArray("BootstrapActions", std::move(bootstrapActionsJsonList));

  }

  if(m_supportedProductsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedProductsJsonList(m_supportedProducts.size());
   for(unsigned supportedProductsIndex = 0; supportedProductsIndex < supportedProductsJsonList.GetLength(); ++supportedProductsIndex)
   {
     supportedProductsJsonList[supportedProductsIndex].AsString(m_supportedProducts[supportedProductsIndex]);
   }
   payload.WithArray("SupportedProducts", std::move(supportedProductsJsonList));

  }

  if(m_newSupportedProductsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> newSupportedProductsJsonList(m_newSupportedProducts.size());
   for(unsigned newSupportedProductsIndex = 0; newSupportedProductsIndex < newSupportedProductsJsonList.GetLength(); ++newSupportedProductsIndex)
   {
     newSupportedProductsJsonList[newSupportedProductsIndex].AsObject(m_newSupportedProducts[newSupportedProductsIndex].Jsonize());
   }
   payload.WithArray("NewSupportedProducts", std::move(newSupportedProductsJsonList));

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

  if(m_configurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationsJsonList(m_configurations.size());
   for(unsigned configurationsIndex = 0; configurationsIndex < configurationsJsonList.GetLength(); ++configurationsIndex)
   {
     configurationsJsonList[configurationsIndex].AsObject(m_configurations[configurationsIndex].Jsonize());
   }
   payload.WithArray("Configurations", std::move(configurationsJsonList));

  }

  if(m_visibleToAllUsersHasBeenSet)
  {
   payload.WithBool("VisibleToAllUsers", m_visibleToAllUsers);

  }

  if(m_jobFlowRoleHasBeenSet)
  {
   payload.WithString("JobFlowRole", m_jobFlowRole);

  }

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("ServiceRole", m_serviceRole);

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

  if(m_stepConcurrencyLevelHasBeenSet)
  {
   payload.WithInteger("StepConcurrencyLevel", m_stepConcurrencyLevel);

  }

  if(m_managedScalingPolicyHasBeenSet)
  {
   payload.WithObject("ManagedScalingPolicy", m_managedScalingPolicy.Jsonize());

  }

  if(m_placementGroupConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> placementGroupConfigsJsonList(m_placementGroupConfigs.size());
   for(unsigned placementGroupConfigsIndex = 0; placementGroupConfigsIndex < placementGroupConfigsJsonList.GetLength(); ++placementGroupConfigsIndex)
   {
     placementGroupConfigsJsonList[placementGroupConfigsIndex].AsObject(m_placementGroupConfigs[placementGroupConfigsIndex].Jsonize());
   }
   payload.WithArray("PlacementGroupConfigs", std::move(placementGroupConfigsJsonList));

  }

  if(m_autoTerminationPolicyHasBeenSet)
  {
   payload.WithObject("AutoTerminationPolicy", m_autoTerminationPolicy.Jsonize());

  }

  if(m_oSReleaseLabelHasBeenSet)
  {
   payload.WithString("OSReleaseLabel", m_oSReleaseLabel);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RunJobFlowRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.RunJobFlow"));
  return headers;

}




