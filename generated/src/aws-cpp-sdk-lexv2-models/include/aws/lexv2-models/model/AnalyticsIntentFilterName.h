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
  enum class AnalyticsIntentFilterName
  {
    NOT_SET,
    BotAliasId,
    BotVersion,
    LocaleId,
    Modality,
    Channel,
    SessionId,
    OriginatingRequestId,
    IntentName,
    IntentEndState
  };

namespace AnalyticsIntentFilterNameMapper
{
AWS_LEXMODELSV2_API AnalyticsIntentFilterName GetAnalyticsIntentFilterNameForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsIntentFilterName(AnalyticsIntentFilterName value);
} // namespace AnalyticsIntentFilterNameMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
