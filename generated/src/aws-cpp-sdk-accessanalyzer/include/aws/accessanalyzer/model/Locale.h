/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{
  enum class Locale
  {
    NOT_SET,
    DE,
    EN,
    ES,
    FR,
    IT,
    JA,
    KO,
    PT_BR,
    ZH_CN,
    ZH_TW
  };

namespace LocaleMapper
{
AWS_ACCESSANALYZER_API Locale GetLocaleForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForLocale(Locale value);
} // namespace LocaleMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
