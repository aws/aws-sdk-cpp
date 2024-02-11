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
  enum class AnalyticsCommonFilterName
  {
    NOT_SET,
    BotAliasId,
    BotVersion,
    LocaleId,
    Modality,
    Channel
  };

namespace AnalyticsCommonFilterNameMapper
{
AWS_LEXMODELSV2_API AnalyticsCommonFilterName GetAnalyticsCommonFilterNameForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsCommonFilterName(AnalyticsCommonFilterName value);
} // namespace AnalyticsCommonFilterNameMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
