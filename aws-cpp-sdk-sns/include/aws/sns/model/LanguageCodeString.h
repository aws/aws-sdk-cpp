/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SNS
{
namespace Model
{
  enum class LanguageCodeString
  {
    NOT_SET,
    en_US,
    en_GB,
    es_419,
    es_ES,
    de_DE,
    fr_CA,
    fr_FR,
    it_IT,
    ja_JP,
    pt_BR,
    kr_KR,
    zh_CN,
    zh_TW
  };

namespace LanguageCodeStringMapper
{
AWS_SNS_API LanguageCodeString GetLanguageCodeStringForName(const Aws::String& name);

AWS_SNS_API Aws::String GetNameForLanguageCodeString(LanguageCodeString value);
} // namespace LanguageCodeStringMapper
} // namespace Model
} // namespace SNS
} // namespace Aws
