/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class EncodingName
  {
    NOT_SET,
    jxsv,
    raw,
    smpte291,
    pcm
  };

namespace EncodingNameMapper
{
AWS_MEDIACONNECT_API EncodingName GetEncodingNameForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForEncodingName(EncodingName value);
} // namespace EncodingNameMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
