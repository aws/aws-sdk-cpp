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
  enum class PackageFormat
  {
    NOT_SET,
    npm,
    pypi,
    maven,
    nuget
  };

namespace PackageFormatMapper
{
AWS_CODEARTIFACT_API PackageFormat GetPackageFormatForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForPackageFormat(PackageFormat value);
} // namespace PackageFormatMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
