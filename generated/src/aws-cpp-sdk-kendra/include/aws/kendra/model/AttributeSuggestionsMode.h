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
  enum class AttributeSuggestionsMode
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace AttributeSuggestionsModeMapper
{
AWS_KENDRA_API AttributeSuggestionsMode GetAttributeSuggestionsModeForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForAttributeSuggestionsMode(AttributeSuggestionsMode value);
} // namespace AttributeSuggestionsModeMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
