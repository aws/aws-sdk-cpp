/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Camila,
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
    Kevin,
    Kimberly,
    Lea,
    Liv,
    Lotte,
    Lucia,
    Lupe,
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
    Olivia,
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
