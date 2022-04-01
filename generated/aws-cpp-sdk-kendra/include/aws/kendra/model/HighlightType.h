/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class HighlightType
  {
    NOT_SET,
    STANDARD,
    THESAURUS_SYNONYM
  };

namespace HighlightTypeMapper
{
AWS_KENDRA_API HighlightType GetHighlightTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForHighlightType(HighlightType value);
} // namespace HighlightTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
