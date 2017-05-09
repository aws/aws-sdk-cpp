/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
