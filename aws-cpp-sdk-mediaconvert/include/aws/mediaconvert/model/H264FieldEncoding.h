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
  enum class H264FieldEncoding
  {
    NOT_SET,
    PAFF,
    FORCE_FIELD
  };

namespace H264FieldEncodingMapper
{
AWS_MEDIACONVERT_API H264FieldEncoding GetH264FieldEncodingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264FieldEncoding(H264FieldEncoding value);
} // namespace H264FieldEncodingMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
