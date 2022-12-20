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
    af_ZA,
    ar_AE,
    ar_SA,
    da_DK,
    de_CH,
    de_DE,
    en_AB,
    en_AU,
    en_GB,
    en_IE,
    en_IN,
    en_US,
    en_WL,
    es_ES,
    es_US,
    fa_IR,
    fr_CA,
    fr_FR,
    he_IL,
    hi_IN,
    id_ID,
    it_IT,
    ja_JP,
    ko_KR,
    ms_MY,
    nl_NL,
    pt_BR,
    pt_PT,
    ru_RU,
    ta_IN,
    te_IN,
    tr_TR,
    zh_CN,
    zh_TW,
    th_TH,
    en_ZA,
    en_NZ,
    vi_VN,
    sv_SE
  };

namespace LanguageCodeMapper
{
AWS_TRANSCRIBESERVICE_API LanguageCode GetLanguageCodeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForLanguageCode(LanguageCode value);
} // namespace LanguageCodeMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
