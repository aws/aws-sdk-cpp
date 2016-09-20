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
#include <aws/elasticmapreduce/model/RunJobFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RunJobFlowRequest::RunJobFlowRequest() : 
    m_nameHasBeenSet(false),
    m_logUriHasBeenSet(false),
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
    m_securityConfigurationHasBeenSet(false)
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
   Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("Steps", std::move(stepsJsonList));

  }

  if(m_bootstrapActionsHasBeenSet)
  {
   Array<JsonValue> bootstrapActionsJsonList(m_bootstrapActions.size());
   for(unsigned bootstrapActionsIndex = 0; bootstrapActionsIndex < bootstrapActionsJsonList.GetLength(); ++bootstrapActionsIndex)
   {
     bootstrapActionsJsonList[bootstrapActionsIndex].AsObject(m_bootstrapActions[bootstrapActionsIndex].Jsonize());
   }
   payload.WithArray("BootstrapActions", std::move(bootstrapActionsJsonList));

  }

  if(m_supportedProductsHasBeenSet)
  {
   Array<JsonValue> supportedProductsJsonList(m_supportedProducts.size());
   for(unsigned supportedProductsIndex = 0; supportedProductsIndex < supportedProductsJsonList.GetLength(); ++supportedProductsIndex)
   {
     supportedProductsJsonList[supportedProductsIndex].AsString(m_supportedProducts[supportedProductsIndex]);
   }
   payload.WithArray("SupportedProducts", std::move(supportedProductsJsonList));

  }

  if(m_newSupportedProductsHasBeenSet)
  {
   Array<JsonValue> newSupportedProductsJsonList(m_newSupportedProducts.size());
   for(unsigned newSupportedProductsIndex = 0; newSupportedProductsIndex < newSupportedProductsJsonList.GetLength(); ++newSupportedProductsIndex)
   {
     newSupportedProductsJsonList[newSupportedProductsIndex].AsObject(m_newSupportedProducts[newSupportedProductsIndex].Jsonize());
   }
   payload.WithArray("NewSupportedProducts", std::move(newSupportedProductsJsonList));

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

  if(m_configurationsHasBeenSet)
  {
   Array<JsonValue> configurationsJsonList(m_configurations.size());
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
   Array<JsonValue> tagsJsonList(m_tags.size());
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection RunJobFlowRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.RunJobFlow"));
  return headers;

}



