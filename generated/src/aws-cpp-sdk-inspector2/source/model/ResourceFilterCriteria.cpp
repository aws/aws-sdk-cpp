/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ResourceFilterCriteria.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ResourceFilterCriteria::ResourceFilterCriteria(JsonView jsonValue) { *this = jsonValue; }

ResourceFilterCriteria& ResourceFilterCriteria::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    Aws::Utils::Array<JsonView> accountIdJsonList = jsonValue.GetArray("accountId");
    for (unsigned accountIdIndex = 0; accountIdIndex < accountIdJsonList.GetLength(); ++accountIdIndex) {
      m_accountId.push_back(accountIdJsonList[accountIdIndex].AsObject());
    }
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceId")) {
    Aws::Utils::Array<JsonView> resourceIdJsonList = jsonValue.GetArray("resourceId");
    for (unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex) {
      m_resourceId.push_back(resourceIdJsonList[resourceIdIndex].AsObject());
    }
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceType")) {
    Aws::Utils::Array<JsonView> resourceTypeJsonList = jsonValue.GetArray("resourceType");
    for (unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex) {
      m_resourceType.push_back(resourceTypeJsonList[resourceTypeIndex].AsObject());
    }
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecrRepositoryName")) {
    Aws::Utils::Array<JsonView> ecrRepositoryNameJsonList = jsonValue.GetArray("ecrRepositoryName");
    for (unsigned ecrRepositoryNameIndex = 0; ecrRepositoryNameIndex < ecrRepositoryNameJsonList.GetLength(); ++ecrRepositoryNameIndex) {
      m_ecrRepositoryName.push_back(ecrRepositoryNameJsonList[ecrRepositoryNameIndex].AsObject());
    }
    m_ecrRepositoryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lambdaFunctionName")) {
    Aws::Utils::Array<JsonView> lambdaFunctionNameJsonList = jsonValue.GetArray("lambdaFunctionName");
    for (unsigned lambdaFunctionNameIndex = 0; lambdaFunctionNameIndex < lambdaFunctionNameJsonList.GetLength();
         ++lambdaFunctionNameIndex) {
      m_lambdaFunctionName.push_back(lambdaFunctionNameJsonList[lambdaFunctionNameIndex].AsObject());
    }
    m_lambdaFunctionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ecrImageTags")) {
    Aws::Utils::Array<JsonView> ecrImageTagsJsonList = jsonValue.GetArray("ecrImageTags");
    for (unsigned ecrImageTagsIndex = 0; ecrImageTagsIndex < ecrImageTagsJsonList.GetLength(); ++ecrImageTagsIndex) {
      m_ecrImageTags.push_back(ecrImageTagsJsonList[ecrImageTagsIndex].AsObject());
    }
    m_ecrImageTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ec2InstanceTags")) {
    Aws::Utils::Array<JsonView> ec2InstanceTagsJsonList = jsonValue.GetArray("ec2InstanceTags");
    for (unsigned ec2InstanceTagsIndex = 0; ec2InstanceTagsIndex < ec2InstanceTagsJsonList.GetLength(); ++ec2InstanceTagsIndex) {
      m_ec2InstanceTags.push_back(ec2InstanceTagsJsonList[ec2InstanceTagsIndex].AsObject());
    }
    m_ec2InstanceTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lambdaFunctionTags")) {
    Aws::Utils::Array<JsonView> lambdaFunctionTagsJsonList = jsonValue.GetArray("lambdaFunctionTags");
    for (unsigned lambdaFunctionTagsIndex = 0; lambdaFunctionTagsIndex < lambdaFunctionTagsJsonList.GetLength();
         ++lambdaFunctionTagsIndex) {
      m_lambdaFunctionTags.push_back(lambdaFunctionTagsJsonList[lambdaFunctionTagsIndex].AsObject());
    }
    m_lambdaFunctionTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudProvider")) {
    Aws::Utils::Array<JsonView> cloudProviderJsonList = jsonValue.GetArray("cloudProvider");
    for (unsigned cloudProviderIndex = 0; cloudProviderIndex < cloudProviderJsonList.GetLength(); ++cloudProviderIndex) {
      m_cloudProvider.push_back(cloudProviderJsonList[cloudProviderIndex].AsObject());
    }
    m_cloudProviderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudProviderAccountId")) {
    Aws::Utils::Array<JsonView> cloudProviderAccountIdJsonList = jsonValue.GetArray("cloudProviderAccountId");
    for (unsigned cloudProviderAccountIdIndex = 0; cloudProviderAccountIdIndex < cloudProviderAccountIdJsonList.GetLength();
         ++cloudProviderAccountIdIndex) {
      m_cloudProviderAccountId.push_back(cloudProviderAccountIdJsonList[cloudProviderAccountIdIndex].AsObject());
    }
    m_cloudProviderAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudProviderOrgId")) {
    Aws::Utils::Array<JsonView> cloudProviderOrgIdJsonList = jsonValue.GetArray("cloudProviderOrgId");
    for (unsigned cloudProviderOrgIdIndex = 0; cloudProviderOrgIdIndex < cloudProviderOrgIdJsonList.GetLength();
         ++cloudProviderOrgIdIndex) {
      m_cloudProviderOrgId.push_back(cloudProviderOrgIdJsonList[cloudProviderOrgIdIndex].AsObject());
    }
    m_cloudProviderOrgIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudProviderRegion")) {
    Aws::Utils::Array<JsonView> cloudProviderRegionJsonList = jsonValue.GetArray("cloudProviderRegion");
    for (unsigned cloudProviderRegionIndex = 0; cloudProviderRegionIndex < cloudProviderRegionJsonList.GetLength();
         ++cloudProviderRegionIndex) {
      m_cloudProviderRegion.push_back(cloudProviderRegionJsonList[cloudProviderRegionIndex].AsObject());
    }
    m_cloudProviderRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudVmInstanceTags")) {
    Aws::Utils::Array<JsonView> cloudVmInstanceTagsJsonList = jsonValue.GetArray("cloudVmInstanceTags");
    for (unsigned cloudVmInstanceTagsIndex = 0; cloudVmInstanceTagsIndex < cloudVmInstanceTagsJsonList.GetLength();
         ++cloudVmInstanceTagsIndex) {
      m_cloudVmInstanceTags.push_back(cloudVmInstanceTagsJsonList[cloudVmInstanceTagsIndex].AsObject());
    }
    m_cloudVmInstanceTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudContainerImageTags")) {
    Aws::Utils::Array<JsonView> cloudContainerImageTagsJsonList = jsonValue.GetArray("cloudContainerImageTags");
    for (unsigned cloudContainerImageTagsIndex = 0; cloudContainerImageTagsIndex < cloudContainerImageTagsJsonList.GetLength();
         ++cloudContainerImageTagsIndex) {
      m_cloudContainerImageTags.push_back(cloudContainerImageTagsJsonList[cloudContainerImageTagsIndex].AsObject());
    }
    m_cloudContainerImageTagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudContainerRepositoryName")) {
    Aws::Utils::Array<JsonView> cloudContainerRepositoryNameJsonList = jsonValue.GetArray("cloudContainerRepositoryName");
    for (unsigned cloudContainerRepositoryNameIndex = 0;
         cloudContainerRepositoryNameIndex < cloudContainerRepositoryNameJsonList.GetLength(); ++cloudContainerRepositoryNameIndex) {
      m_cloudContainerRepositoryName.push_back(cloudContainerRepositoryNameJsonList[cloudContainerRepositoryNameIndex].AsObject());
    }
    m_cloudContainerRepositoryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudContainerRegistryName")) {
    Aws::Utils::Array<JsonView> cloudContainerRegistryNameJsonList = jsonValue.GetArray("cloudContainerRegistryName");
    for (unsigned cloudContainerRegistryNameIndex = 0; cloudContainerRegistryNameIndex < cloudContainerRegistryNameJsonList.GetLength();
         ++cloudContainerRegistryNameIndex) {
      m_cloudContainerRegistryName.push_back(cloudContainerRegistryNameJsonList[cloudContainerRegistryNameIndex].AsObject());
    }
    m_cloudContainerRegistryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudServerlessFunctionName")) {
    Aws::Utils::Array<JsonView> cloudServerlessFunctionNameJsonList = jsonValue.GetArray("cloudServerlessFunctionName");
    for (unsigned cloudServerlessFunctionNameIndex = 0; cloudServerlessFunctionNameIndex < cloudServerlessFunctionNameJsonList.GetLength();
         ++cloudServerlessFunctionNameIndex) {
      m_cloudServerlessFunctionName.push_back(cloudServerlessFunctionNameJsonList[cloudServerlessFunctionNameIndex].AsObject());
    }
    m_cloudServerlessFunctionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudServerlessFunctionRuntime")) {
    Aws::Utils::Array<JsonView> cloudServerlessFunctionRuntimeJsonList = jsonValue.GetArray("cloudServerlessFunctionRuntime");
    for (unsigned cloudServerlessFunctionRuntimeIndex = 0;
         cloudServerlessFunctionRuntimeIndex < cloudServerlessFunctionRuntimeJsonList.GetLength(); ++cloudServerlessFunctionRuntimeIndex) {
      m_cloudServerlessFunctionRuntime.push_back(cloudServerlessFunctionRuntimeJsonList[cloudServerlessFunctionRuntimeIndex].AsObject());
    }
    m_cloudServerlessFunctionRuntimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudServerlessFunctionTags")) {
    Aws::Utils::Array<JsonView> cloudServerlessFunctionTagsJsonList = jsonValue.GetArray("cloudServerlessFunctionTags");
    for (unsigned cloudServerlessFunctionTagsIndex = 0; cloudServerlessFunctionTagsIndex < cloudServerlessFunctionTagsJsonList.GetLength();
         ++cloudServerlessFunctionTagsIndex) {
      m_cloudServerlessFunctionTags.push_back(cloudServerlessFunctionTagsJsonList[cloudServerlessFunctionTagsIndex].AsObject());
    }
    m_cloudServerlessFunctionTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceFilterCriteria::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountIdJsonList(m_accountId.size());
    for (unsigned accountIdIndex = 0; accountIdIndex < accountIdJsonList.GetLength(); ++accountIdIndex) {
      accountIdJsonList[accountIdIndex].AsObject(m_accountId[accountIdIndex].Jsonize());
    }
    payload.WithArray("accountId", std::move(accountIdJsonList));
  }

  if (m_resourceIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceIdJsonList(m_resourceId.size());
    for (unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex) {
      resourceIdJsonList[resourceIdIndex].AsObject(m_resourceId[resourceIdIndex].Jsonize());
    }
    payload.WithArray("resourceId", std::move(resourceIdJsonList));
  }

  if (m_resourceTypeHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTypeJsonList(m_resourceType.size());
    for (unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex) {
      resourceTypeJsonList[resourceTypeIndex].AsObject(m_resourceType[resourceTypeIndex].Jsonize());
    }
    payload.WithArray("resourceType", std::move(resourceTypeJsonList));
  }

  if (m_ecrRepositoryNameHasBeenSet) {
    Aws::Utils::Array<JsonValue> ecrRepositoryNameJsonList(m_ecrRepositoryName.size());
    for (unsigned ecrRepositoryNameIndex = 0; ecrRepositoryNameIndex < ecrRepositoryNameJsonList.GetLength(); ++ecrRepositoryNameIndex) {
      ecrRepositoryNameJsonList[ecrRepositoryNameIndex].AsObject(m_ecrRepositoryName[ecrRepositoryNameIndex].Jsonize());
    }
    payload.WithArray("ecrRepositoryName", std::move(ecrRepositoryNameJsonList));
  }

  if (m_lambdaFunctionNameHasBeenSet) {
    Aws::Utils::Array<JsonValue> lambdaFunctionNameJsonList(m_lambdaFunctionName.size());
    for (unsigned lambdaFunctionNameIndex = 0; lambdaFunctionNameIndex < lambdaFunctionNameJsonList.GetLength();
         ++lambdaFunctionNameIndex) {
      lambdaFunctionNameJsonList[lambdaFunctionNameIndex].AsObject(m_lambdaFunctionName[lambdaFunctionNameIndex].Jsonize());
    }
    payload.WithArray("lambdaFunctionName", std::move(lambdaFunctionNameJsonList));
  }

  if (m_ecrImageTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ecrImageTagsJsonList(m_ecrImageTags.size());
    for (unsigned ecrImageTagsIndex = 0; ecrImageTagsIndex < ecrImageTagsJsonList.GetLength(); ++ecrImageTagsIndex) {
      ecrImageTagsJsonList[ecrImageTagsIndex].AsObject(m_ecrImageTags[ecrImageTagsIndex].Jsonize());
    }
    payload.WithArray("ecrImageTags", std::move(ecrImageTagsJsonList));
  }

  if (m_ec2InstanceTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ec2InstanceTagsJsonList(m_ec2InstanceTags.size());
    for (unsigned ec2InstanceTagsIndex = 0; ec2InstanceTagsIndex < ec2InstanceTagsJsonList.GetLength(); ++ec2InstanceTagsIndex) {
      ec2InstanceTagsJsonList[ec2InstanceTagsIndex].AsObject(m_ec2InstanceTags[ec2InstanceTagsIndex].Jsonize());
    }
    payload.WithArray("ec2InstanceTags", std::move(ec2InstanceTagsJsonList));
  }

  if (m_lambdaFunctionTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> lambdaFunctionTagsJsonList(m_lambdaFunctionTags.size());
    for (unsigned lambdaFunctionTagsIndex = 0; lambdaFunctionTagsIndex < lambdaFunctionTagsJsonList.GetLength();
         ++lambdaFunctionTagsIndex) {
      lambdaFunctionTagsJsonList[lambdaFunctionTagsIndex].AsObject(m_lambdaFunctionTags[lambdaFunctionTagsIndex].Jsonize());
    }
    payload.WithArray("lambdaFunctionTags", std::move(lambdaFunctionTagsJsonList));
  }

  if (m_cloudProviderHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudProviderJsonList(m_cloudProvider.size());
    for (unsigned cloudProviderIndex = 0; cloudProviderIndex < cloudProviderJsonList.GetLength(); ++cloudProviderIndex) {
      cloudProviderJsonList[cloudProviderIndex].AsObject(m_cloudProvider[cloudProviderIndex].Jsonize());
    }
    payload.WithArray("cloudProvider", std::move(cloudProviderJsonList));
  }

  if (m_cloudProviderAccountIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudProviderAccountIdJsonList(m_cloudProviderAccountId.size());
    for (unsigned cloudProviderAccountIdIndex = 0; cloudProviderAccountIdIndex < cloudProviderAccountIdJsonList.GetLength();
         ++cloudProviderAccountIdIndex) {
      cloudProviderAccountIdJsonList[cloudProviderAccountIdIndex].AsObject(m_cloudProviderAccountId[cloudProviderAccountIdIndex].Jsonize());
    }
    payload.WithArray("cloudProviderAccountId", std::move(cloudProviderAccountIdJsonList));
  }

  if (m_cloudProviderOrgIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudProviderOrgIdJsonList(m_cloudProviderOrgId.size());
    for (unsigned cloudProviderOrgIdIndex = 0; cloudProviderOrgIdIndex < cloudProviderOrgIdJsonList.GetLength();
         ++cloudProviderOrgIdIndex) {
      cloudProviderOrgIdJsonList[cloudProviderOrgIdIndex].AsObject(m_cloudProviderOrgId[cloudProviderOrgIdIndex].Jsonize());
    }
    payload.WithArray("cloudProviderOrgId", std::move(cloudProviderOrgIdJsonList));
  }

  if (m_cloudProviderRegionHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudProviderRegionJsonList(m_cloudProviderRegion.size());
    for (unsigned cloudProviderRegionIndex = 0; cloudProviderRegionIndex < cloudProviderRegionJsonList.GetLength();
         ++cloudProviderRegionIndex) {
      cloudProviderRegionJsonList[cloudProviderRegionIndex].AsObject(m_cloudProviderRegion[cloudProviderRegionIndex].Jsonize());
    }
    payload.WithArray("cloudProviderRegion", std::move(cloudProviderRegionJsonList));
  }

  if (m_cloudVmInstanceTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudVmInstanceTagsJsonList(m_cloudVmInstanceTags.size());
    for (unsigned cloudVmInstanceTagsIndex = 0; cloudVmInstanceTagsIndex < cloudVmInstanceTagsJsonList.GetLength();
         ++cloudVmInstanceTagsIndex) {
      cloudVmInstanceTagsJsonList[cloudVmInstanceTagsIndex].AsObject(m_cloudVmInstanceTags[cloudVmInstanceTagsIndex].Jsonize());
    }
    payload.WithArray("cloudVmInstanceTags", std::move(cloudVmInstanceTagsJsonList));
  }

  if (m_cloudContainerImageTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudContainerImageTagsJsonList(m_cloudContainerImageTags.size());
    for (unsigned cloudContainerImageTagsIndex = 0; cloudContainerImageTagsIndex < cloudContainerImageTagsJsonList.GetLength();
         ++cloudContainerImageTagsIndex) {
      cloudContainerImageTagsJsonList[cloudContainerImageTagsIndex].AsObject(
          m_cloudContainerImageTags[cloudContainerImageTagsIndex].Jsonize());
    }
    payload.WithArray("cloudContainerImageTags", std::move(cloudContainerImageTagsJsonList));
  }

  if (m_cloudContainerRepositoryNameHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudContainerRepositoryNameJsonList(m_cloudContainerRepositoryName.size());
    for (unsigned cloudContainerRepositoryNameIndex = 0;
         cloudContainerRepositoryNameIndex < cloudContainerRepositoryNameJsonList.GetLength(); ++cloudContainerRepositoryNameIndex) {
      cloudContainerRepositoryNameJsonList[cloudContainerRepositoryNameIndex].AsObject(
          m_cloudContainerRepositoryName[cloudContainerRepositoryNameIndex].Jsonize());
    }
    payload.WithArray("cloudContainerRepositoryName", std::move(cloudContainerRepositoryNameJsonList));
  }

  if (m_cloudContainerRegistryNameHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudContainerRegistryNameJsonList(m_cloudContainerRegistryName.size());
    for (unsigned cloudContainerRegistryNameIndex = 0; cloudContainerRegistryNameIndex < cloudContainerRegistryNameJsonList.GetLength();
         ++cloudContainerRegistryNameIndex) {
      cloudContainerRegistryNameJsonList[cloudContainerRegistryNameIndex].AsObject(
          m_cloudContainerRegistryName[cloudContainerRegistryNameIndex].Jsonize());
    }
    payload.WithArray("cloudContainerRegistryName", std::move(cloudContainerRegistryNameJsonList));
  }

  if (m_cloudServerlessFunctionNameHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudServerlessFunctionNameJsonList(m_cloudServerlessFunctionName.size());
    for (unsigned cloudServerlessFunctionNameIndex = 0; cloudServerlessFunctionNameIndex < cloudServerlessFunctionNameJsonList.GetLength();
         ++cloudServerlessFunctionNameIndex) {
      cloudServerlessFunctionNameJsonList[cloudServerlessFunctionNameIndex].AsObject(
          m_cloudServerlessFunctionName[cloudServerlessFunctionNameIndex].Jsonize());
    }
    payload.WithArray("cloudServerlessFunctionName", std::move(cloudServerlessFunctionNameJsonList));
  }

  if (m_cloudServerlessFunctionRuntimeHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudServerlessFunctionRuntimeJsonList(m_cloudServerlessFunctionRuntime.size());
    for (unsigned cloudServerlessFunctionRuntimeIndex = 0;
         cloudServerlessFunctionRuntimeIndex < cloudServerlessFunctionRuntimeJsonList.GetLength(); ++cloudServerlessFunctionRuntimeIndex) {
      cloudServerlessFunctionRuntimeJsonList[cloudServerlessFunctionRuntimeIndex].AsObject(
          m_cloudServerlessFunctionRuntime[cloudServerlessFunctionRuntimeIndex].Jsonize());
    }
    payload.WithArray("cloudServerlessFunctionRuntime", std::move(cloudServerlessFunctionRuntimeJsonList));
  }

  if (m_cloudServerlessFunctionTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> cloudServerlessFunctionTagsJsonList(m_cloudServerlessFunctionTags.size());
    for (unsigned cloudServerlessFunctionTagsIndex = 0; cloudServerlessFunctionTagsIndex < cloudServerlessFunctionTagsJsonList.GetLength();
         ++cloudServerlessFunctionTagsIndex) {
      cloudServerlessFunctionTagsJsonList[cloudServerlessFunctionTagsIndex].AsObject(
          m_cloudServerlessFunctionTags[cloudServerlessFunctionTagsIndex].Jsonize());
    }
    payload.WithArray("cloudServerlessFunctionTags", std::move(cloudServerlessFunctionTagsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
