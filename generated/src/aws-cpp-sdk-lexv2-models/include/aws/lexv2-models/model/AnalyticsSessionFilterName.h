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
  enum class AnalyticsSessionFilterName
  {
    NOT_SET,
    BotAliasId,
    BotVersion,
    LocaleId,
    Modality,
    Channel,
    Duration,
    ConversationEndState,
    SessionId,
    OriginatingRequestId,
    IntentPath
  };

namespace AnalyticsSessionFilterNameMapper
{
AWS_LEXMODELSV2_API AnalyticsSessionFilterName GetAnalyticsSessionFilterNameForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsSessionFilterName(AnalyticsSessionFilterName value);
} // namespace AnalyticsSessionFilterNameMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
