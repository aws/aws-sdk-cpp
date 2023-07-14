/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudSearch
{
namespace Model
{
  enum class AnalysisSchemeLanguage
  {
    NOT_SET,
    ar,
    bg,
    ca,
    cs,
    da,
    de,
    el,
    en,
    es,
    eu,
    fa,
    fi,
    fr,
    ga,
    gl,
    he,
    hi,
    hu,
    hy,
    id,
    it,
    ja,
    ko,
    lv,
    mul,
    nl,
    no,
    pt,
    ro,
    ru,
    sv,
    th,
    tr,
    zh_Hans,
    zh_Hant
  };

namespace AnalysisSchemeLanguageMapper
{
AWS_CLOUDSEARCH_API AnalysisSchemeLanguage GetAnalysisSchemeLanguageForName(const Aws::String& name);

AWS_CLOUDSEARCH_API Aws::String GetNameForAnalysisSchemeLanguage(AnalysisSchemeLanguage value);
} // namespace AnalysisSchemeLanguageMapper
} // namespace Model
} // namespace CloudSearch
} // namespace Aws
