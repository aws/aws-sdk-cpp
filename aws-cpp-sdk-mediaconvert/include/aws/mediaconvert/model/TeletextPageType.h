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
  enum class TeletextPageType
  {
    NOT_SET,
    PAGE_TYPE_INITIAL,
    PAGE_TYPE_SUBTITLE,
    PAGE_TYPE_ADDL_INFO,
    PAGE_TYPE_PROGRAM_SCHEDULE,
    PAGE_TYPE_HEARING_IMPAIRED_SUBTITLE
  };

namespace TeletextPageTypeMapper
{
AWS_MEDIACONVERT_API TeletextPageType GetTeletextPageTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTeletextPageType(TeletextPageType value);
} // namespace TeletextPageTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
