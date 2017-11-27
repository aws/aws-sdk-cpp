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
  enum class InputDenoiseFilter
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace InputDenoiseFilterMapper
{
AWS_MEDIACONVERT_API InputDenoiseFilter GetInputDenoiseFilterForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForInputDenoiseFilter(InputDenoiseFilter value);
} // namespace InputDenoiseFilterMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
