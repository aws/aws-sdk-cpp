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
  enum class InputMode
  {
    NOT_SET,
    Text,
    Speech,
    DTMF
  };

namespace InputModeMapper
{
AWS_LEXRUNTIMEV2_API InputMode GetInputModeForName(const Aws::String& name);

AWS_LEXRUNTIMEV2_API Aws::String GetNameForInputMode(InputMode value);
} // namespace InputModeMapper
} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
