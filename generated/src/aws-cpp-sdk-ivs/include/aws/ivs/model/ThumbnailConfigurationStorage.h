/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IVS
{
namespace Model
{
  enum class ThumbnailConfigurationStorage
  {
    NOT_SET,
    SEQUENTIAL,
    LATEST
  };

namespace ThumbnailConfigurationStorageMapper
{
AWS_IVS_API ThumbnailConfigurationStorage GetThumbnailConfigurationStorageForName(const Aws::String& name);

AWS_IVS_API Aws::String GetNameForThumbnailConfigurationStorage(ThumbnailConfigurationStorage value);
} // namespace ThumbnailConfigurationStorageMapper
} // namespace Model
} // namespace IVS
} // namespace Aws
