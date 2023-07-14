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
  enum class DataKeySpec
  {
    NOT_SET,
    AES_256,
    AES_128
  };

namespace DataKeySpecMapper
{
AWS_KMS_API DataKeySpec GetDataKeySpecForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForDataKeySpec(DataKeySpec value);
} // namespace DataKeySpecMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
