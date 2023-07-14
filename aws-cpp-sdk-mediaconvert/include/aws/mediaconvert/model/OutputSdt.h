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
  enum class OutputSdt
  {
    NOT_SET,
    SDT_FOLLOW,
    SDT_FOLLOW_IF_PRESENT,
    SDT_MANUAL,
    SDT_NONE
  };

namespace OutputSdtMapper
{
AWS_MEDIACONVERT_API OutputSdt GetOutputSdtForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForOutputSdt(OutputSdt value);
} // namespace OutputSdtMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
