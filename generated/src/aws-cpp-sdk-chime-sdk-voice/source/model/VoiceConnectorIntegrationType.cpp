/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/VoiceConnectorIntegrationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKVoice
  {
    namespace Model
    {
      namespace VoiceConnectorIntegrationTypeMapper
      {

        static const int CONNECT_CALL_TRANSFER_CONNECTOR_HASH = HashingUtils::HashString("CONNECT_CALL_TRANSFER_CONNECTOR");
        static const int CONNECT_ANALYTICS_CONNECTOR_HASH = HashingUtils::HashString("CONNECT_ANALYTICS_CONNECTOR");


        VoiceConnectorIntegrationType GetVoiceConnectorIntegrationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONNECT_CALL_TRANSFER_CONNECTOR_HASH)
          {
            return VoiceConnectorIntegrationType::CONNECT_CALL_TRANSFER_CONNECTOR;
          }
          else if (hashCode == CONNECT_ANALYTICS_CONNECTOR_HASH)
          {
            return VoiceConnectorIntegrationType::CONNECT_ANALYTICS_CONNECTOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VoiceConnectorIntegrationType>(hashCode);
          }

          return VoiceConnectorIntegrationType::NOT_SET;
        }

        Aws::String GetNameForVoiceConnectorIntegrationType(VoiceConnectorIntegrationType enumValue)
        {
          switch(enumValue)
          {
          case VoiceConnectorIntegrationType::NOT_SET:
            return {};
          case VoiceConnectorIntegrationType::CONNECT_CALL_TRANSFER_CONNECTOR:
            return "CONNECT_CALL_TRANSFER_CONNECTOR";
          case VoiceConnectorIntegrationType::CONNECT_ANALYTICS_CONNECTOR:
            return "CONNECT_ANALYTICS_CONNECTOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VoiceConnectorIntegrationTypeMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
