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
    Aditi,
    Amy,
    Astrid,
    Bianca,
    Brian,
    Carla,
    Carmen,
    Celine,
    Chantal,
    Conchita,
    Cristiano,
    Dora,
    Emma,
    Enrique,
    Ewa,
    Filiz,
    Geraint,
    Giorgio,
    Gwyneth,
    Hans,
    Ines,
    Ivy,
    Jacek,
    Jan,
    Joanna,
    Joey,
    Justin,
    Karl,
    Kendra,
    Kimberly,
    Lea,
    Liv,
    Lotte,
    Lucia,
    Mads,
    Maja,
    Marlene,
    Mathieu,
    Matthew,
    Maxim,
    Mia,
    Miguel,
    Mizuki,
    Naja,
    Nicole,
    Penelope,
    Raveena,
    Ricardo,
    Ruben,
    Russell,
    Salli,
    Seoyeon,
    Takumi,
    Tatyana,
    Vicki,
    Vitoria,
    Zeina,
    Zhiyu
  };

namespace VoiceIdMapper
{
AWS_POLLY_API VoiceId GetVoiceIdForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForVoiceId(VoiceId value);
} // namespace VoiceIdMapper
} // namespace Model
} // namespace Polly
} // namespace Aws
