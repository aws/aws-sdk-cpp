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
  enum class DialogActionType
  {
    NOT_SET,
    ElicitIntent,
    StartIntent,
    ElicitSlot,
    EvaluateConditional,
    InvokeDialogCodeHook,
    ConfirmIntent,
    FulfillIntent,
    CloseIntent,
    EndConversation
  };

namespace DialogActionTypeMapper
{
AWS_LEXMODELSV2_API DialogActionType GetDialogActionTypeForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForDialogActionType(DialogActionType value);
} // namespace DialogActionTypeMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
