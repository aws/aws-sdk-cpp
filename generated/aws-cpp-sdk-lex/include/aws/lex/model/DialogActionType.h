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
  enum class DialogActionType
  {
    NOT_SET,
    ElicitIntent,
    ConfirmIntent,
    ElicitSlot,
    Close,
    Delegate
  };

namespace DialogActionTypeMapper
{
AWS_LEXRUNTIMESERVICE_API DialogActionType GetDialogActionTypeForName(const Aws::String& name);

AWS_LEXRUNTIMESERVICE_API Aws::String GetNameForDialogActionType(DialogActionType value);
} // namespace DialogActionTypeMapper
} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
