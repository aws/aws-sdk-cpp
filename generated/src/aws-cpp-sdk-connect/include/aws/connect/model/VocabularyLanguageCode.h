/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class VocabularyLanguageCode
  {
    NOT_SET,
    ar_AE,
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
    fr_CA,
    fr_FR,
    hi_IN,
    it_IT,
    ja_JP,
    ko_KR,
    pt_BR,
    pt_PT,
    zh_CN,
    en_NZ,
    en_ZA,
    ca_ES,
    da_DK,
    fi_FI,
    id_ID,
    ms_MY,
    nl_NL,
    no_NO,
    pl_PL,
    sv_SE,
    tl_PH
  };

namespace VocabularyLanguageCodeMapper
{
AWS_CONNECT_API VocabularyLanguageCode GetVocabularyLanguageCodeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForVocabularyLanguageCode(VocabularyLanguageCode value);
} // namespace VocabularyLanguageCodeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
