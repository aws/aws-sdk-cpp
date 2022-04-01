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
  enum class PackageVersionStatus
  {
    NOT_SET,
    Published,
    Unfinished,
    Unlisted,
    Archived,
    Disposed,
    Deleted
  };

namespace PackageVersionStatusMapper
{
AWS_CODEARTIFACT_API PackageVersionStatus GetPackageVersionStatusForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForPackageVersionStatus(PackageVersionStatus value);
} // namespace PackageVersionStatusMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
