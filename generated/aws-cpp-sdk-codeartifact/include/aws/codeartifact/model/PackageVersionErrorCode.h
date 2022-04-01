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
  enum class PackageVersionErrorCode
  {
    NOT_SET,
    ALREADY_EXISTS,
    MISMATCHED_REVISION,
    MISMATCHED_STATUS,
    NOT_ALLOWED,
    NOT_FOUND,
    SKIPPED
  };

namespace PackageVersionErrorCodeMapper
{
AWS_CODEARTIFACT_API PackageVersionErrorCode GetPackageVersionErrorCodeForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForPackageVersionErrorCode(PackageVersionErrorCode value);
} // namespace PackageVersionErrorCodeMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
