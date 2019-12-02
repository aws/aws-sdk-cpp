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

#include <aws/imagebuilder/model/UpdateInfrastructureConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateInfrastructureConfigurationRequest::UpdateInfrastructureConfigurationRequest() : 
    m_infrastructureConfigurationArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_instanceProfileNameHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_loggingHasBeenSet(false),
    m_keyPairHasBeenSet(false),
    m_terminateInstanceOnFailure(false),
    m_terminateInstanceOnFailureHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdateInfrastructureConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_infrastructureConfigurationArnHasBeenSet)
  {
   payload.WithString("infrastructureConfigurationArn", m_infrastructureConfigurationArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_instanceTypesHasBeenSet)
  {
   Array<JsonValue> instanceTypesJsonList(m_instanceTypes.size());
   for(unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex)
   {
     instanceTypesJsonList[instanceTypesIndex].AsString(m_instanceTypes[instanceTypesIndex]);
   }
   payload.WithArray("instanceTypes", std::move(instanceTypesJsonList));

  }

  if(m_instanceProfileNameHasBeenSet)
  {
   payload.WithString("instanceProfileName", m_instanceProfileName);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("subnetId", m_subnetId);

  }

  if(m_loggingHasBeenSet)
  {
   payload.WithObject("logging", m_logging.Jsonize());

  }

  if(m_keyPairHasBeenSet)
  {
   payload.WithString("keyPair", m_keyPair);

  }

  if(m_terminateInstanceOnFailureHasBeenSet)
  {
   payload.WithBool("terminateInstanceOnFailure", m_terminateInstanceOnFailure);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("snsTopicArn", m_snsTopicArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




