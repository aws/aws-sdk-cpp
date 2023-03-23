/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{
  enum class LanguageCode
  {
    NOT_SET,
    en_US
  };

namespace LanguageCodeMapper
{
AWS_CHIMESDKVOICE_API LanguageCode GetLanguageCodeForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForLanguageCode(LanguageCode value);
} // namespace LanguageCodeMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
