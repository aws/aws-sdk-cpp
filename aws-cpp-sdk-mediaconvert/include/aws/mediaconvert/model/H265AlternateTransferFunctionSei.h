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
  enum class H265AlternateTransferFunctionSei
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H265AlternateTransferFunctionSeiMapper
{
AWS_MEDIACONVERT_API H265AlternateTransferFunctionSei GetH265AlternateTransferFunctionSeiForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265AlternateTransferFunctionSei(H265AlternateTransferFunctionSei value);
} // namespace H265AlternateTransferFunctionSeiMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
