/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/SessionBorderControllerType.h>
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
      namespace SessionBorderControllerTypeMapper
      {

        static const int RIBBON_SBC_HASH = HashingUtils::HashString("RIBBON_SBC");
        static const int ORACLE_ACME_PACKET_SBC_HASH = HashingUtils::HashString("ORACLE_ACME_PACKET_SBC");
        static const int AVAYA_SBCE_HASH = HashingUtils::HashString("AVAYA_SBCE");
        static const int CISCO_UNIFIED_BORDER_ELEMENT_HASH = HashingUtils::HashString("CISCO_UNIFIED_BORDER_ELEMENT");
        static const int AUDIOCODES_MEDIANT_SBC_HASH = HashingUtils::HashString("AUDIOCODES_MEDIANT_SBC");


        SessionBorderControllerType GetSessionBorderControllerTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RIBBON_SBC_HASH)
          {
            return SessionBorderControllerType::RIBBON_SBC;
          }
          else if (hashCode == ORACLE_ACME_PACKET_SBC_HASH)
          {
            return SessionBorderControllerType::ORACLE_ACME_PACKET_SBC;
          }
          else if (hashCode == AVAYA_SBCE_HASH)
          {
            return SessionBorderControllerType::AVAYA_SBCE;
          }
          else if (hashCode == CISCO_UNIFIED_BORDER_ELEMENT_HASH)
          {
            return SessionBorderControllerType::CISCO_UNIFIED_BORDER_ELEMENT;
          }
          else if (hashCode == AUDIOCODES_MEDIANT_SBC_HASH)
          {
            return SessionBorderControllerType::AUDIOCODES_MEDIANT_SBC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SessionBorderControllerType>(hashCode);
          }

          return SessionBorderControllerType::NOT_SET;
        }

        Aws::String GetNameForSessionBorderControllerType(SessionBorderControllerType enumValue)
        {
          switch(enumValue)
          {
          case SessionBorderControllerType::NOT_SET:
            return {};
          case SessionBorderControllerType::RIBBON_SBC:
            return "RIBBON_SBC";
          case SessionBorderControllerType::ORACLE_ACME_PACKET_SBC:
            return "ORACLE_ACME_PACKET_SBC";
          case SessionBorderControllerType::AVAYA_SBCE:
            return "AVAYA_SBCE";
          case SessionBorderControllerType::CISCO_UNIFIED_BORDER_ELEMENT:
            return "CISCO_UNIFIED_BORDER_ELEMENT";
          case SessionBorderControllerType::AUDIOCODES_MEDIANT_SBC:
            return "AUDIOCODES_MEDIANT_SBC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SessionBorderControllerTypeMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
