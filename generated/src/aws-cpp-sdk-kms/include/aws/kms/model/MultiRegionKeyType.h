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
  enum class MultiRegionKeyType
  {
    NOT_SET,
    PRIMARY,
    REPLICA
  };

namespace MultiRegionKeyTypeMapper
{
AWS_KMS_API MultiRegionKeyType GetMultiRegionKeyTypeForName(const Aws::String& name);

AWS_KMS_API Aws::String GetNameForMultiRegionKeyType(MultiRegionKeyType value);
} // namespace MultiRegionKeyTypeMapper
} // namespace Model
} // namespace KMS
} // namespace Aws
