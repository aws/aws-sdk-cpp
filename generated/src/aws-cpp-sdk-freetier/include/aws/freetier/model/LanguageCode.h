/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FreeTier
{
namespace Model
{
  enum class LanguageCode
  {
    NOT_SET,
    en_US,
    en_GB,
    id_ID,
    de_DE,
    es_ES,
    fr_FR,
    ja_JP,
    it_IT,
    pt_PT,
    ko_KR,
    zh_CN,
    zh_TW,
    tr_TR
  };

namespace LanguageCodeMapper
{
AWS_FREETIER_API LanguageCode GetLanguageCodeForName(const Aws::String& name);

AWS_FREETIER_API Aws::String GetNameForLanguageCode(LanguageCode value);
} // namespace LanguageCodeMapper
} // namespace Model
} // namespace FreeTier
} // namespace Aws
