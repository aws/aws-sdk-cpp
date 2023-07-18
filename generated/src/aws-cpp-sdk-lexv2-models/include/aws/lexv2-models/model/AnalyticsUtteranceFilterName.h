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
  enum class AnalyticsUtteranceFilterName
  {
    NOT_SET,
    BotAliasId,
    BotVersion,
    LocaleId,
    Modality,
    Channel,
    SessionId,
    OriginatingRequestId,
    UtteranceState,
    UtteranceText
  };

namespace AnalyticsUtteranceFilterNameMapper
{
AWS_LEXMODELSV2_API AnalyticsUtteranceFilterName GetAnalyticsUtteranceFilterNameForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsUtteranceFilterName(AnalyticsUtteranceFilterName value);
} // namespace AnalyticsUtteranceFilterNameMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
