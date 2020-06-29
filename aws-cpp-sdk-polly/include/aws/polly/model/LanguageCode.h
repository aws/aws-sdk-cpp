/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Polly
{
namespace Model
{
  enum class LanguageCode
  {
    NOT_SET,
    arb,
    cmn_CN,
    cy_GB,
    da_DK,
    de_DE,
    en_AU,
    en_GB,
    en_GB_WLS,
    en_IN,
    en_US,
    es_ES,
    es_MX,
    es_US,
    fr_CA,
    fr_FR,
    is_IS,
    it_IT,
    ja_JP,
    hi_IN,
    ko_KR,
    nb_NO,
    nl_NL,
    pl_PL,
    pt_BR,
    pt_PT,
    ro_RO,
    ru_RU,
    sv_SE,
    tr_TR
  };

namespace LanguageCodeMapper
{
AWS_POLLY_API LanguageCode GetLanguageCodeForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForLanguageCode(LanguageCode value);
} // namespace LanguageCodeMapper
} // namespace Model
} // namespace Polly
} // namespace Aws
