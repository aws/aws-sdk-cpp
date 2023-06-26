/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class StorageType
  {
    NOT_SET,
    SSD,
    HDD
  };

namespace StorageTypeMapper
{
AWS_FSX_API StorageType GetStorageTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForStorageType(StorageType value);
} // namespace StorageTypeMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
