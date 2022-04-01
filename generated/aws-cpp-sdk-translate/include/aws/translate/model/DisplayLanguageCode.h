/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Translate
{
namespace Model
{
  enum class DisplayLanguageCode
  {
    NOT_SET,
    de,
    en,
    es,
    fr,
    it,
    ja,
    ko,
    pt,
    zh,
    zh_TW
  };

namespace DisplayLanguageCodeMapper
{
AWS_TRANSLATE_API DisplayLanguageCode GetDisplayLanguageCodeForName(const Aws::String& name);

AWS_TRANSLATE_API Aws::String GetNameForDisplayLanguageCode(DisplayLanguageCode value);
} // namespace DisplayLanguageCodeMapper
} // namespace Model
} // namespace Translate
} // namespace Aws
