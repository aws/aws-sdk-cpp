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
  enum class ContactCenterSystemType
  {
    NOT_SET,
    GENESYS_ENGAGE_ON_PREMISES,
    AVAYA_AURA_CALL_CENTER_ELITE,
    AVAYA_AURA_CONTACT_CENTER,
    CISCO_UNIFIED_CONTACT_CENTER_ENTERPRISE
  };

namespace ContactCenterSystemTypeMapper
{
AWS_CHIMESDKVOICE_API ContactCenterSystemType GetContactCenterSystemTypeForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForContactCenterSystemType(ContactCenterSystemType value);
} // namespace ContactCenterSystemTypeMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
