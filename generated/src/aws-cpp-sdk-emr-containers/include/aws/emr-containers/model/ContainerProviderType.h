/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/EMRContainers_EXPORTS.h>

namespace Aws {
namespace EMRContainers {
namespace Model {
enum class ContainerProviderType { NOT_SET, EKS };

namespace ContainerProviderTypeMapper {
AWS_EMRCONTAINERS_API ContainerProviderType GetContainerProviderTypeForName(const Aws::String& name);

AWS_EMRCONTAINERS_API Aws::String GetNameForContainerProviderType(ContainerProviderType value);
}  // namespace ContainerProviderTypeMapper
}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
