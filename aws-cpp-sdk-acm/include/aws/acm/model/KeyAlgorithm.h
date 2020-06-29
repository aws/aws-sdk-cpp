/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ACM
{
namespace Model
{
  enum class KeyAlgorithm
  {
    NOT_SET,
    RSA_2048,
    RSA_1024,
    RSA_4096,
    EC_prime256v1,
    EC_secp384r1,
    EC_secp521r1
  };

namespace KeyAlgorithmMapper
{
AWS_ACM_API KeyAlgorithm GetKeyAlgorithmForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForKeyAlgorithm(KeyAlgorithm value);
} // namespace KeyAlgorithmMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
