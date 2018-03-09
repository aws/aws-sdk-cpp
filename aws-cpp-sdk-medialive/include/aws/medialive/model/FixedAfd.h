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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class FixedAfd
  {
    NOT_SET,
    AFD_0000,
    AFD_0010,
    AFD_0011,
    AFD_0100,
    AFD_1000,
    AFD_1001,
    AFD_1010,
    AFD_1011,
    AFD_1101,
    AFD_1110,
    AFD_1111
  };

namespace FixedAfdMapper
{
AWS_MEDIALIVE_API FixedAfd GetFixedAfdForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForFixedAfd(FixedAfd value);
} // namespace FixedAfdMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
