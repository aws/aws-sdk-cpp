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
  enum class PackageGroupOriginRestrictionMode
  {
    NOT_SET,
    ALLOW,
    ALLOW_SPECIFIC_REPOSITORIES,
    BLOCK,
    INHERIT
  };

namespace PackageGroupOriginRestrictionModeMapper
{
AWS_CODEARTIFACT_API PackageGroupOriginRestrictionMode GetPackageGroupOriginRestrictionModeForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForPackageGroupOriginRestrictionMode(PackageGroupOriginRestrictionMode value);
} // namespace PackageGroupOriginRestrictionModeMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
