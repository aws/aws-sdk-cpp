/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class FileSourceConvert608To708
  {
    NOT_SET,
    UPCONVERT,
    DISABLED
  };

namespace FileSourceConvert608To708Mapper
{
AWS_MEDIACONVERT_API FileSourceConvert608To708 GetFileSourceConvert608To708ForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForFileSourceConvert608To708(FileSourceConvert608To708 value);
} // namespace FileSourceConvert608To708Mapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
