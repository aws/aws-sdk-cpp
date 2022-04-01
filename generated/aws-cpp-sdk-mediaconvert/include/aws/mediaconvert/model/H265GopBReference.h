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
  enum class H265GopBReference
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H265GopBReferenceMapper
{
AWS_MEDIACONVERT_API H265GopBReference GetH265GopBReferenceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265GopBReference(H265GopBReference value);
} // namespace H265GopBReferenceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
