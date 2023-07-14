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
  enum class Ac3LfeFilter
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace Ac3LfeFilterMapper
{
AWS_MEDIACONVERT_API Ac3LfeFilter GetAc3LfeFilterForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAc3LfeFilter(Ac3LfeFilter value);
} // namespace Ac3LfeFilterMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
