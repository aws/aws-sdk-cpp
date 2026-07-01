/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ACM {
namespace Model {
enum class PublicKeyAlgorithm { NOT_SET, RSA_2048, EC_prime256v1, EC_secp384r1 };

namespace PublicKeyAlgorithmMapper {
AWS_ACM_API PublicKeyAlgorithm GetPublicKeyAlgorithmForName(const Aws::String& name);

AWS_ACM_API Aws::String GetNameForPublicKeyAlgorithm(PublicKeyAlgorithm value);
}  // namespace PublicKeyAlgorithmMapper
}  // namespace Model
}  // namespace ACM
}  // namespace Aws
