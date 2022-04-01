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
  enum class AncillaryConvert608To708
  {
    NOT_SET,
    UPCONVERT,
    DISABLED
  };

namespace AncillaryConvert608To708Mapper
{
AWS_MEDIACONVERT_API AncillaryConvert608To708 GetAncillaryConvert608To708ForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAncillaryConvert608To708(AncillaryConvert608To708 value);
} // namespace AncillaryConvert608To708Mapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
