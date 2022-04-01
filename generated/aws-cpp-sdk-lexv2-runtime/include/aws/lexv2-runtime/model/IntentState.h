/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexRuntimeV2
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
AWS_LEXRUNTIMEV2_API IntentState GetIntentStateForName(const Aws::String& name);

AWS_LEXRUNTIMEV2_API Aws::String GetNameForIntentState(IntentState value);
} // namespace IntentStateMapper
} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
