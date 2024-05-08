/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECR
{
namespace Model
{
  enum class UpstreamRegistry
  {
    NOT_SET,
    ecr_public,
    quay,
    k8s,
    docker_hub,
    github_container_registry,
    azure_container_registry,
    gitlab_container_registry
  };

namespace UpstreamRegistryMapper
{
AWS_ECR_API UpstreamRegistry GetUpstreamRegistryForName(const Aws::String& name);

AWS_ECR_API Aws::String GetNameForUpstreamRegistry(UpstreamRegistry value);
} // namespace UpstreamRegistryMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
