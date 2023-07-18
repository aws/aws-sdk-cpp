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
  enum class AnalyticsInterval
  {
    NOT_SET,
    OneHour,
    OneDay
  };

namespace AnalyticsIntervalMapper
{
AWS_LEXMODELSV2_API AnalyticsInterval GetAnalyticsIntervalForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForAnalyticsInterval(AnalyticsInterval value);
} // namespace AnalyticsIntervalMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
