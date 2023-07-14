/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    domain,
    repository,
    package,
    package_version,
    asset
  };

namespace ResourceTypeMapper
{
AWS_CODEARTIFACT_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
