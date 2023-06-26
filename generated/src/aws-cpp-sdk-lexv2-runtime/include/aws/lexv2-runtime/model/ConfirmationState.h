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
  enum class ConfirmationState
  {
    NOT_SET,
    Confirmed,
    Denied,
    None
  };

namespace ConfirmationStateMapper
{
AWS_LEXRUNTIMEV2_API ConfirmationState GetConfirmationStateForName(const Aws::String& name);

AWS_LEXRUNTIMEV2_API Aws::String GetNameForConfirmationState(ConfirmationState value);
} // namespace ConfirmationStateMapper
} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
