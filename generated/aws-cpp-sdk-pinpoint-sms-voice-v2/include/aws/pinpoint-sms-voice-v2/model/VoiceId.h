/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{
  enum class VoiceId
  {
    NOT_SET,
    AMY,
    ASTRID,
    BIANCA,
    BRIAN,
    CAMILA,
    CARLA,
    CARMEN,
    CELINE,
    CHANTAL,
    CONCHITA,
    CRISTIANO,
    DORA,
    EMMA,
    ENRIQUE,
    EWA,
    FILIZ,
    GERAINT,
    GIORGIO,
    GWYNETH,
    HANS,
    INES,
    IVY,
    JACEK,
    JAN,
    JOANNA,
    JOEY,
    JUSTIN,
    KARL,
    KENDRA,
    KIMBERLY,
    LEA,
    LIV,
    LOTTE,
    LUCIA,
    LUPE,
    MADS,
    MAJA,
    MARLENE,
    MATHIEU,
    MATTHEW,
    MAXIM,
    MIA,
    MIGUEL,
    MIZUKI,
    NAJA,
    NICOLE,
    PENELOPE,
    RAVEENA,
    RICARDO,
    RUBEN,
    RUSSELL,
    SALLI,
    SEOYEON,
    TAKUMI,
    TATYANA,
    VICKI,
    VITORIA,
    ZEINA,
    ZHIYU
  };

namespace VoiceIdMapper
{
AWS_PINPOINTSMSVOICEV2_API VoiceId GetVoiceIdForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForVoiceId(VoiceId value);
} // namespace VoiceIdMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
