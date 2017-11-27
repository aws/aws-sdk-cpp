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
  enum class M2tsScte35Control
  {
    NOT_SET,
    NONE,
    PASSTHROUGH
  };

namespace M2tsScte35ControlMapper
{
AWS_MEDIALIVE_API M2tsScte35Control GetM2tsScte35ControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsScte35Control(M2tsScte35Control value);
} // namespace M2tsScte35ControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
