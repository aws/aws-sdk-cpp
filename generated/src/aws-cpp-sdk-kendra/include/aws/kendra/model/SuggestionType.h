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
  enum class SuggestionType
  {
    NOT_SET,
    QUERY,
    DOCUMENT_ATTRIBUTES
  };

namespace SuggestionTypeMapper
{
AWS_KENDRA_API SuggestionType GetSuggestionTypeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForSuggestionType(SuggestionType value);
} // namespace SuggestionTypeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
