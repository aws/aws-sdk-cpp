/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace signer
{
namespace Model
{
  enum class HashAlgorithm
  {
    NOT_SET,
    SHA1,
    SHA256
  };

namespace HashAlgorithmMapper
{
AWS_SIGNER_API HashAlgorithm GetHashAlgorithmForName(const Aws::String& name);

AWS_SIGNER_API Aws::String GetNameForHashAlgorithm(HashAlgorithm value);
} // namespace HashAlgorithmMapper
} // namespace Model
} // namespace signer
} // namespace Aws
