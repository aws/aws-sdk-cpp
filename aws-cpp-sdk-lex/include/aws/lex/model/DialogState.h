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
  enum class DialogState
  {
    NOT_SET,
    ElicitIntent,
    ConfirmIntent,
    ElicitSlot,
    Fulfilled,
    ReadyForFulfillment,
    Failed
  };

namespace DialogStateMapper
{
AWS_LEXRUNTIMESERVICE_API DialogState GetDialogStateForName(const Aws::String& name);

AWS_LEXRUNTIMESERVICE_API Aws::String GetNameForDialogState(DialogState value);
} // namespace DialogStateMapper
} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
