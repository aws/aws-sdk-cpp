/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFV2
{
namespace Model
{
  enum class TextTransformationType
  {
    NOT_SET,
    NONE,
    COMPRESS_WHITE_SPACE,
    HTML_ENTITY_DECODE,
    LOWERCASE,
    CMD_LINE,
    URL_DECODE
  };

namespace TextTransformationTypeMapper
{
AWS_WAFV2_API TextTransformationType GetTextTransformationTypeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForTextTransformationType(TextTransformationType value);
} // namespace TextTransformationTypeMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
