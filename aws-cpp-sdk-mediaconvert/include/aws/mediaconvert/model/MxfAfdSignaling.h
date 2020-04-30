/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  enum class MxfAfdSignaling
  {
    NOT_SET,
    NO_COPY,
    COPY_FROM_VIDEO
  };

namespace MxfAfdSignalingMapper
{
AWS_MEDIACONVERT_API MxfAfdSignaling GetMxfAfdSignalingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMxfAfdSignaling(MxfAfdSignaling value);
} // namespace MxfAfdSignalingMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
