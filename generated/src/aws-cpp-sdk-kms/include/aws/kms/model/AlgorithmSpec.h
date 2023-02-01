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
  enum class AlgorithmSpec
  {
    NOT_SET,
    RSAES_PKCS1_V1_5,
    RSAES_OAEP_SHA_1,
    RSAES_OAEP_SHA_256
  };

namespace AlgorithmSpecMapper
{
AWS_KMS_API AlgorithmSpec GetAlgorithmSpecForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForAlgorithmSpec(AlgorithmSpec value);
} // namespace AlgorithmSpecMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
