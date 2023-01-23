/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{
  enum class BuiltInIntentSortAttribute
  {
    NOT_SET,
    IntentSignature
  };

namespace BuiltInIntentSortAttributeMapper
{
AWS_LEXMODELSV2_API BuiltInIntentSortAttribute GetBuiltInIntentSortAttributeForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForBuiltInIntentSortAttribute(BuiltInIntentSortAttribute value);
} // namespace BuiltInIntentSortAttributeMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
