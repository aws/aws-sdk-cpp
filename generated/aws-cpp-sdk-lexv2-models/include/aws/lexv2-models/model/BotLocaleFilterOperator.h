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
  enum class BotLocaleFilterOperator
  {
    NOT_SET,
    CO,
    EQ
  };

namespace BotLocaleFilterOperatorMapper
{
AWS_LEXMODELSV2_API BotLocaleFilterOperator GetBotLocaleFilterOperatorForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForBotLocaleFilterOperator(BotLocaleFilterOperator value);
} // namespace BotLocaleFilterOperatorMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
