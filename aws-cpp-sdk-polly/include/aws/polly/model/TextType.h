/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Polly
{
namespace Model
{
  enum class TextType
  {
    NOT_SET,
    ssml,
    text
  };

namespace TextTypeMapper
{
AWS_POLLY_API TextType GetTextTypeForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForTextType(TextType value);
} // namespace TextTypeMapper
} // namespace Model
} // namespace Polly
} // namespace Aws
