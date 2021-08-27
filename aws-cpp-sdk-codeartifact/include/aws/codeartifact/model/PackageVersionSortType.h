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
  enum class PackageVersionSortType
  {
    NOT_SET,
    PUBLISHED_TIME
  };

namespace PackageVersionSortTypeMapper
{
AWS_CODEARTIFACT_API PackageVersionSortType GetPackageVersionSortTypeForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForPackageVersionSortType(PackageVersionSortType value);
} // namespace PackageVersionSortTypeMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
