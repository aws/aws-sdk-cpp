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
  enum class AnalyticsSessionSortByName
  {
    NOT_SET,
    ConversationStartTime,
    NumberOfTurns,
    Duration
  };

namespace AnalyticsSessionSortByNameMapper
{
AWS_LEXMODELSV2_API AnalyticsSessionSortByName GetAnalyticsSessionSortByNameForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsSessionSortByName(AnalyticsSessionSortByName value);
} // namespace AnalyticsSessionSortByNameMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
