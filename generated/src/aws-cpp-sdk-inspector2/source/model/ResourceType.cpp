/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/ResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace ResourceTypeMapper {

static const int AWS_EC2_INSTANCE_HASH = HashingUtils::HashString("AWS_EC2_INSTANCE");
static const int AWS_ECR_CONTAINER_IMAGE_HASH = HashingUtils::HashString("AWS_ECR_CONTAINER_IMAGE");
static const int AWS_ECR_REPOSITORY_HASH = HashingUtils::HashString("AWS_ECR_REPOSITORY");
static const int AWS_LAMBDA_FUNCTION_HASH = HashingUtils::HashString("AWS_LAMBDA_FUNCTION");
static const int CODE_REPOSITORY_HASH = HashingUtils::HashString("CODE_REPOSITORY");
static const int Microsoft_Compute_virtualMachines_HASH = HashingUtils::HashString("Microsoft.Compute/virtualMachines");
static const int Microsoft_ContainerRegistry_registry_containerImage_HASH =
    HashingUtils::HashString("Microsoft.ContainerRegistry/registry/containerImage");
static const int Microsoft_Web_sites_HASH = HashingUtils::HashString("Microsoft.Web/sites");

ResourceType GetResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_EC2_INSTANCE_HASH) {
    return ResourceType::AWS_EC2_INSTANCE;
  } else if (hashCode == AWS_ECR_CONTAINER_IMAGE_HASH) {
    return ResourceType::AWS_ECR_CONTAINER_IMAGE;
  } else if (hashCode == AWS_ECR_REPOSITORY_HASH) {
    return ResourceType::AWS_ECR_REPOSITORY;
  } else if (hashCode == AWS_LAMBDA_FUNCTION_HASH) {
    return ResourceType::AWS_LAMBDA_FUNCTION;
  } else if (hashCode == CODE_REPOSITORY_HASH) {
    return ResourceType::CODE_REPOSITORY;
  } else if (hashCode == Microsoft_Compute_virtualMachines_HASH) {
    return ResourceType::Microsoft_Compute_virtualMachines;
  } else if (hashCode == Microsoft_ContainerRegistry_registry_containerImage_HASH) {
    return ResourceType::Microsoft_ContainerRegistry_registry_containerImage;
  } else if (hashCode == Microsoft_Web_sites_HASH) {
    return ResourceType::Microsoft_Web_sites;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceType>(hashCode);
  }

  return ResourceType::NOT_SET;
}

Aws::String GetNameForResourceType(ResourceType enumValue) {
  switch (enumValue) {
    case ResourceType::NOT_SET:
      return {};
    case ResourceType::AWS_EC2_INSTANCE:
      return "AWS_EC2_INSTANCE";
    case ResourceType::AWS_ECR_CONTAINER_IMAGE:
      return "AWS_ECR_CONTAINER_IMAGE";
    case ResourceType::AWS_ECR_REPOSITORY:
      return "AWS_ECR_REPOSITORY";
    case ResourceType::AWS_LAMBDA_FUNCTION:
      return "AWS_LAMBDA_FUNCTION";
    case ResourceType::CODE_REPOSITORY:
      return "CODE_REPOSITORY";
    case ResourceType::Microsoft_Compute_virtualMachines:
      return "Microsoft.Compute/virtualMachines";
    case ResourceType::Microsoft_ContainerRegistry_registry_containerImage:
      return "Microsoft.ContainerRegistry/registry/containerImage";
    case ResourceType::Microsoft_Web_sites:
      return "Microsoft.Web/sites";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
