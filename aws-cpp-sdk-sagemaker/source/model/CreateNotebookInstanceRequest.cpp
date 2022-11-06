/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateNotebookInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateNotebookInstanceRequest::CreateNotebookInstanceRequest() : 
    m_notebookInstanceNameHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_lifecycleConfigNameHasBeenSet(false),
    m_directInternetAccess(DirectInternetAccess::NOT_SET),
    m_directInternetAccessHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_acceleratorTypesHasBeenSet(false),
    m_defaultCodeRepositoryHasBeenSet(false),
    m_additionalCodeRepositoriesHasBeenSet(false),
    m_rootAccess(RootAccess::NOT_SET),
    m_rootAccessHasBeenSet(false),
    m_platformIdentifierHasBeenSet(false),
    m_instanceMetadataServiceConfigurationHasBeenSet(false)
{
}

Aws::String CreateNotebookInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_notebookInstanceNameHasBeenSet)
  {
   payload.WithString("NotebookInstanceName", m_notebookInstanceName);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", InstanceTypeMapper::GetNameForInstanceType(m_instanceType));
  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

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

  if(m_lifecycleConfigNameHasBeenSet)
  {
   payload.WithString("LifecycleConfigName", m_lifecycleConfigName);

  }

  if(m_directInternetAccessHasBeenSet)
  {
   payload.WithString("DirectInternetAccess", DirectInternetAccessMapper::GetNameForDirectInternetAccess(m_directInternetAccess));
  }

  if(m_volumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("VolumeSizeInGB", m_volumeSizeInGB);

  }

  if(m_acceleratorTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acceleratorTypesJsonList(m_acceleratorTypes.size());
   for(unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex)
   {
     acceleratorTypesJsonList[acceleratorTypesIndex].AsString(NotebookInstanceAcceleratorTypeMapper::GetNameForNotebookInstanceAcceleratorType(m_acceleratorTypes[acceleratorTypesIndex]));
   }
   payload.WithArray("AcceleratorTypes", std::move(acceleratorTypesJsonList));

  }

  if(m_defaultCodeRepositoryHasBeenSet)
  {
   payload.WithString("DefaultCodeRepository", m_defaultCodeRepository);

  }

  if(m_additionalCodeRepositoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalCodeRepositoriesJsonList(m_additionalCodeRepositories.size());
   for(unsigned additionalCodeRepositoriesIndex = 0; additionalCodeRepositoriesIndex < additionalCodeRepositoriesJsonList.GetLength(); ++additionalCodeRepositoriesIndex)
   {
     additionalCodeRepositoriesJsonList[additionalCodeRepositoriesIndex].AsString(m_additionalCodeRepositories[additionalCodeRepositoriesIndex]);
   }
   payload.WithArray("AdditionalCodeRepositories", std::move(additionalCodeRepositoriesJsonList));

  }

  if(m_rootAccessHasBeenSet)
  {
   payload.WithString("RootAccess", RootAccessMapper::GetNameForRootAccess(m_rootAccess));
  }

  if(m_platformIdentifierHasBeenSet)
  {
   payload.WithString("PlatformIdentifier", m_platformIdentifier);

  }

  if(m_instanceMetadataServiceConfigurationHasBeenSet)
  {
   payload.WithObject("InstanceMetadataServiceConfiguration", m_instanceMetadataServiceConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateNotebookInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateNotebookInstance"));
  return headers;

}




