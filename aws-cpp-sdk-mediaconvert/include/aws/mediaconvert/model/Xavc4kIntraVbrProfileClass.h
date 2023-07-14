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
  enum class Xavc4kIntraVbrProfileClass
  {
    NOT_SET,
    CLASS_100,
    CLASS_300,
    CLASS_480
  };

namespace Xavc4kIntraVbrProfileClassMapper
{
AWS_MEDIACONVERT_API Xavc4kIntraVbrProfileClass GetXavc4kIntraVbrProfileClassForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavc4kIntraVbrProfileClass(Xavc4kIntraVbrProfileClass value);
} // namespace Xavc4kIntraVbrProfileClassMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
