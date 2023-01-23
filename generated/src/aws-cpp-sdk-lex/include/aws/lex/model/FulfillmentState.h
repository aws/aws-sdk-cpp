/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{
  enum class FulfillmentState
  {
    NOT_SET,
    Fulfilled,
    Failed,
    ReadyForFulfillment
  };

namespace FulfillmentStateMapper
{
AWS_LEXRUNTIMESERVICE_API FulfillmentState GetFulfillmentStateForName(const Aws::String& name);

AWS_LEXRUNTIMESERVICE_API Aws::String GetNameForFulfillmentState(FulfillmentState value);
} // namespace FulfillmentStateMapper
} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
