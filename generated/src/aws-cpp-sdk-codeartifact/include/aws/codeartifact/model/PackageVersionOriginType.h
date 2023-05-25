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
  enum class PackageVersionOriginType
  {
    NOT_SET,
    INTERNAL,
    EXTERNAL,
    UNKNOWN
  };

namespace PackageVersionOriginTypeMapper
{
AWS_CODEARTIFACT_API PackageVersionOriginType GetPackageVersionOriginTypeForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForPackageVersionOriginType(PackageVersionOriginType value);
} // namespace PackageVersionOriginTypeMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
