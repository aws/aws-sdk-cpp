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
  enum class InterpretationSource
  {
    NOT_SET,
    Bedrock,
    Lex
  };

namespace InterpretationSourceMapper
{
AWS_LEXRUNTIMEV2_API InterpretationSource GetInterpretationSourceForName(const Aws::String& name);

AWS_LEXRUNTIMEV2_API Aws::String GetNameForInterpretationSource(InterpretationSource value);
} // namespace InterpretationSourceMapper
} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
