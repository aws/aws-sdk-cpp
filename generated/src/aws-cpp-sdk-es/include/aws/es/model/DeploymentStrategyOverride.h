/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/ElasticsearchService_EXPORTS.h>

namespace Aws {
namespace ElasticsearchService {
namespace Model {
enum class DeploymentStrategyOverride { NOT_SET, ClonedBlueGreen };

namespace DeploymentStrategyOverrideMapper {
AWS_ELASTICSEARCHSERVICE_API DeploymentStrategyOverride GetDeploymentStrategyOverrideForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForDeploymentStrategyOverride(DeploymentStrategyOverride value);
}  // namespace DeploymentStrategyOverrideMapper
}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
