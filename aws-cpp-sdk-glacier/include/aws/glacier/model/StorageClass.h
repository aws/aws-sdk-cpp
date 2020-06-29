/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glacier
{
namespace Model
{
  enum class StorageClass
  {
    NOT_SET,
    STANDARD,
    REDUCED_REDUNDANCY,
    STANDARD_IA
  };

namespace StorageClassMapper
{
AWS_GLACIER_API StorageClass GetStorageClassForName(const Aws::String& name);

AWS_GLACIER_API Aws::String GetNameForStorageClass(StorageClass value);
} // namespace StorageClassMapper
} // namespace Model
} // namespace Glacier
} // namespace Aws
