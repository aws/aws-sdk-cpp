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
  enum class HlsCaptionLanguageSetting
  {
    NOT_SET,
    INSERT,
    NONE,
    OMIT
  };

namespace HlsCaptionLanguageSettingMapper
{
AWS_MEDIALIVE_API HlsCaptionLanguageSetting GetHlsCaptionLanguageSettingForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsCaptionLanguageSetting(HlsCaptionLanguageSetting value);
} // namespace HlsCaptionLanguageSettingMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
