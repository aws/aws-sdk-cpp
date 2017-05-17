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
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Polly
{
namespace Model
{
  enum class VoiceId
  {
    NOT_SET,
    Geraint,
    Gwyneth,
    Mads,
    Naja,
    Hans,
    Marlene,
    Nicole,
    Russell,
    Amy,
    Brian,
    Emma,
    Raveena,
    Ivy,
    Joanna,
    Joey,
    Justin,
    Kendra,
    Kimberly,
    Salli,
    Conchita,
    Enrique,
    Miguel,
    Penelope,
    Chantal,
    Celine,
    Mathieu,
    Dora,
    Karl,
    Carla,
    Giorgio,
    Mizuki,
    Liv,
    Lotte,
    Ruben,
    Ewa,
    Jacek,
    Jan,
    Maja,
    Ricardo,
    Vitoria,
    Cristiano,
    Ines,
    Carmen,
    Maxim,
    Tatyana,
    Astrid,
    Filiz
  };

namespace VoiceIdMapper
{
AWS_POLLY_API VoiceId GetVoiceIdForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForVoiceId(VoiceId value);
} // namespace VoiceIdMapper
} // namespace Model
} // namespace Polly
} // namespace Aws
