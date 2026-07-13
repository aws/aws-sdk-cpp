/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/inspector2/model/CoverageResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {
namespace CoverageResourceTypeMapper {

static const int AWS_EC2_INSTANCE_HASH = HashingUtils::HashString("AWS_EC2_INSTANCE");
static const int AWS_ECR_CONTAINER_IMAGE_HASH = HashingUtils::HashString("AWS_ECR_CONTAINER_IMAGE");
static const int AWS_ECR_REPOSITORY_HASH = HashingUtils::HashString("AWS_ECR_REPOSITORY");
static const int AWS_LAMBDA_FUNCTION_HASH = HashingUtils::HashString("AWS_LAMBDA_FUNCTION");
static const int CODE_REPOSITORY_HASH = HashingUtils::HashString("CODE_REPOSITORY");
static const int Microsoft_Compute_virtualMachines_HASH = HashingUtils::HashString("Microsoft.Compute/virtualMachines");
static const int Microsoft_ContainerRegistry_registry_containerImage_HASH =
    HashingUtils::HashString("Microsoft.ContainerRegistry/registry/containerImage");
static const int Microsoft_ContainerRegistry_registry_containerRepository_HASH =
    HashingUtils::HashString("Microsoft.ContainerRegistry/registry/containerRepository");
static const int Microsoft_Web_sites_HASH = HashingUtils::HashString("Microsoft.Web/sites");
static const int Microsoft_ContainerRegistry_registries_HASH = HashingUtils::HashString("Microsoft.ContainerRegistry/registries");

CoverageResourceType GetCoverageResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_EC2_INSTANCE_HASH) {
    return CoverageResourceType::AWS_EC2_INSTANCE;
  } else if (hashCode == AWS_ECR_CONTAINER_IMAGE_HASH) {
    return CoverageResourceType::AWS_ECR_CONTAINER_IMAGE;
  } else if (hashCode == AWS_ECR_REPOSITORY_HASH) {
    return CoverageResourceType::AWS_ECR_REPOSITORY;
  } else if (hashCode == AWS_LAMBDA_FUNCTION_HASH) {
    return CoverageResourceType::AWS_LAMBDA_FUNCTION;
  } else if (hashCode == CODE_REPOSITORY_HASH) {
    return CoverageResourceType::CODE_REPOSITORY;
  } else if (hashCode == Microsoft_Compute_virtualMachines_HASH) {
    return CoverageResourceType::Microsoft_Compute_virtualMachines;
  } else if (hashCode == Microsoft_ContainerRegistry_registry_containerImage_HASH) {
    return CoverageResourceType::Microsoft_ContainerRegistry_registry_containerImage;
  } else if (hashCode == Microsoft_ContainerRegistry_registry_containerRepository_HASH) {
    return CoverageResourceType::Microsoft_ContainerRegistry_registry_containerRepository;
  } else if (hashCode == Microsoft_Web_sites_HASH) {
    return CoverageResourceType::Microsoft_Web_sites;
  } else if (hashCode == Microsoft_ContainerRegistry_registries_HASH) {
    return CoverageResourceType::Microsoft_ContainerRegistry_registries;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CoverageResourceType>(hashCode);
  }

  return CoverageResourceType::NOT_SET;
}

Aws::String GetNameForCoverageResourceType(CoverageResourceType enumValue) {
  switch (enumValue) {
    case CoverageResourceType::NOT_SET:
      return {};
    case CoverageResourceType::AWS_EC2_INSTANCE:
      return "AWS_EC2_INSTANCE";
    case CoverageResourceType::AWS_ECR_CONTAINER_IMAGE:
      return "AWS_ECR_CONTAINER_IMAGE";
    case CoverageResourceType::AWS_ECR_REPOSITORY:
      return "AWS_ECR_REPOSITORY";
    case CoverageResourceType::AWS_LAMBDA_FUNCTION:
      return "AWS_LAMBDA_FUNCTION";
    case CoverageResourceType::CODE_REPOSITORY:
      return "CODE_REPOSITORY";
    case CoverageResourceType::Microsoft_Compute_virtualMachines:
      return "Microsoft.Compute/virtualMachines";
    case CoverageResourceType::Microsoft_ContainerRegistry_registry_containerImage:
      return "Microsoft.ContainerRegistry/registry/containerImage";
    case CoverageResourceType::Microsoft_ContainerRegistry_registry_containerRepository:
      return "Microsoft.ContainerRegistry/registry/containerRepository";
    case CoverageResourceType::Microsoft_Web_sites:
      return "Microsoft.Web/sites";
    case CoverageResourceType::Microsoft_ContainerRegistry_registries:
      return "Microsoft.ContainerRegistry/registries";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CoverageResourceTypeMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
