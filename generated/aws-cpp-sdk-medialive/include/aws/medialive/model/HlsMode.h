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
  enum class HlsMode
  {
    NOT_SET,
    LIVE,
    VOD
  };

namespace HlsModeMapper
{
AWS_MEDIALIVE_API HlsMode GetHlsModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsMode(HlsMode value);
} // namespace HlsModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
