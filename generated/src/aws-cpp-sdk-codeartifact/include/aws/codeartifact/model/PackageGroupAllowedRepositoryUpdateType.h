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
  enum class PackageGroupAllowedRepositoryUpdateType
  {
    NOT_SET,
    ADDED,
    REMOVED
  };

namespace PackageGroupAllowedRepositoryUpdateTypeMapper
{
AWS_CODEARTIFACT_API PackageGroupAllowedRepositoryUpdateType GetPackageGroupAllowedRepositoryUpdateTypeForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForPackageGroupAllowedRepositoryUpdateType(PackageGroupAllowedRepositoryUpdateType value);
} // namespace PackageGroupAllowedRepositoryUpdateTypeMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
