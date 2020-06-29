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
  enum class HlsClientCache
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace HlsClientCacheMapper
{
AWS_MEDIALIVE_API HlsClientCache GetHlsClientCacheForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsClientCache(HlsClientCache value);
} // namespace HlsClientCacheMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
