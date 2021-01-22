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
  enum class MessageContentType
  {
    NOT_SET,
    CustomPayload,
    ImageResponseCard,
    PlainText,
    SSML
  };

namespace MessageContentTypeMapper
{
AWS_LEXRUNTIMEV2_API MessageContentType GetMessageContentTypeForName(const Aws::String& name);

AWS_LEXRUNTIMEV2_API Aws::String GetNameForMessageContentType(MessageContentType value);
} // namespace MessageContentTypeMapper
} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
