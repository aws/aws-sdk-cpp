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
  enum class VoiceConnectorIntegrationType
  {
    NOT_SET,
    CONNECT_CALL_TRANSFER_CONNECTOR,
    CONNECT_ANALYTICS_CONNECTOR
  };

namespace VoiceConnectorIntegrationTypeMapper
{
AWS_CHIMESDKVOICE_API VoiceConnectorIntegrationType GetVoiceConnectorIntegrationTypeForName(const Aws::String& name);

AWS_CHIMESDKVOICE_API Aws::String GetNameForVoiceConnectorIntegrationType(VoiceConnectorIntegrationType value);
} // namespace VoiceConnectorIntegrationTypeMapper
} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
