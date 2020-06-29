/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{
  enum class LanguageCode
  {
    NOT_SET,
    en_US,
    es_US,
    en_AU,
    fr_CA,
    en_GB,
    de_DE,
    pt_BR,
    fr_FR,
    it_IT,
    ko_KR,
    es_ES,
    en_IN,
    hi_IN,
    ar_SA,
    ru_RU,
    zh_CN,
    nl_NL,
    id_ID,
    ta_IN,
    fa_IR,
    en_IE,
    en_AB,
    en_WL,
    pt_PT,
    te_IN,
    tr_TR,
    de_CH,
    he_IL,
    ms_MY,
    ja_JP,
    ar_AE
  };

namespace LanguageCodeMapper
{
AWS_TRANSCRIBESERVICE_API LanguageCode GetLanguageCodeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForLanguageCode(LanguageCode value);
} // namespace LanguageCodeMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
