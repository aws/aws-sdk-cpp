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
  enum class DialogActionType
  {
    NOT_SET,
    Close,
    ConfirmIntent,
    Delegate,
    ElicitIntent,
    ElicitSlot,
    None
  };

namespace DialogActionTypeMapper
{
AWS_LEXRUNTIMEV2_API DialogActionType GetDialogActionTypeForName(const Aws::String& name);

AWS_LEXRUNTIMEV2_API Aws::String GetNameForDialogActionType(DialogActionType value);
} // namespace DialogActionTypeMapper
} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
