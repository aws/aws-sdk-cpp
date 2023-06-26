/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class StorageType
  {
    NOT_SET,
    SITEWISE_DEFAULT_STORAGE,
    MULTI_LAYER_STORAGE
  };

namespace StorageTypeMapper
{
AWS_IOTSITEWISE_API StorageType GetStorageTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForStorageType(StorageType value);
} // namespace StorageTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
