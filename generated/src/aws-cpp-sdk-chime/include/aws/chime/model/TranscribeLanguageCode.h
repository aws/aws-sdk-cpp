/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class TranscribeLanguageCode
  {
    NOT_SET,
    en_US,
    en_GB,
    es_US,
    fr_CA,
    fr_FR,
    en_AU,
    it_IT,
    de_DE,
    pt_BR,
    ja_JP,
    ko_KR,
    zh_CN,
    th_TH,
    hi_IN
  };

namespace TranscribeLanguageCodeMapper
{
AWS_CHIME_API TranscribeLanguageCode GetTranscribeLanguageCodeForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForTranscribeLanguageCode(TranscribeLanguageCode value);
} // namespace TranscribeLanguageCodeMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
