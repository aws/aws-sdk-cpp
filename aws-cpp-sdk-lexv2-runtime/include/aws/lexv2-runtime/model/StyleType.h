/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{
  enum class StyleType
  {
    NOT_SET,
    Default,
    SpellByLetter,
    SpellByWord
  };

namespace StyleTypeMapper
{
AWS_LEXRUNTIMEV2_API StyleType GetStyleTypeForName(const Aws::String& name);

AWS_LEXRUNTIMEV2_API Aws::String GetNameForStyleType(StyleType value);
} // namespace StyleTypeMapper
} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
