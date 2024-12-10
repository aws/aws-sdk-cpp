/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{
  enum class ThumbnailStorageType
  {
    NOT_SET,
    SEQUENTIAL,
    LATEST
  };

namespace ThumbnailStorageTypeMapper
{
AWS_IVSREALTIME_API ThumbnailStorageType GetThumbnailStorageTypeForName(const Aws::String& name);

AWS_IVSREALTIME_API Aws::String GetNameForThumbnailStorageType(ThumbnailStorageType value);
} // namespace ThumbnailStorageTypeMapper
} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
