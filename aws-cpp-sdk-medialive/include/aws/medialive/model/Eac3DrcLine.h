﻿/*
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
  enum class Eac3DrcLine
  {
    NOT_SET,
    FILM_LIGHT,
    FILM_STANDARD,
    MUSIC_LIGHT,
    MUSIC_STANDARD,
    NONE,
    SPEECH
  };

namespace Eac3DrcLineMapper
{
AWS_MEDIALIVE_API Eac3DrcLine GetEac3DrcLineForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3DrcLine(Eac3DrcLine value);
} // namespace Eac3DrcLineMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
