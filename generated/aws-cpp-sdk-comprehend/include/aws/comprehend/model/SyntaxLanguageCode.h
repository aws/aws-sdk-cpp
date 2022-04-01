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
  enum class SyntaxLanguageCode
  {
    NOT_SET,
    en,
    es,
    fr,
    de,
    it,
    pt
  };

namespace SyntaxLanguageCodeMapper
{
AWS_COMPREHEND_API SyntaxLanguageCode GetSyntaxLanguageCodeForName(const Aws::String& name);

AWS_COMPREHEND_API Aws::String GetNameForSyntaxLanguageCode(SyntaxLanguageCode value);
} // namespace SyntaxLanguageCodeMapper
} // namespace Model
} // namespace Comprehend
} // namespace Aws
