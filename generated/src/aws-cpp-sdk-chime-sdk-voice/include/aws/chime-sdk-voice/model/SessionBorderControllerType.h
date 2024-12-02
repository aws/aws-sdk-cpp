/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{
  enum class SessionBorderControllerType
  {
    NOT_SET,
    RIBBON_SBC,
    ORACLE_ACME_PACKET_SBC,
    AVAYA_SBCE,
    CISCO_UNIFIED_BORDER_ELEMENT,
    AUDIOCODES_MEDIANT_SBC
  };

namespace SessionBorderControllerTypeMapper
{
AWS_CHIMESDKVOICE_API SessionBorderControllerType GetSessionBorderControllerTypeForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForSessionBorderControllerType(SessionBorderControllerType value);
} // namespace SessionBorderControllerTypeMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
