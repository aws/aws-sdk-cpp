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
  enum class PackageGroupOriginRestrictionType
  {
    NOT_SET,
    EXTERNAL_UPSTREAM,
    INTERNAL_UPSTREAM,
    PUBLISH
  };

namespace PackageGroupOriginRestrictionTypeMapper
{
AWS_CODEARTIFACT_API PackageGroupOriginRestrictionType GetPackageGroupOriginRestrictionTypeForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForPackageGroupOriginRestrictionType(PackageGroupOriginRestrictionType value);
} // namespace PackageGroupOriginRestrictionTypeMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
