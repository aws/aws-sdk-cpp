﻿/**
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
  enum class IntentState
  {
    NOT_SET,
    Failed,
    Fulfilled,
    InProgress,
    ReadyForFulfillment,
    Waiting,
    FulfillmentInProgress
  };

namespace IntentStateMapper
{
AWS_LEXMODELSV2_API IntentState GetIntentStateForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForIntentState(IntentState value);
} // namespace IntentStateMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
