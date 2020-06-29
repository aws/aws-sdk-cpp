/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class HlsMediaStoreStorageClass
  {
    NOT_SET,
    TEMPORAL
  };

namespace HlsMediaStoreStorageClassMapper
{
AWS_MEDIALIVE_API HlsMediaStoreStorageClass GetHlsMediaStoreStorageClassForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsMediaStoreStorageClass(HlsMediaStoreStorageClass value);
} // namespace HlsMediaStoreStorageClassMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
