/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{
  enum class SigningAlgorithm
  {
    NOT_SET,
    SHA256WITHECDSA,
    SHA384WITHECDSA,
    SHA512WITHECDSA,
    SHA256WITHRSA,
    SHA384WITHRSA,
    SHA512WITHRSA
  };

namespace SigningAlgorithmMapper
{
AWS_ACMPCA_API SigningAlgorithm GetSigningAlgorithmForName(const Aws::String& name);

AWS_ACMPCA_API Aws::String GetNameForSigningAlgorithm(SigningAlgorithm value);
} // namespace SigningAlgorithmMapper
} // namespace Model
} // namespace ACMPCA
} // namespace Aws
