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
  enum class AnalyticsIntentField
  {
    NOT_SET,
    IntentName,
    IntentEndState,
    IntentLevel
  };

namespace AnalyticsIntentFieldMapper
{
AWS_LEXMODELSV2_API AnalyticsIntentField GetAnalyticsIntentFieldForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsIntentField(AnalyticsIntentField value);
} // namespace AnalyticsIntentFieldMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
