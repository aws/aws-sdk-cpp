/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{
  enum class ImageFormat
  {
    NOT_SET,
    png,
    jpeg,
    gif,
    webp
  };

namespace ImageFormatMapper
{
AWS_BEDROCKRUNTIME_API ImageFormat GetImageFormatForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForImageFormat(ImageFormat value);
} // namespace ImageFormatMapper
} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
