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
  enum class PackageGroupAssociationType
  {
    NOT_SET,
    STRONG,
    WEAK
  };

namespace PackageGroupAssociationTypeMapper
{
AWS_CODEARTIFACT_API PackageGroupAssociationType GetPackageGroupAssociationTypeForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForPackageGroupAssociationType(PackageGroupAssociationType value);
} // namespace PackageGroupAssociationTypeMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
