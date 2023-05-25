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
  enum class WrappingKeySpec
  {
    NOT_SET,
    RSA_2048
  };

namespace WrappingKeySpecMapper
{
AWS_KMS_API WrappingKeySpec GetWrappingKeySpecForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForWrappingKeySpec(WrappingKeySpec value);
} // namespace WrappingKeySpecMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
