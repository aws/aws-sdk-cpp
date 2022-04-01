/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{
  enum class MacAlgorithmSpec
  {
    NOT_SET,
    HMAC_SHA_224,
    HMAC_SHA_256,
    HMAC_SHA_384,
    HMAC_SHA_512
  };

namespace MacAlgorithmSpecMapper
{
AWS_KMS_API MacAlgorithmSpec GetMacAlgorithmSpecForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForMacAlgorithmSpec(MacAlgorithmSpec value);
} // namespace MacAlgorithmSpecMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
