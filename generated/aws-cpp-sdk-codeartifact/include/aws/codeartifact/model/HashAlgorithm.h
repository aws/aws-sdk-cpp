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
  enum class HashAlgorithm
  {
    NOT_SET,
    MD5,
    SHA_1,
    SHA_256,
    SHA_512
  };

namespace HashAlgorithmMapper
{
AWS_CODEARTIFACT_API HashAlgorithm GetHashAlgorithmForName(const Aws::String& name);

AWS_CODEARTIFACT_API Aws::String GetNameForHashAlgorithm(HashAlgorithm value);
} // namespace HashAlgorithmMapper
} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
