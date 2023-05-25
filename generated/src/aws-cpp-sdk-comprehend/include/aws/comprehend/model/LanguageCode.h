/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{
  enum class LanguageCode
  {
    NOT_SET,
    en,
    es,
    fr,
    de,
    it,
    pt,
    ar,
    hi,
    ja,
    ko,
    zh,
    zh_TW
  };

namespace LanguageCodeMapper
{
AWS_COMPREHEND_API LanguageCode GetLanguageCodeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForLanguageCode(LanguageCode value);
} // namespace LanguageCodeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
