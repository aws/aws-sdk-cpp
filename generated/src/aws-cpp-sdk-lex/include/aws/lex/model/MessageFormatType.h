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
  enum class MessageFormatType
  {
    NOT_SET,
    PlainText,
    CustomPayload,
    SSML,
    Composite
  };

namespace MessageFormatTypeMapper
{
AWS_LEXRUNTIMESERVICE_API MessageFormatType GetMessageFormatTypeForName(const Aws::String& name);

AWS_LEXRUNTIMESERVICE_API Aws::String GetNameForMessageFormatType(MessageFormatType value);
} // namespace MessageFormatTypeMapper
} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
